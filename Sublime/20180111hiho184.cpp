---
layout: '[default_layout]'   
title: Sublime Text3           
date: 2018-01-15 10:47:41  
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
题目1 : 满减优惠
时间限制:10000ms
单点时限:1000ms
内存限制:256MB
描述
最近天气炎热，小Ho天天宅在家里叫外卖。他常吃的一家餐馆一共有N道菜品，价格分别是A1, A2, ... AN元。并且如果消费总计满X元，还能享受优惠。小Ho是一个不薅羊毛不舒服斯基的人，他希望选择若干道不同的菜品，使得总价在不低于X元的同时尽量低。

你能算出这一餐小Ho最少消费多少元吗？

输入
第一行包含两个整数N和X，(1 <= N <= 20, 1 <= X <= 100)

第二行包含N个整数A1, A2, ...， AN。(1 <= Ai <= 100)

输出
输出最少的消费。如果小Ho把N道菜都买了还不能达到X元的优惠标准，输出-1。

样例输入
10 50
9 9 9 9 9 9 9 9 9 8
样例输出
53
<!--more-->

```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int need[505], value[505], dp[500005];
    memset(dp, 0, sizeof(dp));
    int ans = -1;
    for(int i = 0; i < N; i++) {
        cin >> need[i] >> value[i];
    }
    for(int i = 0; i < N; i++) {
        for(int j = M; j >= need[i]; j--) {
            dp[j] = max(dp[j], dp[j - need[i]] + value[i]);
            ans = max(ans, dp[j]);
        }
    }
    cout << ans << endl;
    /*发现这道题没法用原始的01背包方法去解，没有这么大的数组
    int f[N][M];
    f[i][j] = max(f[i - 1][j - W[i]] + P[i], f[i - 1][j]);//j >= W[ i ]
    */
    return 0;
}
```



```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int A[105], sum = 0, dp[500005];
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
    }
    if(sum < X) {
        cout << -1 << endl;
        return 0;
    }
    for(int i = 0; i < N; i++) {
        for(int j = sum; j >= X + A[i]; j--) {
            dp[j] = max(dp[j], dp[j - A[i]] + A[i]);
        }
    }
    cout << sum - dp[sum] << endl;
    return 0;
}
```



