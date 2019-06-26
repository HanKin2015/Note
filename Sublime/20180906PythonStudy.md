---
layout: '[default_layout]'   
title: Python刷题使用中遇到的问题汇总   
date: 2018-09-06 10:07:41  
toc: true                  
tags:                        
- Python
- ACM
- 入门

categories:                  
- PYTHON

---
# 1、list和array相互转换
```
frame_list_np = np.array(frame_list, dtype = int)
frame_list = frame_list_np.tolist()
```
<!--more-->
# 2、输入不确定个数的数字(使用空格隔开),统计数字出现个数
```
data = input()
p = data.split(' ')
>>>['1', '2', '3', '5', '66', '66', '666']
len(p)
>>>7
type(p)
>>>list
str(p)
>>>"['1', '2', '3', '5', '66', '66', '666']"
str(p).count('6')   # 这个有问题,统计相应字符个数，66返回3
>>>7

arrayP = np.array(p, dtype=int)
arrayP
>>>array([  1,   2,   3,   5,  66,  66, 666])
np.sum(arrayP == 66)
>>>2
```










