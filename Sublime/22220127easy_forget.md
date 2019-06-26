---
layout: '[default_layout]'   
title: 那些容易遇到的问题[置顶]           
date: 2222-01-27 10:47:41  
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
![](https://ss0.bdstatic.com/6ONWsjip0QIZ8tyhnq/it/u=1618097094,4154452434&fm=77&w_h=121_75&cs=423647557,799948659)
<!--more-->

# 1、linux系统修改系统时间与时区
date命令将日期设置为2014年6月18日
 ----   date -s 06/18/14

将时间设置为14点20分50秒
 ----   date -s 14:20:50

将时间设置为2017年6月18日14点16分30秒（MMDDhhmmYYYY.ss）
----date 0618141617

# 2、解压
gzip 压缩包名(包括后面的.gz) -d 解压位置

tar -zxvf 压缩包名(包括后面的.tar.gz) -C 解压位置 注意后面的-C是大写C，如果不指定解压位置需要去掉-C，系统会把压缩包中所有文件解压到当前工作文件夹





