---
layout: '[default_layout]'   
title: 项目中遇到的方法和技巧[置顶]           
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
![](http://img2.imgtn.bdimg.com/it/u=4174477392,2413477590&fm=27&gp=0.jpg)
<!--more-->

# 1、读取和保存文件

# 2、容器之间的转存

# 3、python中使用字典实现计数排序
```
    lis = ['a', 'b', 'a', 'c', 'd', 'c', 'a']
    dic = {}
    for elem in lis:
        if elem in dic:
            dic[elem] += 1
        else:
            dic[elem] = 1
    print(sorted(dic.items(),key = lambda x:x[1],reverse = True))
    dic = sorted(dic.items(),key = lambda x:x[1],reverse = True)
    for key, val in dic:
        print(key + ' ' + str(val))
```
sorted函数按key值对字典排序
>sorted(dic.keys())

sorted函数按value值对字典排序则用上面的方法




