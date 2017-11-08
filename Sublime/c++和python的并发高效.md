公司在做一个 web 服务器。服务器接入部分是用Python 写的，但是由于接入用户很多，有点吃不消。于是让我围绕 python 与c 的并发上效率差异。
做了一些尝试之后发现c 并发的效率竟然比 python 高如50 多倍。
测试的方法：
开辟50 个线程做 百钱买百鸡问题50次。由于是测试故意用了最低效的三重循环。
然后在开辟500 个线程测试。
分别记录 c 与 python 运行的时间，进行对比。

补充:测试过程先使用了 Python 的多线程。但是执行以后发现相当的慢于是，改用多进程，但是还是很慢。于是考虑到python 解释器版本低。去官网更新到最新版本。但是发现竟然更慢了。
python 代码

    import multiprocessing
    #----------------------------------------------------------------------
    def buy():
        """"""
        for i in range(101):
            for j in range(101):
                for k in range(101):
                    if 5 * i + 3 * j + k / 3 == 100:
                        if k % 3 == 0 and i + j + k == 100:
                            pass
                            #print i, j, k
                            #a = 1
     
    #----------------------------------------------------------------------
    def start_process():
        """"""
     
        for z in range(50):
            p = multiprocessing.Process(target=buy)
            process.append(p)
            p.start()
        #for z in process:
         #   z.start()
            #print 'start', z
     
        for z in process:
            #print 'join'
            z.join()
     
     
        stop = time.time()
        #print threading.activeCount(), 'is Running...'
     
    #----------------------------------------------------------------------
    if __name__ == '__main__':
     
        start = time.time()
        start_process()

C代码

    void* BaiJi( void* arg )
    {
            int i,j,k;
            for( i=0; i<101; i++ )
            {
                    for( j=0; j<101; j++ )
                    {
                            for( k=0; k<101; k++ )
                            {
                                    if( 5 * i + 3 * j + k / 3 == 100 ){
                                            if( k%3==0 && i+j+k == 100 )
                                            {
                                            }
                                    }
                            }
                    }
            }
    }
     
     
    int main()
    {
            pthread_t tidArry[50];
            pthread_attr_t attr;
     
            pthread_attr_init( &attr );
            pthread_attr_setstacksize( &attr, 1024 );
     
            int i;
     
            for( i =0; i<50; i++ )
            {
                    if( pthread_create( &tidArry[i], &attr, BaiJi, NULL ) )
                    {
                            printf("error\n");
                    }
     
            }
     
            for( i=0; i<50; i++ )
            {
                    pthread_join( tidArry[i], NULL );
            }
            return 0;
    }


双核 1g 内存 centos6.5
50 个线程 c 时间0.127s   python 时间 8s

      1 import multiprocessing
      2 import gevent
      3 import time
      4 
      5 process = []
      6 
      7 #----------------------------------------------------------------------
      8 def buy():
      9     #print "yes"
     10     for i in range(101):
     11         for j in range(101):
     12             for k in range(101):
     13                 if 5 * i + 3 * j + k / 3 == 100:
     14                     if k % 3 == 0 and i + j + k == 100:
     15                         pass
     16                         #print i, j, k
     17                         #a = 1
     18 
     19 #----------------------------------------------------------------------
     20 def start_process():
     21 
     22     for z in range(50):
     23         a = gevent.spawn( buy )
     24         process.append(a)
     25 
     26 
     27     gevent.wait()
     28     #join thread
     29     for z in process:
     30         a.join()
     31         #print "join"
     32 
     33 #----------------------------------------------------------------------
     34 
     35 if __name__ == '__main__':
     36     start_process()

结果发现，此分代码的效率竟然比python 自带的现场还要慢一倍．
我是c 程序员，没法忍受这种效率．感觉这样凑合的公司还是......

http://bbs.csdn.net/topics/390938208










