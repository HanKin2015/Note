[TOC]
# 1-1
代码产生行为依据于数据类型
1.变量
-使得程序有可重用性
2.数据类型
type(bmi)--查看bmi的数据类型
int;float;str;boolean
整数相加得到整数之和，字符相加得到字符连接结果；

1.知识
  1.1 Python基础知识
  1.2 数据科学的特点
  1.3 数据存储
  1.4 数据操作
  1.5 数据分析工具
2.学习方法
3.Python历史
4.特点：开源；免费
5.通用版本：2.7版本和3.5版本---3.5版本
python 版本3.x http://www.python.org/downloads/
6.Python运行：
shell 和Python脚本


和C语言不同，Python变量不需要声明，直接赋值用即可。
2、type(变量名)：可以确定变量的类型
3、字符串用双引号或单引号都可以表示
4、“+”的使用：对于数值型数据来说，“+”是将两个数值相加得到他们的和；
                对于字符串来说，“+”是经两个字符串连接起来

# 2-1
1、和C语言不同，Python变量不需要声明，直接赋值用即可。
2、type(变量名)：可以确定变量的类型
3、字符串用双引号或单引号都可以表示
4、“+”的使用：对于数值型数据来说，“+”是将两个数值相加得到他们的和；
                对于字符串来说，“+”是经两个字符串连接起来

# 2-2
1、list：用[ ]表示，[ ]里面的各个元素用“，”隔开。
2、list中各元素可以取任何类型，而且一个list里面可以包含多种不同的类型。
list切割  [起点（包含）：终点（不包含）]
获取list中的值：
-索引从0开始
-反向索引：得到尾部数据较为有效
# 反向索引，对于我们想获取尾部的元素很有用，直接用-1来获取到尾部的最后一元素。
切割是重新返回一个新的list
-list中的切割
fam[3:5]--选取3和4，不包含终点
fam[:4]--4之前元素
fam[5:]--5之后元素

# 2-3
一次改变多个 list 元素：
fam[0;2] = ["Lisa",1.74]
删除元素：
del(fam[2])
两个 list 相加 就是两个 list 的拼接
fam + ["me",1.74]
--拷贝元素(只改变y，不改变x)
y = list(x)
y = x[:]
y=x  :指向同一个地址    y=list[x],数值一样，地址改变

# 3-1
max([list]) 可以得到最大值
round（x,y） x 是要截取的数值，y 控制精度，也就是小数点后的位数，默认 y=0
help(round)

# 3-2
list 的几个常用的方法
list_name.index(要查询索引的元素)   #获得括号中元素的索引位置 
list_name.count(要计算次数的元素)   #获得括号中元素出现了几次
字符串方法
capitalize()      #是字符串首字母大写
replace(x,y) x 是要被替换的字符，y 是要替换成什么的字符，也就是用 y 替换 x
方法
--从属于对象的函数
--任何东西都是对象
--不同类型的对象有不同的方法
--fam.append("fam");--追加数据

# 3-3
包
--Python脚本的目录
--每个模块-一个模板
--Numpy--科学计算
--Matplotlib:数据可视化
--Scikit-learn--机器学习
--包的安装  http://pip.readthedocs.org/en/stable/installing/
安装 get-pip.py
终端：python3 get-pip.py
pip3 install numpy
--引入包
import numpy as np
from numpy import array 引入单个包

1、包，即包含脚本的目录。每一个脚本相当于一个模块，在模块中定义了函数、方法、类型。
2、若要试用包，则首先要安装包。再在脚本语言中引入。在declipse中运行Python应该是直接安装了好多包
3、包的引入：
   整个包的引入  import 包名 as 方便的包名 #建议，不会丢失信息#
   引入包的某一模块  from 包名 import 需要的某一模块 #但会丢失某些信息#

# 4-1
numpy.array是一个numpy自定义的数据类型！其与list序列比较相近。
A.array＋B.array运算为AB内逐个数相加。
A.list+B.list运算为AB两个list相连接
A.array[1]获得序号为1的数值
A.array > 23 获得数值类型为bool的数组array，例：array([False,False,False,Ture,False],dtype=bool)
A.array[A.array > 23]获得大于23的数字array([24.747])
numpy中元素类型只能是同一种类型的

# 4-2
2维数组是 array() 中传递 list--[], list 的元素又是 list--[] 即 array([[],[],...[]])
array.shape: 得到array的行和列数
array[0,2]的扩展：
array[行坐标，列坐标]
   array[行坐标]
   array[:,列始:列终]
ndarry=n维数组

# 4-3
NumPy系统是Python的一种开源的数字扩展。这种工具可用来存储和处理大型矩阵，比Python自身的嵌套列表（nested list structure)结构要高效的多（该结构也可以用来表示矩阵（matrix））。据说NumPy将Python相当于变成一种免费的更强大的MatLab系统。
一个用python实现的科学计算包。包括：1、一个强大的N维数组对象Array；2、比较成熟的（广播）函数库；3、用于整合C/C++和Fortran代码的工具包；4、实用的线性代数、傅里叶变换和随机数生成函数。numpy和稀疏矩阵运算包scipy配合使用更加方便。
 np.mean( 计算元素)：求平均
 np.median(计算元素)：求中位数
 np.corrcoef(计算元素1，计算元素2)：检测相关性
 np.std（计算元素）：求样本标准差
 np.random.normal()
np.column_stack(（列1，列2）)：进行列连接，是生成两列。

# 5-1
import matplotlib.pyplot as plt 导入 matplotlib 的子包 pyplot
线图
plt.plot(list1,list2) list1 是横轴，list2 是纵轴
plt.show() 调用 show() 才会画图
常用的==>plt.hist(x,bins)  x是一个值的 list ，bins 表示直方图有多少个 bin
plt.show() 来显示直方图

# 5-3
plt.xlable('标签')
plt.ylable('标签')   #给 x，y 轴加标签
plt.title('标题')    #给表加标题
plt.yticks([0,2,4,6,8]) #给y周添加刻度
plt.yticks([0,2,4,6,8],['0','2B','4B','6B','8B'])#第一个参数是刻度位置，第二个参数是相应位置的名称
plt.fill_between（x，y，0，color=你设定的颜色(比如'green')）  x,y都是 list

>>> help(p.fill_between)
Help on function fill_between in module matplotlib.pyplot:

fill_between(x, y1, y2=0, where=None, interpolate=False, step=None, hold=None, data=None, **kwargs)
    Make filled polygons between two curves.

# 6-1
column 专栏; 圆柱; 纵队，列
import pandas as pd  导入 pandas 包，在 pandas 中把数据存储成 dataframe 数据结构，一个 dataframe 就是一张表，通过cav 文件导入 python，csv 文件第一行为列名，通常第一个字符为 "，"，以便做成表格时与第一列的行名 错开，因为第一行第一列的交叉处是没有数据的
brics = pd.read_csv("path/to/brics.csv",index_col = 0)
获取列：brics["country"]  或者  brics.country
添加列：brics["要添加的列"]=[list] （把一个 list 赋值给它）
添加列（2）：brics["要添加的列"] = brics["country"]/brics["area"]  通过其他列来生成新列
获取行：brics.loc["BR"]
元素：brics.loc["行标"，"列标"]  或者  brics["列标"].loc["行标"] 或者 brics.loc["行标"]["列标"]
（第三种实际上是先获得行标，再寻找列标，跟第二种方法相反）

二维数组array全部数据同种类型
pandas上层数据操作dataframe一张表行不同观测（标签）列不同属性（属性名称，有不同类型）csv文件导入即可逗号分隔符存储数据集的文件格式
import pandas as pd
pd.read_csv("",index_col=0)# index_col表示行标不在列中
bricks[""]列标
添加列bricks[] = [];
行的获取bricks.loc[行标]以列为表示
.loc[行标，列标]
[].loc[]列标，行标
.[][]行标，列标

1、pandas.
2、import pandas as pd
   biao=pd.read_csv(“路径名”)
3、获取列：
   biao[列名]或者biao.列名#不用引号标注#
   可以通过计算构造列
4、获取行：
   biao.loc[行名]
   获取元素：
   biao.loc[行标，列标]
   biao[列标].loc[行标]
   biao.loc[行标][列标]
