---
layout: '[default_layout]'   
title: 鸟叔的Linux私房菜1           
date: 2017-08-03 10:47:41  
updated: 
permalink: 
render_drafts: true
copyright: true
password: 
comments: true
toc: true                  
tags:                        
- Linux

categories:                  
- Linux

---
<center><strong><h1>鸟叔的Linux</h1></strong></center>

# 2017.8.3晚
### 第0章 计算器概述
- 计算机五大单元
- BIOS基本输入输出
- RISC和CISC
- CPU每次能够处理的数据量称为字组大小，即32bit和64bit
- DRAM、SRAM、ROM
- 1Byte=8bits
<!--more-->
### 第1章 Linux是什么
- 操作系统
- 麦金塔计算机MAC

# 2017.8.4
- Unics
- 所有的程序或系统装置都是文件
- 不管构建编辑器还是附属文件，缩写的程序只有一个目的，且要有效的完成目标
- 我的存在是因为大家的存在
- Unix--Minix--GNU计划
- GPL---自由软件
- 主版本.次版本.释出版本-修改版本，主次为奇数为发展中版本；主次为偶数为稳定版本
- Linux核心版本与Linux发布商版本distribution
- 社群版：Fedora\Ubuntu\OpenSuSE
- 商业版：Red Hat\SuSE
---------------------------------------------------
### Linux当前应用的角色
- 网络服务器
- 计算器概论与硬件相关知识
- 先从Linux的安装与指令学期
- Linux操作系统的基础技能
- 无比学会vi文书编辑器
- Shell与Shell Script的学习
- 一定要会软件管理员
- 网络基础的建立
好的书本带你上天堂，坏的书本让你穷瞎忙

- 在自己的主机/网络数据库上查询How-To或FAQ
	- /usr/share/doc(在你的Linux系统中)
	- www.linux.org.tw/CLDP
	- www.tldp.org
	- www.google.com.tw
	- linux.vbird.org/Searching.php
- 注意讯息输出，自行解决阴暗杂症
- [提问的智慧](http://www.jianshu.com/p/60dd8e9cd12f)
- 讨论区大胆的发言
	- 酷学园讨论区
	- 鸟的私房菜馆讨论区
- Netman大大给的建议
```
此外，Netman 兄提供的一些学习的基本方针，提供给大家参考：

- 在Windows里面，程式有问题时，如果可能的话先将所有其它程式保存并结束，然后尝试按救命三键 (Ctrl+Alt+Delete)，将有问题的程式(不要选错了程式哦)『结束工作』，看看能不能恢复系统。不要动不动就直接关机或reset。
- 有系统地设计文件目录，不要随便到处保存文件以至以后不知道放哪里了， 或找到文件也不知道为何物。
- 养成一个做记录的习惯。尤其是发现问题的时候， 把错误信息和引发状况以及解决方法记录清楚，同时最后归类及定期整理。别以为您还年轻，等你再弄多几年计算机了， 您将会非常庆幸您有此一习惯。
如果看在网路上看到任何好文章，可以为自己留一份copy，同时定好题目，归类存档。(鸟哥注：需要注意智慧财产权！)
- 作为一个使用者，人要迁就机器；做为一个开发者，要机器迁就人。
- 学写 script 的确没设定 server 那么好玩，不过以我自己的感觉是：关键是会得『偷』， 偷了会得改，改了会得变，变则通矣。
- 在Windows里面，设定不好设备，您可以骂它；在Linux里面，如果设定好设备了，您得要感激它！
```

```
好了，底下列出几个学习网站来提供大家做为参考实作的依据：

Study-Area http://www.study-area.org
鸟哥的私房菜馆 http://linux.vbird.org
卧龙大师的网路技术文件 http://linux.tnc.edu.tw/techdoc/
台湾 Linux 社群 http://www.linux.org.tw/
狼主的网路实验室 http://netlab.kh.edu.tw/index.htm
大南国小（林克敏主任文件集）http://freebsd.lab.mlc.edu.tw/
吴仁智的文件集 http://www.cses.tcc.edu.tw/~chihwu/
```

### 安装Linux
- 国家高速网络中心
- 昆山科技大学
- CentOS官方网站
---------------------------------------------
iso是所谓的image文件（映像档），由光盘直接刻录成文件。使用FTP客户端程序Filezilla不用担心断线问题。


### 使用Linux
- panel
- 注销并不是关机，直接按下[Alt]+[Ctrl]+[Backspace]重新启动
-------------------------------------------------------
- X window与文本模式切换（终端机接口）terminal或console

-[Ctrl]+[Alt]+[F1]~[F6],文字接口登入tty2~tty6终端机
- startx在文字界面上启动X窗口
- rescue修复
****************************************************************
CentOS（Community Enterprise Operating System，中文意思是：社区企业操作系统）是Linux发行版之一，它是来自于Red Hat Enterprise Linux依照开放源代码规定释出的源代码所编译而成。由于出自同样的源代码，因此有些要求高度稳定性的服务器以CentOS替代商业版的Red Hat Enterprise Linux使用。两者的不同，在于CentOS并不包含封闭源代码软件。

### 视频学习
- Linux  --内核
		 --服务器（企业、金融、银行）
		 --个人桌面版（fedoral、中标麒麟）
		 --手机安卓系统
- centos、red hat、Ubuntu、suse
- [内核官网](www.kernel.org)
- [GNU](www.gnu.org/software/)
- unix --小型机
  Linux发布在GPL（nginx）--->tginx下  --pc服务器

- [书籍推荐](http://billie66.github.io/TLCL/index.html)
- redhat -- centos
- debian -- Ubuntu

### Linux命令
##### Linux远程连接使用工具默认网卡名eth0，远程连接有四个工具
- 查看网卡信息：# ifconfig或者# ip a  
- xshell远程控制ssh root@192.168.17.128连接命令行
- xmanager远程连接桌面
- clear清屏
- secureCRT软件也可以远程控制
- FTP文件传输，实现远程文件传送FileZilla
- Notepad++也可以实现远程连接
---------------------------------------------
虚拟机联网注意事项：
	1、虚拟机统一使用NAT方式连接
	2、当虚拟机连不上
		a、确定VMnet8网卡的IP地址
		b、服务启动--（vmware dhcp service）和（vmware nat service）
		c、网卡“已连接上”
		d、检查|虚拟网络编辑器“的NAT相关设置（网段）
	3、重启一下网卡：# service network restart
-------------------------------------------------
### 编辑器VI
vi   vim在vi基础上升级，有字符颜色变化，标准的unix文本编辑器
三种模式：插入模式(i、a、o）、命令模式ESC、最后行模式(:w保存q退出q!强制退出-命令可以连接使用)
cat 查看命令

在计算机科学中，Shell俗称壳（用来区别于核），是指“提供使用者使用界面”的软件（命令解析器）。它类似于DOS下的command和后来的cmd.exe。它接收用户命令，然后调用相应的应用程序。


- bash来自GNU项目的shell程序
- :set nu显示行号
- dd 删除光标所在行
- 3dd 删除光标所在的连续后3行（实际是剪切）
- p 粘贴在光标的后一行
- yy 复制
- 3yy 复制光标所在行的连续3行
---------------------------------------------------
:25 光标快速跳转到25行
G 光标快速定位到最后一行
gg 光标快速定位到第一行
u 撤销上一步操作
:1,$s/nologin/8888/g 把整个文件的nologin替换成8888,g表示同行，默认一行的第一个

-----------------------------------
# 2017.8.5
### Deepin桌面知识总结
- Deepin的深度商店软件包位置：在/var/cache/apt/archives/下
- 软件安装位置：在linux中文件与软件一般都是安装在到/usr/share和/usr/local中了，如果我们需要查看软件安装路径linux为我们提供了查看命令，whereis 就可以帮我查找文件安装路径在哪里了。


##### 运行c++程序
1、sudo apt-get install g++ 安装g++
2、vi编辑文件并保存退出
3、sudo g++ cpp文件名 -o 生成文件名
4、敲入./生成文件名

--------------------------------------------------

clear 清屏
vi中Ctrl+q会把vi冻结
uname -a    查看内核版本       
ls -al    显示所有文件的属性
pwd         显示当前路径        
cd -    返回上一次目录     cd ~    返回主目录
date s      设置时间、日期          
cal      显示日历     cal 2006
bc          计算器具               
man  & info     帮助手册         
shutdonw -h now & half & poweroff  关机
reboot     重启                   
startx  &  init 5   进入图形介面
cp   复制   cp filename
rm   删除文件  rm -rf filename   强制删除文件
rmdir   删除文件夹
mv  移动    mv 123.txt 222.txt  重命名
mkdir     创建文件夹
touch     创建文件  更新当前时间
cat       由第一行开始显示     cat |more  分页
fsck    检查和修复LINUX档案
whereis   查找命令
locate    查找
find      查找   find / -name "***.***"
which     查看工具
whoami    显示当前用户
gcc -v    查看GCC版本
umount /mnt/hda3  缷载
ifconfig   显示或设置网络设备
service network restart   重启网卡  
ifdown eth0  关闭网卡
ifup eth0    开启网卡
clear    清屏
history    历史记录       !55  执行第55个指令
stty   设置终端    stty -a
kill    结束进程    kill -9 PID     [9]强制结束,[15]正常结束,[l]列出可用的kill信号
ps aux  查看后台程序   
top     查看后台程序   top -d 2    每两秒更新一次        top -d 2 -p10604   观看某个PID
        top -b -n 2 > /tmp/top.txt ----->將 top 的資訊進行 2 次，然後將結果輸出到 /tmp/top.txt    
pstree   以树状图显示程序    [A]以 ASCII 來連接, [u]列出PID, [p]列出帐号
killall   要刪除某個服務    killall -9 httpd
free      显示内存状态     free -m  -------->以M为单位显示
uptime    显示目前系统开机时间
netstat   显示网络状态    netstat -tulnp------>找出目前系統上已在監聽的網路連線及其 PID
dmesg     显示开机信息    demsg | more


-----------------------------------------------------------
# 2017.8.6
- 目录结构
倒置树结构，root目录用/表示
文件或者目录名称严格区分大小写
pwd 打印当前路径
绝对路径------以斜线开头
相对路径------
ls 列出当前目录有那些文件（目录）
	-l 长格式列出文件属性
	-d 查看目录本身
	-a 查看所有文件（以.开头的隐藏文件）

du 统计目录或者文件容量
	-s 
	-h 人性化显示
	× 显示所有文件的大小

Ctrl+alt+t 调出终端程序
Ctrl+p 复制上一步的输入
cd 切换目录
	.. 返回上一层目录
	~ 返回根目录
	- 返回上一次的目录

touch 创建或者修改文件时间，即创建空文件
mkdir 创建目录
	-p 递归的创建多级目录 mkdir -p a/b/c

rm 删除文件或者目录
	-f 强制删除
	-rf 递归删除，即删除目录
	-r 删除目录
	空格表示两个目录或者文件

cp 复制文件或者目录  ==> cp src dst
	-r 复制目录
	-a 复制所有（属性）

mv 移动或者重命名文件
clear 清屏
man 查看帮助  man ls 查看ls参数
vimtutor vim自带学习手册
Tab 自动补充命令
cat 查看文件内容
more 分屏查看文件内容  使用空格键翻页
head -5 文件名   查看前5行内容
tail -5 文件名   查看后5行内容
Ctrl+c 终止命令
.. ../ 上一级目录
. ./ 当前目录
[root@localhost ~]#
当前登录用户名@主机名 当前目录
~ 代表当前登录用户的家目录
添加用户
useradd test
su -test
#提示符代表超级管理员用户，即root用户，对系统进行配置的时候，需要使用root用户
$提示符代表普通用户

grep 在文件里面找符合条件的行
# grep 'root' /etc/passwd
[扩展]
	-i 
	-v 取反
	-A2
	-B2
	-n 显示行号
	-R 递归
	后面会讲 支持正则表达式

find 在目录里面找符合条件的文件或者目录
语法： find 查找的目标 匹配的条件
	-name
	-type d目录 f文件

find /etc/ -name "*conf*"
find / -name ping  查找ping命令位置

##### vi + 基本命令  （重中之重）
 shutdown 关机命令（不能直接点虚拟机右上角x）
 halt
 init 0  关机命令
 init 6  重启命令
 reboot  重启命令

 管道符号   |     把前一个命令的输出结果传递给后一个命令处理
 	grep
 	more 
 	head
 	wc

 追加\覆盖  >>  > 追加在原来文件后添加，覆盖是重写。
 	---把前一个命令的输出结果追加\覆盖到文件中
wc 查看文件内容的行数
	-l 查看行

命令行模式下面： 按字母n向下搜索
			  按字母N向上搜索

ps -ef 查看系统进程
ps -ef | wc -l
管道符号可以多接，命令结果为最后一个命令的结果
ctrl+d 退出 = exit

##### 两种工作界面：图形化和字符
--切换/etc/inittab
	id:3:initdefault:
7种启动模式 init 0关机  init 6 重启
deepin默认是F7模式
进入root

##### 20170807
date 显示日期和时间
command [-options] parameter1 parameter2 ...
命令      选项        参数1      参数2


# 在vim下按ctrl+s后界面卡住
用惯了window编辑器的我们，在使用linux vim编辑器时会不会遇到这个问题：在编辑时总是会不小心按下Ctrl+S,然后整个终端都没有反应了？其实在Linux下 Ctrl+S是有特殊的用途的，不能乱按。 
在Linux下，Ctrl+S 是暂停该终端，阻止向该终端输出。那如何解决呢？按下Ctrl+Q就可以了。在Linux终端 Ctrl+Q ：恢复向终端输出。

# make j* make j4 make j8 区别
make -j4是什么意思
看书上说
1） make(1)只衍生一个作业／／作业是什么意思？make(1) 是不是就是make的意思?
2） 在双处理器上make -j4，难道是让每个处理器跑两个作业？那和make -j2效率相比 难道不是一样的？


新手提问 多多关照

------解决方案--------------------
make(1)表示在unix手册(man)的第一章，可以用 man 1 make 来查看。

两个处理器的话，一般 -j2 能达到最高效率。
不过也有些进程会花时间在IO上，并不能利用完单个cpu的时间。这样 -j4 可以更快。 
------解决方案--------------------
jobs=4
同时最多跑4个作业
make自己会协调，如果CPU等资源不够可能小于4个。不过一般瓶颈都在硬盘，所以一般能看到4个进程一起跑。 
------解决方案--------------------
启用4个cpu去编译。提高编译速度。 
------解决方案--------------------
感觉指的是逻辑线程数，和CPU无关，逻辑线程具体跑在哪个逻辑CPU上应该是由内核决定的。make说白了也只是个程序而已。

========================================


make(gmake,gnumake)的-j参数，优化多核、多线程的编译过程

# 更新GCC版本
#查看当前版本
gcc --version #显示4.7
cd /
wget ftp.gnu.org/gnu/gcc/gcc-7.3.0/gcc-7.3.0.tar.gz
tar -zxvf gcc-7.3.0.tar.gz
cd gcc-7.3.0
#检测和安装相关依赖包，这个过程需要耐心等待(此步骤会将依赖包下载到gcc-7.3.0目录，如果因网络原因无法完成请自行使用wget下载)
./contrib/download_prerequisites
mkdir build
cd build
../configure -enable-checking=release -enable-languages=c,c++ -disable-multilib
#编译过程漫长，请耐心等待
make -j4
make install

