# 两台服务器之间拷贝文件-scp方法 
使用实例：

sup -r /mnt/yilinli_api root@***.**.**.**:/mnt/LL_api
1
1
不同的Linux之间copy文件通常有4种方法 
1.ftp 
2.samba服务 
3.sftp 
4.scp

以上前三种方法，都比较繁琐，这里不赘述。最简单的方法就是scp，可以理解为ssh管道下的cp命令。

把当前一个文件copy到远程服务器上：

scp /home/a.txt root@192.168.0.8:/home/root
1
1
然后会提示输入192.168.0.8的root密码，接着就开始复制传输了。

把远程主机copy到当前主机：

scp root@192.168.0.8:/home/b.txt
1
1
复制文件夹:

scp -r root@192.168.0.8:/home/ /root/home2
1
1
命令scp 介绍

scp 本地用户名@IP地址:文件名1 远程用户名@IP地址:文件名2

　　[本地用户名@IP地址:] 可以不输入,可能需要输入远程用户名所对应的密码.

　　可能有用的几个参数:

　　-v 和大多数linux命令中的-v意思一样,用来显示进度.可以用来查看连接,认证,或是配置错误.

　　-C 使能压缩选项.

　　-P 选择端口.注意-p已经被rcp使用.

　　-4 强行使用IPV4地址.

　　-6 强行使用IPV6地址.

　　1、拷贝单个文件命令：

　　scp file username@ip:filepath
1
1
　　说明：

　　file: 要拷贝的文件名

　　username: 远程登录的用户名，

　　ip：远程服务器ip

　　filepath：远程文件路径

　　2、拷贝文件夹命令如下(多加上一个-r 参数即可)：

scp -r file username@ip:filepath