---
layout: '[default_layout]'   
title: Linux中的编码问题           
date: 2018-02-07 16:47:41  
updated: 
permalink: 
render_drafts: true
copyright: true
password: 
comments: true
toc: true                  
tags:                        
- Sublime

categories:                  
- others

---
系统环境：Red Hat Enterprise Linux Server 6

[root@1-min huage]# locale             //查看当前系统的语言环境

LANG=en_US.UTF-8

LC_CTYPE="en_US.UTF-8"

LC_NUMERIC="en_US.UTF-8"

.....

 

[root@1-min huage]# locale -a          //查看系统支持的所有语言

。。。。                              //此处省略了

en_US

en_US.iso88591

en_US.iso885915

en_US.utf8

。。。。。

zh_CN

zh_CN.gb18030

zh_CN.gb2312

zh_CN.gbk

zh_CN.utf8

。。。。

 

[root@1-min huage]# source /etc/sysconfig/i18n

在不重启的情况下重新加载i18n文件
<!--more-->

https://jingyan.baidu.com/article/ab69b270de8b4f2ca7189f1d.html

https://zhidao.baidu.com/question/1835542959431198660.html

下载文件https://jingyan.baidu.com/article/59a015e3510b76f7948865ef.html

配置环境变量http://blog.csdn.net/u010798968/article/details/74065238?utm_source=itdadao&utm_medium=referral

http://blog.csdn.net/onepiecehuiyu/article/details/75208743
贴代码https://www.v2ex.com/t/89097









