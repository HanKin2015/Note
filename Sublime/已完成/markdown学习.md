[TOC]

# Markdown 语法的简要规则
## 标题

一级标题
========
二级标题
--------

# 一级标题
## 二级标题
### 三级标题
# 这是H1
## 这是H2
###### 这是H6

## 代码块|框

```java
这是一个代码块
uiiui
```

```C++
#include <iostream>
using namesoace std;

int main()
{
	cout << "Hello world!" << endl;
	reuten 0;
}
```

```
	不能有空格！
 ```



这是一个普通段落：
    代码块< code><pre></pre>
    #include <iostream>
    using namespace std;

    int main() {
        cout << "Hello world!" << endl;
        return 0;
    }

```代码块```
`代码块`

```javascript
var oldUnload = window.onbeforeunload;
window.onbeforeunload = function() {
    saveCoverage();
    if (oldUnload) {
        return oldUnload.apply(this, arguments);
    }
};
``` 

## 表格
| Tables        | Are           | Cool  |
| ------------- |:-------------:| -----:|
| col 3 is      | right-aligned | $1600 |
| col 2 is      | centered      |   $12 |
| zebra stripes | are neat      |    $1 |

## 列表
* 男人
* 女人

+ 美女
+ 帅哥

- 狗
- 猪
- 羊

---

1. 你
2. 我
3. 他

2. 我
3. 他
1. 你

## 分界线|分割线
------------------------
- - - - - - -
* * * * * * * * 
********************************
___________________________________

## 引用
> 这里是引用

> 注意符号前面要有空格
> 换行是个问题

>     五个空格时字体有变化

## 图片与链接
这里有一个链接[点我一下](http://www.baidu.com "百度一下你就知道") 
这里有一个链接[点我一下][http://www.baidu.com]
This is [an example] [id] reference-style link.

使用图床生成图片地址

![这是一个秒杀眼神](https://bkssl.bdimg.com/cms/rc/r/image/2014-09-07/ef0743df4c8fb79a1856c0f0917aa2b3_134_100.jpg "这是备注")

![链接地址过长][2]
[2]:https://ss0.baidu.com/73t1bjeh1BF3odCf/it/u=3779898065,2835776699&fm=85&s=79AB96564405CF5F58AEA2AD0300F01B "可以放鼠标看"

## 粗体与斜体
*single asterisks*

_single underscores_

**double asterisks**

__double underscores__

\*this text is surrounded by literal asterisks\*

Use the `printf()` function.

A single backtick in a code span: `` ` ``

A backtick-delimited string in a code span: `` `foo` ``

## 脚注

hello[^hello]

[^hello]: hi时间到了卡桑德拉降低了拉萨建档立卡就

## 下划线
<u>这文字有下划线吗？</u>

<span style="border-bottom:2px dashed yellow;">所添加的需要加下划线的行内文字</span>

~~哈哈哈哈哈~~

## 换行符
1. 使用html的</br>
2. 直接在末尾加两个及以上空格回车  
3. 在 MarkdownPad 2 中点击一次【回车】，结果显示为一个空格；点击两次【回车】，文档内容才出现换行。

例子：窗前明月光  
疑是地上霜  
举头望明月  
低头思故乡  
  
20170811 writed by HanKin
