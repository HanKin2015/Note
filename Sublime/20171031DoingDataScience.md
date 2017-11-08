---
layout: '[default_layout]'   
title: 数据科学实战   
date: 2017-10-31 22:23:41  
toc: true                  
tags:                        
- Data
- Science

categories:                  
- Social Network

---

<!--more-->
# 

博客1:mathbabe.org
博客2:columbiadatascience.com/blog/
 
# 数据科学和大数据
![](http://www.huikedu.com/d/file/major/qykj/2017-08-02/74a3f4965f15bda48a57f0fc3d047dfd.jpg)



，多大才是大
统计学和计算机科学
数据化，bash脚本pig脚本
数据科学韦恩图
元定义，tsp问题，统计学线性代数编程技能14
失真错误，大数据的4v原则
拉丁字母希腊字母cmd&shell
探索性数据分析
数据科学的工作流程

plot

```C++
DWORD WINAPI myServerThread(LPVOID lpParam)

{ /*每一个连接都会有一个这样的处理线程*/

ServerThreadParam *lp =(ServerThreadParam*)lpParam;

session_s *s = lp->session;

while(1)

{

int state = s->wait_request();

if (state == s->disconected)

break;

request_t * req = s->get_request(); //获取请求

//根据不同的请求类型，调用不同的处理逻辑(service_xxx)。

switch(req->type)

{

case (TYPE_LOGIN):

{

service_login(s,req);

break;

}

case(TYPE_REGISTER):

{

service_register(s,req);

break;

}

case(TYPE_GETUSERINFO):

{

service_getuserinfo(s,req);

break;

}

case(TYPE_ADDEVENT):

{

service_addevent(s,req);

break;

}

case(TYPE_GETMESSAGE):

{

service_getmessages(s,req);

break;

}

case(TYPE_ADDMESSAGE):

{

service_addmessage(s,req);

break;

}

case(TYPE_GETEVENT):

{

service_getevent(s,req);

break;

}

case(TYPE_JOINEVENT):

{

service_joinevent(s,req);

break;

}

case(TYPE_GETPARTICIPANTS):

{

service_getparticipants(s,req);

break;

}

case(TYPE_GETEVENTDETAILBYID):

{

service_geteventdetail(s,req);

break;

}

case(TYPE_UPDATEUSERINFO):

{

service_updateuserinfo(s,req);

break;

}

case(TYPE_EXITEVENT):

{

service_exitevent(s,req);

break;

}

case(TYPE_SETEVENTSTATE):

{

service_seteventstate(s,req);

break;

}

case(TYPE_GETEVENTBYCONDITIONS):

{

service_geteventbycondition(s,req);

break;

}

case(TYPE_SETSECURITY):

{

service_setsecurity(s,req);

break;

}

default:

break;

}

}

return 0;

}
```






<!--more-->












