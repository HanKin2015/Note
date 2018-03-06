---
layout: '[default_layout]'   
title: git学习                     
date: 2017-09-30 17:58:41  
toc: true                  
tags:                        
- git

categories:                  
- 

---
![git](https://www.liaoxuefeng.com/files/attachments/0013848605496402772ffdb6ab448deb7eef7baa124171b000/0)
<object width="340" height="86" data="http://music.163.com/style/swf/widget.swf?
sid=445154960&type=2&auto=0&width=320&height=66" 
type="application/x-shockwave-flash"></object>  

学习网站：[廖雪峰的网站](https://www.liaoxuefeng.com/wiki/0013739516305929606dd18361248578c67b8067c8c017b000)
## git简介
**Git**是目前世界上最先进的分布式版本控制系统（没有之一）。

Git有什么特点？简单来说就是：高端大气上档次！

这个软件用起来就应该像这个样子，能记录每次文件的改动：
<!-- more  -->
版本  用户  说明  日期
1   张三  删除了软件服务条款5  7/12 10:38
2   张三  增加了License人数限制  7/12 18:09
3   李四  财务部门调整了合同金额 7/13 9:51
4   张三  延长了免费升级周期   7/14 15:17
这样，你就结束了手动管理多个“版本”的史前时代，进入到版本控制的20世纪。

## 在Windows上安装Git

实话实说，Windows是最烂的开发平台，如果不是开发Windows游戏或者在IE里调试页面，一般不推荐用Windows。不过，既然已经上了微软的贼船，也是有办法安装Git的。

安装完成后，还需要最后一步设置，在命令行输入：   

    $ git config --global user.name "Your Name"
    $ git config --global user.email "email@example.com"
注意git config命令的--global参数，用了这个参数，表示你这台机器上所有的Git仓库都会使用这个配置，当然也可以对某个仓库指定不同的用户名和Email地址。

## 创建版本库
如果你使用Windows系统，为了避免遇到各种莫名其妙的问题，请确保目录名（包括父目录）不包含中文。

    $ mkdir learngit
    $ cd learngit
    $ pwd
    /Users/michael/learngit
    $ git init
    Initialized empty Git repository in /Users/michael/learngit/.git/

瞬间Git就把仓库建好了，而且告诉你是一个空的仓库（empty Git repository），细心的读者可以发现当前目录下多了一个.git的目录，这个目录是Git来跟踪管理版本库的，没事千万不要手动修改这个目录里面的文件，不然改乱了，就把Git仓库给破坏了。

如果你没有看到.git目录，那是因为这个目录默认是隐藏的，用ls -ah命令就可以看见。

## 特别提醒
首先这里再明确一下，所有的版本控制系统，其实只能跟踪文本文件的改动，比如TXT文件，网页，所有的程序代码等等，Git也不例外。版本控制系统可以告诉你每次的改动，比如在第5行加了一个单词“Linux”，在第8行删了一个单词“Windows”。而图片、视频这些二进制文件，虽然也能由版本控制系统管理，但没法跟踪文件的变化，只能把二进制文件每次改动串起来，也就是只知道图片从100KB改成了120KB，但到底改了啥，版本控制系统不知道，也没法知道。

不幸的是，Microsoft的Word格式是二进制格式，因此，版本控制系统是没法跟踪Word文件的改动的，前面我们举的例子只是为了演示，如果要真正使用版本控制系统，就要以纯文本方式编写文件。

因为文本是有编码的，比如中文有常用的GBK编码，日文有Shift_JIS编码，如果没有历史遗留问题，强烈建议使用标准的UTF-8编码，所有语言使用同一种编码，既没有冲突，又被所有平台所支持。

使用Windows的童鞋要特别注意：

千万不要使用Windows自带的记事本编辑任何文本文件。原因是Microsoft开发记事本的团队使用了一个非常弱智的行为来保存UTF-8编码的文件，他们自作聪明地在每个文件开头添加了0xefbbbf（十六进制）的字符，你会遇到很多不可思议的问题，比如，网页第一行可能会显示一个“?”，明明正确的程序一编译就报语法错误，等等，都是由记事本的弱智行为带来的。建议你下载Notepad++代替记事本，不但功能强大，而且免费！记得把Notepad++的默认编码设置为UTF-8 without BOM即可

## git常用操作
### 初始化
第一步，用命令`git add`告诉Git，把文件添加到仓库。

    git init
第二步，用命令git commit告诉Git，把文件提交到仓库：





### 克隆下载
pull
fech

执行git init初始化这个文件，在clone到你们本地


### fork更新
ork 版本的修改 pull 到原版本的方法，但无法把原版本的修改 pull 到我 fork 的版本中。
new pull request
[网络错误-未链接到互联网](http://www.cnblogs.com/linxinmeng/p/7070066.html)


### git base & git merge

### git rejected

### [Git fetch和git pull的区别](http://blog.csdn.net/hudashi/article/details/7664457)

http://blog.csdn.net/wh_19910525/article/details/7554489


git是一种版本控制系统。跟svn、cvs是同级的概念。
github是一个网站，给用户提供git服务。这样你就不用自己部署git系统，直接用注册个账号，用他们提供的git服务就可以。

# 提交说明

1. fork这个项目到自己的coding.net库
2. pull这个项目到本地
fatal: Not a git repository (or any of the parent directories): .git
原因：你没有初始化git init


3. 按照学生信息表.md的示例填写自己的相关信息
4. push到自己的coding.net库
5. 提PR到https://coding.net/u/greyzeng/p/WHU_SE_2017/git/tree/master
http://overflowstack.github.io/
