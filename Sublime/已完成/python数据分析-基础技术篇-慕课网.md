# Python数据分析-20170811
## 一、Python数据分析概述
1. 数据分析的含义与目标 
    + 统计分析方法  
    + 提取有用信息  
    + 研究、概括、总结  

2. Python与数据分析  
特点：简洁（代码量少） 开发效率高  运算速度慢（不适合运算密集型、适合IO密集型）  胶水特性（可以集成快速的C语言）  

3. Python数据分析大家族：
numpy: 数据结构基础  
scipy: 强大的科学计算方法（矩阵分析、信号分析、数理分析等）  
matplotlib:丰富的可视化套件  
pandas: 基础数据分析套件  
scikit-learn :强大的数据分析建模库  
keras:人工神经网络   

4. Python环境搭建
科学计算工具：Anaconda  
Python+IPython+Jupyter+Spyder
    * Jupyter Notebook（此前被称为 IPython notebook）是一个交互式笔记本，支持运行 40 多种编程语言。Jupyter Notebook 的本质是一个 Web 应用程序，便于创建和共享文学化程序文档，支持实时代码，数学方程，可视化和 markdown。 用途包括：数据清理和转换，数值模拟，统计建模，机器学习等等。
    * IPython是一个交互式计算系统。主要包含三个组件：增加的交互式 “Python shell”，解耦的双过程通信模型，交互式并行计算的架构。支持变量自动补全。
    * Spyder是Python(x,y)的作者为它开发的一个简单的集成开发环境。和其他的Python开发环境相比，它最大的优点就是模仿MATLAB的“工作空间”的功能，可以很方便地观察和修改数组的值。

## 二、Python数据分析基础技术
### 1. numpy  
关键词：开源   数据计算扩展  
功能：提供了一种新的数据结构ndarray    多位操作  线性代数  
官网：http://www.numpy.org/  

---
python 中的 list 可以放多种类型，numpy底层是C写的，为了达到运算速度，我们要求他只能装下一种类型，可以定义他只能装的数据类型。放入初始化的 list 的时候可以同时指定装入的类型x=np.array(lst,dtype=np.float) 指定数据类型的时候要以 np. 开头   

数据类型：bool,int/8/16/32/64/128,uint8/16/32/64/128,float/16/32/64,complex64/128,string   
np.array的属性：   

+ shape 多少行，多少列  
+ ndim 维度  
+ dtype 数值类型  
+ itemsize 每个元素占的空间大小，字节为单位，float 64 每个元素占 8 个字节  
+ size 大小，有6个元素，size 就是6，共占 6*8=48 字节。  
---
    print (np.zeros([2, 4]))#输出元素都为0的2行4列数组
    print (np.ones([3, 5]))#输出元素都为1 的2行4列数组
    print ("Rand:")
    print (np.random.rand(2, 4))#输出2行4列的随机数组
    print (np.random.rand())#生成一个随机数
    print (np.random.randint(1, 14, 5))#在1到14之间生成5个随机数
    print (np.random.randn(2, 4))#输出正态分布随机数
    print np.random.choice([10.20, 41])#在所给的数中随机选取一个数
    print (np.random.beta(1,10, 100))#生成一个beta数组
---
    #常用array操作
    list =  (np.arange(1, 11)) #产生一个1-11（不含11）的等差数列
    list =  (np.arange(1, 11)).reshape([2, 5]) # 变成两行五列数组，可以把5写成-1缺省
    print (np.exp(list))  # list 的自然指数
    print (np.exp2(list)) # list 的自然指数的平方
    print (np.sqrt(list)) # list 的开方
    print (np.square(list)) # list 的平方
    print (np.sin(list)) # list 的正弦值
    print (np.log(list)) # list 的对数值
    print (lst.sum())  #求和
    list = np.array([[[1, 2, 3, 4],
                      [4, 5, 6, 7, ]],
                    [[7, 8, 9, 10],
                    [11, 12, 13, 14]],
                    [[15, 16, 17, 18],
                    [19, 20, 21, 22]]
                     ])
    print(list.shape)
    # axis取值跟维数有关，维数从 0 开始算起，axis值越大，深入的程度越深
    print (list.sum(axis=0))# axis表示维度，sxis=0,表示最外层的元素相加
    print (list.sum(axis=1))# 表示最外层减一层的元素相加
    print (list.max(axis=0)) # 最外层元素中的最大元素值
    print (list.min(axis=0)) # 最外层元素中的最小元素值
    list1 = np.array([10, 20, 30, 40])
    list2 = np.array(([4, 3, 2, 1]))
    print(list1 + list2) # 对两个list中的元素相加，ps:不是将一个数组中的元素放在另一个后面
    print (list1-list2) # 对两个list中的元素相
    print (list1*list2) #乘
    print (list1/list2)# 对两个list中的元素相除
    print (list1**2) # 对两个list中的元素平方
    print (list1.reshape([2, 2]))
    print (list2.reshape([2, 2]))
    print (np.dot(list1.reshape([2, 2]), list2.reshape([2, 2]))) # 数组点乘
    print(np.concatenate((list1,list2),axis = 0)) #将两个数组相连，即list2添加到list1中，传的是tup
    print (np.vstack((list1,list2))) #将两个数组分成两行组成一个数组也就是以行连接，注意传的是个tuple
    print (np.hstack((list1,list2))) #将两个数组相连组成一个一维数组，传的是tup
    print (np.split(list1,2)) #将数组 list1 切分成n个子数组
    print (np.copy(list1)) #对数组进行拷贝
---
    #矩阵操作与线性方程组liner(liner algebra线性代数)
    # from numpy.linalg import *
    print (np.eye(3))  #他是一个3行3列的单位矩阵
    list = np.array(([1, 2],
                     [3, 4]))
    print (inv(list)) #逆矩阵
    print (list.transpose()) # 转置矩阵
    print (det(list)) #求行列式（算的是行列式的值）
    print (eig(list)) #特征值和特征向量
    y = np.array(([5.], [7.]))
    # {x+2y=5  3x+4y=7}
    print (solve(list, y)) #求list与y组成的二元一次方程组的解
---
    需要对python语法和基本数据结构有所了解，对数据分析感兴趣！  
    老师告诉你能学到什么？  
    1、数据分析的一般步骤  
    2、numpy简介与基本使用  
    3、matplotlib简介与基本使用  
    4、scipy简介与基本使用  
    5、pandas简介与基本使用  
    6、机器学习的一般概念  
    7、scikit-learn的简介、使用示例与学习方法  
    8、keras的简介与一般用法
---
    #numpy的其他操作
    print("FFT:") #使用fft函数对余弦波信号进行傅里叶变换。
    print (np.fft.fft(np.array([1,1,1,1,1,1,1,])))
    print (np.corrcoef([1, 0, 1],[0, 2, 1])) # 皮尔逊相关系数计算
    print (np.poly1d([3,1,3])) # 生成一元多次函数
---
### 3. matplotlib 基本线图绘制   
关键词：绘图库  
http://matplotlib.org/     
点击 docs 查阅参考文档行和 API  
---
    #line
    import matplotlib.pyplot as plt
    x=np.linspace(-np.pi,np.pi,256,endpoint=True)
    c,s=np.cos(x),np.sin(x)
    plt.figure(1)
    plt.plot(x,c,color="blue",linewidth=1.0,linestyle="-",label="COS",alpha=0.5)
    plt.plot(x,s,"r*",label="SIN")  #r表示红色，用*进行绘制
    plt.title("sin&cos")
    ax=plt.gca()    #轴的编辑器
    ax.spines["right"].set_color("none")
    ax.spines["top"].set_color("none")
    ax.spines["left"].set_position(("data",0))
    ax.spines["bottom"].set_position(("data",0))

    ax.xaxis.set_ticks_position("bottom")
    ax.yaxis.set_ticks_position("left")
    
    plt.xticks([-np.pi,-np.pi/2,0,np.pi/2,np.pi],[r'$-\pi$',r'$-\pi/2$',r'$0$',r'$+\pi/2$',r'$+\pi$'])
    plt.yticks(np.linspace(-1,1,5,endpoint=True))
    for label in ax.get_xticklabels()+ax.get_yticklabels():
        label.set_fontsize(16)
        label.set_bbox(dict(facecolor="white",edgecolor="None",alpha=0.2))
    plt.legend(loc="upper left")    #图例
    plt.grid()      #网格线
    # plt.axis([-1,1,-0.5,1])  #显示范围
    plt.fill_between(x,np.abs(x)<0.5,c,c>0.2,color="green",alpha=0.25)
    t=1
    plt.plot([t,t],[0,np.cos(t)],"y",linewidth=3,linestyle="--")
    plt.annotate("cos(1)",xy=(t,np.cos(1)),xycoords="data",xytext=(+10,+30),textcoords="offset points",arrowprops=dict(arrowstyle="->",facecolor="black",connectionstyle="arc3,rad=0.2"))
    
    plt.show()
---
    配置文件包括以下配置项：

    axex: 设置坐标轴边界和表面的颜色、坐标刻度值大小和网格的显示
    backend: 设置目标暑促TkAgg和GTKAgg
    figure: 控制dpi、边界颜色、图形大小、和子区( subplot)设置
    font: 字体集（font family）、字体大小和样式设置
    grid: 设置网格颜色和线性
    legend: 设置图例和其中的文本的显示
    line: 设置线条（颜色、线型、宽度等）和标记
    patch: 是填充2D空间的图形对象，如多边形和圆。控制线宽、颜色和抗锯齿设置等。
    savefig: 可以对保存的图形进行单独设置。例如，设置渲染的文件的背景为白色。
    verbose: 设置matplotlib在执行期间信息输出，如silent、helpful、debug和debug-annoying。
    xticks和yticks: 为x,y轴的主刻度和次刻度设置颜色、大小、方向，以及标签大小。
---
    # -*- coding: utf-8 -*-
    """
    Created on Mon Aug 14 10:48:45 2017

    @author: HanKin
    """

    import numpy as np
    def main():
        '''
        #line
        import matplotlib.pyplot as plt
        x=np.linspace(-np.pi,np.pi,256,endpoint=True)
        c,s=np.cos(x),np.sin(x)
        plt.figure(1)
        plt.plot(x,c,color="blue",linewidth=1.0,linestyle="-",label="COS",alpha=0.5)
        plt.plot(x,s,"r*",label="SIN")  #r表示红色，用*进行绘制
        plt.title("sin&cos")
        ax=plt.gca()    #轴的编辑器
        ax.spines["right"].set_color("none")
        ax.spines["top"].set_color("none")
        ax.spines["left"].set_position(("data",0))
        ax.spines["bottom"].set_position(("data",0))

        ax.xaxis.set_ticks_position("bottom")
        ax.yaxis.set_ticks_position("left")
        
        plt.xticks([-np.pi,-np.pi/2,0,np.pi/2,np.pi],[r'$-\pi$',r'$-\pi/2$',r'$0$',r'$+\pi/2$',r'$+\pi$'])
        plt.yticks(np.linspace(-1,1,5,endpoint=True))
        for label in ax.get_xticklabels()+ax.get_yticklabels():
            label.set_fontsize(16)
            label.set_bbox(dict(facecolor="white",edgecolor="None",alpha=0.2))
        plt.legend(loc="upper left")    #图例
        plt.grid()      #网格线
        # plt.axis([-1,1,-0.5,1])  #显示范围
        plt.fill_between(x,np.abs(x)<0.5,c,c>0.2,color="green",alpha=0.25)
        t=1
        plt.plot([t,t],[0,np.cos(t)],"y",linewidth=3,linestyle="--")
        plt.annotate("cos(1)",xy=(t,np.cos(1)),xycoords="data",xytext=(+10,+30),textcoords="offset points",arrowprops=dict(arrowstyle="->",facecolor="black",connectionstyle="arc3,rad=0.2"))
        
        plt.show()
        '''
        #scatter
        import matplotlib.pyplot as plt
        fig = plt.figure()
        fig.add_subplot(3,3,1) #直接的话会画在3行3列表格中
        n = 128
        X = np.random.normal(0, 1, n)
        Y = np.random.normal(0, 1, n)
        T = np.arctan2(Y, X)        #上色,Y/X
        plt.axes([0.025, 0.025, 0.95, 0.95])
        plt.scatter(X, Y, s=75, c=T, alpha=.5) #s=size,c=color
        plt.xlim(-1.5,1.5), plt.xticks([])
        plt.ylim(-1.5,1.5), plt.yticks([])
        plt.axis()
        plt.title("scatter")
        plt.xlabel("X")
        plt.ylabel("Y")
        
        #bar
        ax = fig.add_subplot(332)  #数字没有上10可以省略逗号
        n = 10
        X = np.arange(n)
        Y1 = (1 - X / float(n)) * np.random.uniform(0.5, 1.0, n)
        Y2 = (1 - X / float(n)) * np.random.uniform(0.5, 1.0, n)
        ax.bar(X, +Y1, facecolor="#9999ff", edgecolor='white')
        ax.bar(X, -Y2, facecolor="#ff9999", edgecolor='white')
        for x,y in zip(X, Y1):
            plt.text(x + 0.4, y + 0.05, '%.2f' % y, ha='center', va='bottom')
        for x,y in zip(X, Y2):
            plt.text(x + 0.4, - y - 0.05, '%.2f' % y, ha='center', va='top')
        
        #pie
        fig.add_subplot(333)  #数字没有上10可以省略逗号
        n = 20
        Z = np.ones(n)
        Z[-1] *= 2  #最后一个元素设置为2   
        plt.pie(Z, explode=Z * .05, colors=['%f' % (i/float(n)) for i in range(n)], labels=['%.2f'% (i/float(n)) for i in range(n)])
        plt.gca().set_aspect('equal')
        plt.xticks([]), plt.yticks([])
        
        #折线图
        fig.add_subplot(334)
        n = 20
        theta = np.arange(0.0, 2*np.pi, 2 * np.pi/n)
        radii = 10 * np.random.rand(n)
        plt.plot(theta, radii)
        
        #polar
        fig.add_subplot(335, polar=True)
        n = 20
        theta = np.arange(0.0, 2*np.pi, 2 * np.pi/n)
        radii = 10 * np.random.rand(n)
        plt.plot(theta, radii)
        
        #polar
        fig.add_subplot(336, polar=True)
        n = 20
        theta = np.arange(0.0, 2*np.pi, 2 * np.pi/n)
        radii = 10 * np.random.rand(n)
        plt.polar(theta, radii)
        
        #heatmap
        fig.add_subplot(337)
        from matplotlib import cm
        data = np.random.rand(3, 3)
        cmap = cm.Blues
        map = plt.imshow(data, interpolation='nearest', cmap=cmap, aspect='auto', vmin=0, vmax=1)
        
        #3D
        from mpl_toolkits.mplot3d import Axes3D
        ax = fig.add_subplot(338, projection="3d")
        ax.scatter(1,1,3,s=100)
        
        #hot map
        fig.add_subplot(313)
        def f(x,y):
            return (1-x/2+x**5+y**3) * np.exp(-x**2-y**2)
        n = 256
        x = np.linspace(-3,3,n)
        y = np.linspace(-3,3,n)
        X,Y = np.meshgrid(x,y)
        plt.contourf(X,Y,f(X,Y),8,alpha=.75,cmap=plt.cm.hot)
        
        plt.savefig("./fig.png")
        plt.show()   

    if __name__=='__main__':
        main()
---   

### 2.  scipy简介
scipy库是numpy基础上增加的众多数学，科学以及工程计算常用的的库函数，例如线性代数，常微分方程，信号处理，图像处理，稀疏矩阵等.  
关键词：数值计算库  
官网：http://www.scipy.org/  
---
integral  
    # -*- coding: utf-8 -*-
    """
    Created on Mon Aug 14 14:18:13 2017

    @author: HanKin
    """

    import numpy as np

    def main():
        #--Integral
        from scipy.integrate import quad,dblquad,nquad
        print(quad(lambda x:np.exp(-x),0,np.inf))
        print(dblquad(lambda t, x:np.exp(-x*t)/t**3,0,np.inf,lambda x:1, lambda x:np.inf))
        def f(x,y):
            return x*y
        def bound_y():
            return [0,0.5]
        def bound_x(y):
            return [0,1-2*y]
        print(nquad(f,[bound_x,bound_y]))

    if __name__=='__main__': 
        main()
---
Optimizer  
    学习 。插值。来自 pylab绘图模块    科学计算 linspace线性等分向量  来自 学习。插值  导入 一维插值 interpld
    det() //行列式值
    inv() //转置
    solve() //解方程
    eig() //特征值
    lu() Lu分解
    qr() qr分解
    svd() svd分解
    schur() schur分解
    tutorial教程
---
### pandas
    关键词：数据分析库  
    # 1 Series & dataFrame 主要的数据结构
    # 2 Basic & Select & Set 基本操作
    # 3 Missing Data Processing 丢失值处理
    # 4 Merge & Reshape 数据融合 形状定义
    # 5 Time Series & Graph & Files 时间序列 图形绘制 文件操作

### scikit-learn
    关键词：数据挖掘建模  机器学习  非常方便实现分类等 。基于巨蟒。  
    官网：http://scikit-learn.org/ 
    Github:https://github.com/scikit-learn/scikit-learn
---
    机器学习 ：因子--》结果   
    结果：不打标记--》无监督学习(例如:聚类) 
          打标记--》监督学习  
                    有限离散--》分类  
                    连续--》回归   
    决策树：监督学习  树形结构 
    信息熵
    实现决策树
    数据挖掘和机器学习大致分为四个步骤：
    1、数据预处理
    2、数据建模
    3、结果验证

        # -*- coding: utf-8 -*-
    """
    Created on Tue Aug 15 22:19:11 2017

    @author: HanKin
    """

    import numpy as np
    import pandas as pd

    def main():
        #pre-processing 预处理
        from sklearn.datasets import load_iris  #导入IRIS数据集
        iris=load_iris()  #特征矩阵
    #    print(iris)
        print(len(iris['data']))
        from sklearn.cross_validation import train_test_split
        #数据集大小为150*0.2=30，随机状态为1说明随机选取
        train_data,test_data,train_target,test_target=train_test_split(iris.data,iris.target,test_size=0.2,random_state=1)
        
        #Model
        from sklearn import tree
        clf=tree.DecisionTreeClassifier(criterion="entropy")
        clf.fit(train_data,train_target)
        y_pred = clf.predict(test_data)
        
        #Veriify准确率和混淆矩阵
        from sklearn import metrics
        print(metrics.accuracy_score(y_true=test_target,y_pred=y_pred))
        #横轴表示实际值，纵轴表示预测值
        print(metrics.confusion_matrix(y_true=test_target,y_pred=y_pred))
        #矩阵中的1实际值是第二类，预测值是第三类
        
        with open('./data/tree.dot','w') as fw:
            tree.export_graphviz(clf,out_file=fw)
        
    if __name__=='__main__':
        main()
---
### Keras
关键词：人工神经网络(有两个著名框架)  
官网：https://keras.io/  
人工神经网络 是一种 机器学习 运算模型。机器学习运算模型本质上是一种函数实现运算.  
Anaconda没有keras，需要单独安装。   
Installation:  
1. Anaconda CMD
2. conda install mingw libpython
3. pip install keras

    # 指定后端引擎
    Keras 是基于 Theano 或者 Tensorflow 的一个深度学习框架，我们指定后端引擎是 Theano。这里假设当前用户名是 xuhaijiao，写入配置文件 C:\Users\xuhaijiao\.keras\keras.json：
    {
        "backend": "theano",
        "floatx": "float32",
        "epsilon": 1e-07,
        "image_dim_ordering": "th"
    }

    于是，指定了后端引擎为加拿大蒙特利尔大学研发的 Theano，而不是谷歌研发的 TensorFlow。
---
使用keras总结：  
直接在笔记本的python3.5上面安装会相当麻烦，各种时间超时。所以选择anaconda。  
引入包时，mingw版本不符，修改后端引擎两个地方，添加path路径。  
今天终于在windows下安装成功了，cmd移动到python安装目录，然后输入python -m pip install numpy  
pip --default-timeout=100 install -U numpy

遇到read time out 设置超时时间解决了。。泪目。。

### 总结



