/*blobal*/
body { background: #fff url(http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_bg.png) repeat 0 0; font-family: 'Microsoft YaHei',Verdana,Arial,Helvetica,sans-serif; }
#home { min-width: 0; width: 100%; }
/*blobal end*/

/*
**header begin
*/
#header { border: none; margin: 0; padding: 0; }

/*blog title*/
#blogTitle {
    background: url(http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_labelbg.png) no-repeat right top;
    height: 130px;
    left: 5px;
    padding: 0 68px 0 24px;
    position: absolute;
    top: 120px;
    z-index: 2;
    color: #fff;
}
#blogTitle #lnkBlogLogo { display: none; }
#blogTitle h1 {
    float: none;
    font-size: 1.8em;
    margin: 20px 0 0 0;
    width: 100%;
}
#blogTitle h1 a { 
    color: #fff;
    text-shadow: 1px 1px 1px #696969;
}
#blogTitle h1 a:hover { color: #f7781f; text-decoration: none; }
#blogTitle h2 {
    float: none;
    font-size: 1.5em;
    margin: 7px 0 0 0;
    width: 100%;
    text-shadow: 1px 1px 1px #696969;
    font-weight: bold;
}
/*blog title end*/

/*navigator*/
#navigator { background: rgba(0,0,0,0.6); border-bottom: 1px solid #000; height: auto; }
#navigator #navList { float: none; text-align: center; width: 100%; }
#navigator #navList li {display: inline-block; float: none; height: 80px; line-height: 80px; width: 10%; }
#navigator #navList a {border: none; color: #fff; display: inline-block; line-height: 132px; float: none; font-size: 12pt; font-weight: bold; height: 80px; padding: 0; width: 100%; }
#navigator #navList a:hover { border-bottom-style: solid; border-bottom-width: 8px; }
#navigator #navList a.aHeaderXML { display: none; }

#navigator #navList li:nth-of-type(1) a { 
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_cnblogs4.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_cnblogs3.png") ;
    background-repeat: no-repeat;
    background-position: center 5px, center -80px; 
}

@keyframes nav1 {
    from { background-color: #FD3F49; border-color: #FD3F49; background-position: center 5px, center -80px;  } 
    to { background-color: #BC2F36; border-color: #A30008; background-position: center 80px, center 5px;  } 
}
@-webkit-keyframes nav1 {
    from { background-color: #FD3F49; border-color: #FD3F49; background-position: center 5px, center -80px;  } 
    to { background-color: #BC2F36; border-color: #A30008; background-position: center 80px, center 5px;  } 
}
#navigator #navList li:nth-of-type(1) a:hover {
    -webkit-animation: nav1 1s ;
    animation: nav1 1s ;
    background-color: #BC2F36;
    background-repeat: no-repeat;
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_cnblogs4.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_cnblogs3.png") ;
    background-position: center 80px, center 5px; 
    border-color: #A30008;
}

#navigator #navList li:nth-of-type(2) a {
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_index1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_index2.png");
    background-repeat: no-repeat;
    background-position: center 3px, center -80px; 
}
@keyframes nav2 {
    from { background-color: #7F3E00; background-position: center 3px, center -80px; border-color: #FFA34C; } 
    to { background-color: #FFA34C; background-position: center 80px, center -5px; border-color: #FF7B00; } 
}
@-webkit-keyframes nav2 {
    from { background-color: #7F3E00; background-position: center 3px, center -80px; border-color: #FFA34C; } 
    to { background-color: #FFA34C; background-position: center 80px, center 3px; border-color: #FF7B00; } 
}
#navigator #navList li:nth-of-type(2) a:hover {
    -webkit-animation: nav2 1s ;
    animation: nav2 1s ;
    background-color: #FFA34C;
    background-repeat: no-repeat;
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_index1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_index2.png");
    background-position: center 80px, center 3px;
    border-color: #FF7B00;
}

#navigator #navList li:nth-of-type(3) a {
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_question3.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_question4.png");
    background-repeat: no-repeat;
    background-position: center 3px, center -80px; 
}
@keyframes nav3 {
    from { background-color: #83F03C; background-position: center 3px, center -80px; border-color: #A0F06C; } 
    to { background-color: #5CA82A; background-position: center 80px, center -5px; border-color: #399200; } 
}
@-webkit-keyframes nav3 {
    from { background-color: #83F03C; background-position: center 3px, center -80px; border-color: #A0F06C; } 
    to { background-color: #5CA82A; background-position: center 80px, center -5px; border-color: #399200; } 
}
#navigator #navList li:nth-of-type(3) a:hover {
    -webkit-animation: nav3 1s;
    animation: nav3 1s;
    background-color: #5CA82A;
    background-repeat: no-repeat;
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_question3.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_question4.png");
    background-position: center 80px, center 3px;
    border-color: #399200;
}

#navigator #navList li:nth-of-type(4) a {
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_twitter1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_twitter2.png");
    background-repeat: no-repeat;
    background-position: center 3px, center -80px; 
}
@keyframes nav4 {
    from { background-color: #34D0B6; background-position: center 3px, center -80px; border-color: #006957; } 
    to { background-color: #00A287; background-position: center 80px, center -5px; border-color: #1E796A; } 
}
@-webkit-keyframes nav4 {
    from { background-color: #34D0B6; background-position: center 3px, center -80px; border-color: #006957; } 
    to { background-color: #00A287; background-position: center 80px, center -5px; border-color: #1E796A; } 
}
#navigator #navList li:nth-of-type(4) a:hover {
    -webkit-animation: nav4 1s ;
    animation: nav4 1s ;
    background-color: #00A287;
    background-repeat: no-repeat;
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_twitter1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_twitter2.png");
    background-position: center 80px, center 3px;
    border-color: #1E796A;
}

#navigator #navList li:nth-of-type(5) a {
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_document1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_document2.png");
    background-repeat: no-repeat;
    background-position: center 3px, center -80px; 
}
@keyframes nav5 {
    from { background-color: #64A8D1; background-position: center 3px, center -80px; border-color: #245A7A; } 
    to { background-color: #3D9AD1; background-position: center 80px, center -5px; border-color: #03436A; } 
}
@-webkit-keyframes nav5 {
    from { background-color: #64A8D1; background-position: center 3px, center -80px; border-color: #245A7A; } 
    to { background-color: #3D9AD1; background-position: center 80px, center -5px; border-color: #03436A; } 
}
#navigator #navList li:nth-of-type(5) a:hover {
    -webkit-animation: nav5 1s ;
    animation: nav5 1s ;
    background-color: #3D9AD1;
    background-repeat: no-repeat;
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_document1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_document2.png");
    background-position: center 80px, center 3px;
    border-color: #03436A;
}

#navigator #navList li:nth-of-type(6) a {
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_user1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_user2.png");
    background-repeat: no-repeat;
    background-position: center 3px, center -80px; 
}
@keyframes nav6 {
    from { background-color: #6D87D6; background-position: center 3px, center -80px; border-color: #133AAC; } 
    to { background-color: #476BD6; background-position: center 80px, center -5px; border-color: #2B4181; } 
}
@-webkit-keyframes nav6 {
    from { background-color: #6D87D6; background-position: center 3px, center -80px; border-color: #133AAC; } 
    to { background-color: #476BD6; background-position: center 80px, center -5px; border-color: #2B4181; } 
}
#navigator #navList li:nth-of-type(6) a:hover {
    -webkit-animation: nav6 1s ;
    animation: nav6 1s ;
    background-color: #476BD6;
    background-repeat: no-repeat;
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_user1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_user2.png");
    background-position: center 80px, center 3px;
    border-color: #2B4181;
}

#navigator #navList li:nth-of-type(7) a {
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_rss1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_rss2.png");
    background-repeat: no-repeat;
    background-position: center 3px, center -80px; 
}
@keyframes nav7 {
    from { background-color: #956BD6; background-position: center 3px, center -80px; border-color: #4C2982; } 
    to { background-color: #7D44D6; background-position: center 80px, center -5px; border-color: #2F0571; } 
}
@-webkit-keyframes nav7 {
    from { background-color: #956BD6; background-position: center 3px, center -80px; border-color: #4C2982; } 
    to { background-color: #7D44D6; background-position: center 80px, center -5px; border-color: #2F0571; } 
}
#navigator #navList li:nth-of-type(7) a:hover {
    -webkit-animation: nav7 1s ;
    animation: nav7 1s ;
    background-color: #7D44D6;
    background-repeat: no-repeat;
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_rss1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_rss2.png");
    background-position: center 80px, center 3px;
    border-color: #2F0571;
}

#navigator #navList li:nth-of-type(8) a {
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_settings1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_settings2.png");
    background-repeat: no-repeat;
    background-position: center 3px, center -80px; 
}
@keyframes nav8 {
    from { background-color: #D636C9; background-position: center 3px, center -80px; border-color: #82217A; } 
    to { background-color: #AD009F; background-position: center 80px, center -5px; border-color: #710067; } 
}
@-webkit-keyframes nav8 {
    from { background-color: #D636C9; background-position: center 3px, center -80px; border-color: #82217A; } 
    to { background-color: #AD009F; background-position: center 80px, center -5px; border-color: #710067; } 
}
#navigator #navList li:nth-of-type(8) a:hover {
    -webkit-animation: nav8 1s;
    animation: nav8 1s;
    background-color: #AD009F;
    background-repeat: no-repeat;
    background-image: url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_settings1.png"), url("http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_settings2.png");
    background-position: center 80px, center 3px;
    border-color: #710067;
}
/*navigator end*/

/*blog stats*/
@keyframes blogStats {from { top: 0; } to { top: 86px; } }
@-moz-keyframes blogStats {from { top: 0; } to { top: 86px; } }
@-webkit-keyframes blogStats {from { top: 0; } to { top: 86px; } }
@-ms-keyframes blogStats {from { top: 0; } to { top: 86px; } }
@-o-keyframes blogStats {from { top: 0; } to { top: 86px; } }
.blogStats {
    -webkit-animation: blogStats 3s;
    -moz-animation: blogStats 3s;
    -ms-animation: blogStats 3s;
    -o-animation: blogStats 3s;
    animation: blogStats 3s;
    background: rgba(243, 243, 243, 0.8);
    border: 1px solid #666;
    border-radius: 5px;
    color: #000;
    font-size: 1.2em;
    padding: 8px;
    position: absolute;
    right: 12px;
    text-shadow: 1px 1px 1px rgb(180, 159, 159);
    top: 86px;
    z-index: -2;
}
/*blog stats end*/

/*
* header end
*/


/*=================================================================*/


/*
*content begin
 */

/*main begin*/
#main {
    margin-top: 128px;
    min-width: 680px;
    position: relative;
    z-index: 1;
}
#mainContent {
    border: 1px solid #A0A0A0;
    border-radius: 5px;
    box-shadow: 0 0 8px #777;
    float: none;
    margin: 0 auto;
    min-width: 680px;
    overflow: visible;
    padding: 8px;
    width: 86%;
}
#mainContent .forFlow { background-color: #fff; margin: 0; padding-top: 52px; }
#mainContent .forFlow > div { margin-bottom: 60pt; padding: 0 0 0 12pt; width: 55%; }

/*main end*/

/*post*/
.day { position: relative; }
.dayTitle {
    background: #c0bbb9;
    border: none;
    border-radius: 60px;
    color: #434343;
    height: 60px;
    left: -80px;
    line-height: 28px;
    padding: 10px;
    position: absolute;
    text-align: center;
    width: 60px;
    z-index: -1;
}
.day .postSeparator { border: none; }
.postTitle { border: none; float: none; line-height: 2.6em; }
.postTitle a:link, .postTitle a:visited { color: #428cb2; font-size: 200%; }
.postTitle a:hover { color: #f7781f; text-decoration: underline; }
#mainContent .forFlow > div.topicListFooter {font-size: 1em; margin: 0; padding: 18px; text-align: left; }

.c_b_p_desc {
    line-height: 1.8em;
    font-size: 1.1em;
}
.topicListFooter a {
    padding: 10px;
    color: #fff;
    font-weight: bold;
    border-radius: 5px;
    box-shadow: 1px 1px 3px #515253;
    border-radius: 5px;
    box-shadow: 1px 1px 5px #382B2B;
    background-image: linear-gradient(to bottom,#5bc0de,#2f96b4);
    background-image: -moz-linear-gradient(to bottom,#5bc0de,#2f96b4);
    background-image: -webkit-linear-gradient(to bottom,#5bc0de,#2f96b4);
    background-image: -ms-linear-gradient(to bottom,#5bc0de,#2f96b4);
}
.topicListFooter a:hover{
    background-image: linear-gradient(to bottom,#2f96b4,#5bc0de);
    background-image: -moz-linear-gradient(to bottom,#2f96b4,#5bc0de);
    background-image: -webkit-linear-gradient(to bottom,#2f96b4,#5bc0de);
    background-image: -ms-linear-gradient(to bottom,#2f96b4,#5bc0de);
}
/*post end*/

/*sidebar begin*/
#sideBar {
    box-shadow: 0 0 8px #555;
    margin: 0;
    overflow: visible;
    padding: 8px;
    position: absolute;
    right: 2%;
    top: 36px;
    width: 20%;
}
#sideBar #sideBarMain { background: #fff url(http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_bg2.png) repeat 0 0; padding: 4px; }
#leftcontentcontainer h3 {
    border-bottom: 1px solid #d85c30;
    color: #d85c30;
    font-size: 1.5em;
    line-height: 1.5em;
    margin: 4px 0 10px 0;
    text-align: left;
    text-indent: 0.2em;
}
#leftcontentcontainer li {
    height: 22px;
    overflow: hidden;
    text-overflow: ellipsis;
    white-space: nowrap;
}
.catListView,.catListFeedback,.catListComment {
    background: #fff url(http://images.cnblogs.com/cnblogs_com/coffeedeveloper/497836/o_bg2.png) repeat 0 0;
    border: 8px solid #fff;
    box-shadow: 0 0 8px #777;
    left: -94%;
    padding: 4px;
    position: absolute;
    top: 0;
    width: 80%;
}
.catListView { height: 260px; }
.catListFeedback, .catListComment { border-top: none; box-shadow: 0 8px 8px #777; }
.catListFeedback { height: 260px; top: 275px; z-index: 2; }
.catListComment { top: 542px; z-index: 3; }
#calendar { width: 100%; }
.CalTitle { background: none; }
#calendar .CalNextPrev a:link, #calendar .CalNextPrev a:visited, #calendar .CalNextPrev a:active,#calendar .CalNextPrev a:link, #calendar .CalNextPrev a:visited, #calendar .CalNextPrev a:active { background: none; }

#leftcontentcontainer li.recent_comment_body {
    height: auto;
}
#sideBarMain .newsItem img {
    border: 4px solid #fff;
    max-height: 180px;
    max-width: 180px;
    position: absolute;
    z-index: -1;
}
#sideBarMain .newsItem img:nth-of-type(1) {
    -webkit-transform: rotate(10deg);
    -o-transform: rotate(10deg);
    -ms-transform: rotate(10deg);
    -moz-transform: rotate(10deg);
    transform: rotate(10deg);
    right: 110px;
    top: -120px;
}
#sideBarMain .newsItem img:nth-of-type(2) {
    -webkit-transform: rotate(-20deg);
    -o-transform: rotate(-20deg);
    -ms-transform: rotate(-20deg);
    -moz-transform: rotate(-20deg);
    transform: rotate(-20deg);
    right: 280px;
    top: -120px;
}

@keyframes headImg {from { top: -120px; } to { top: -190px; } }
@-webkit-keyframes headImg {from { top: -120px; } to { top: -190px; } }
@-moz-keyframes headImg {from { top: -120px; } to { top: -190px; } }
@-o-keyframes headImg {from { top: -120px; } to { top: -190px; } }
@-ms-keyframes headImg {from { top: -120px; } to { top: -190px; } }
#sideBarMain .newsItem img:hover {
    -webkit-animation: headImg 3s;
    -o-animation: headImg 3s;
    -ms-animation: headImg 3s;
    -moz-animation: headImg 3s;
    animation: headImg 3s;
    cursor: pointer;
    top: -190px;
}
/*sidebar end*/

/*
content end
 */

/*==========================================================*/

/*
*footer begin
 */
#footer {background: rgba(0,0,0, 0.6); border: none; color: #fff; margin: 0; margin-top: 24px; min-height: 0; padding: 12px 0; }
/*
*footer end
 */



@media screen and (max-width: 1024px) {
    .catListView, .catListFeedback, .catListComment {
        border: 0;
        box-shadow: none;
        padding: 0;
        position: static;
        width: 100%;
    }

    #mainContent .forFlow > div { width: 75%; }
}

@media screen and (max-width: 680px) {
    #sideBar {
        box-shadow: none;
        -moz-box-sizing: border-box; 
        -webkit-box-sizing: border-box;
        -ms-box-sizing: border-box;;
        box-sizing: border-box;
        position: static;
        width: 100%;
    }
    #sideBar #sideBarMain,.catListView, .catListFeedback, .catListComment { background: #fff; }
    #navigator #navList li { height: 40px; line-height: 40px; width: 20%; }
    #navigator #navList li a { height: 40px; line-height: 40px; background-image:none !important; }
    #navigator #navList li a:hover { border: none; }
    #main {
        margin-top: 68px;
    }
    #mainContent { 
        -moz-box-sizing: border-box; 
        -webkit-box-sizing: border-box;
        -ms-box-sizing: border-box;;
        box-sizing: border-box;
    }
    #mainContent .forFlow > div { 
        -moz-box-sizing: border-box; 
        -webkit-box-sizing: border-box;
        -ms-box-sizing: border-box;;
        box-sizing: border-box;
        padding: 0 12px; 
        width: 100%; }
    .dayTitle {
        background: none;
        border-bottom: 1px solid #666;
        border-radius: 0;
        height: auto;
        padding: 0;
        position: static;
        text-align: left;
        width: auto;
    }
    #blogTitle {
        background: none repeat scroll 0 0 transparent;
        height: auto;
        padding: 1em;
        position: static;
    }
    .blogStats {
        float: left;
        position: static;
    }
    #sideBarMain .newsItem img {
        display: none;
    }
}

/*
===================================
 */
/*
* Article begin
 */


#topics .postTitle {line-height: 2em;border:none; }
.postBody h2 {
    color: #343434;
    border: 1px solid #666;
    background: rgba(68, 199, 250, 0.3);
    border-radius: 5px;
    text-shadow: 1px 1px 1px rgb(206, 206, 206);
    box-shadow: 1px 1px 2px rgb(163, 163, 163);
    line-height: 1.5em;
}
.postBody h3 {
    border-bottom: 2px solid rgb(201, 163, 10);
    font-size: 1.3em;
    line-height: 2em;
}
.postBody h4 {
    font-size: 1.4em;
    text-shadow: 1px 1px 0 rgb(185, 185, 185);
    line-height: 1.8em;
}
#mainContent .forFlow > div#comment_form{
    margin:0;
}
/*
* Article end
 */
#ad_under_post_holder #google_ad_c1,#google_ad_c2{ display:none !important;}

//可以点击有声音