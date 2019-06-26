---
layout: '[default_layout]'   
title: 最生动的理解机器学习例子           
date: 2018-05-07 12:15:41  
updated: 
permalink: 
render_drafts: true
copyright: true
password: 
comments: true
toc: true                  
tags:                        
- ML

categories:                  
- ML

---

<!--more-->
写个程序来玩Fizz Buzz. 这是一个小孩子游戏。玩家从1数到100，如果数字被3整除，那么喊’fizz’，如果被5整除就喊’buzz’，如果两个都满足就喊’fizzbuzz’，不然就直接说数字。这个游戏玩起来就像是：
>1 2 fizz 4 buzz fizz 7 8 fizz buzz 11 fizz 13 14 fizzbuzz 16 …

传统的实现是这样的：
```
res = []
for i in range(1, 101):
    if i % 15 == 0:
        res.append('fizzbuzz')
    elif i % 3 == 0:
        res.append('fizz')
    elif i % 5 == 0:
        res.append('buzz')
    else:
        res.append(str(i))
print(' '.join(res))
```
```
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i < 101; i++) {
        if(i % 15 == 0) cout << "fizzbuzz";
        else if(i % 3 == 0) cout << "fizz";
        else if(i % 5 == 0) cout << "buzz";
        else cout << i;
        if(i != 100) cout << ' ';
        else cout << endl;
    }
    return 0;
}
```






