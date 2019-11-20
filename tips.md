<html>

<head>
<meta http-equiv=Content-Type content="text/html; charset=gb2312">
<meta name=Generator content="Microsoft Word 15 (filtered)">
<style>
<!--
 /* Font Definitions */
 @font-face
	{font-family:"MS Mincho";
	panose-1:2 2 6 9 4 2 5 8 3 4;}
@font-face
	{font-family:宋体;
	panose-1:2 1 6 0 3 1 1 1 1 1;}
@font-face
	{font-family:"Cambria Math";
	panose-1:2 4 5 3 5 4 6 3 2 4;}
@font-face
	{font-family:等线;
	panose-1:2 1 6 0 3 1 1 1 1 1;}
@font-face
	{font-family:"等线 Light";
	panose-1:2 1 6 0 3 1 1 1 1 1;}
@font-face
	{font-family:Consolas;
	panose-1:2 11 6 9 2 2 4 3 2 4;}
@font-face
	{font-family:"Yu Mincho";
	panose-1:2 2 4 0 0 0 0 0 0 0;}
@font-face
	{font-family:"\@等线 Light";}
@font-face
	{font-family:"\@等线";
	panose-1:2 1 6 0 3 1 1 1 1 1;}
@font-face
	{font-family:"\@宋体";
	panose-1:2 1 6 0 3 1 1 1 1 1;}
@font-face
	{font-family:"\@MS Mincho";
	panose-1:2 2 6 9 4 2 5 8 3 4;}
@font-face
	{font-family:"\@Yu Mincho";}
 /* Style Definitions */
 p.MsoNormal, li.MsoNormal, div.MsoNormal
	{margin:0cm;
	margin-bottom:.0001pt;
	text-align:justify;
	text-justify:inter-ideograph;
	font-size:10.5pt;
	font-family:等线;}
h1
	{mso-style-link:"标题 1 字符";
	margin-top:17.0pt;
	margin-right:0cm;
	margin-bottom:16.5pt;
	margin-left:0cm;
	text-align:justify;
	text-justify:inter-ideograph;
	line-height:240%;
	page-break-after:avoid;
	font-size:22.0pt;
	font-family:等线;}
p.MsoHeader, li.MsoHeader, div.MsoHeader
	{mso-style-link:"页眉 字符";
	margin:0cm;
	margin-bottom:.0001pt;
	text-align:center;
	layout-grid-mode:char;
	border:none;
	padding:0cm;
	font-size:9.0pt;
	font-family:等线;}
p.MsoFooter, li.MsoFooter, div.MsoFooter
	{mso-style-link:"页脚 字符";
	margin:0cm;
	margin-bottom:.0001pt;
	layout-grid-mode:char;
	font-size:9.0pt;
	font-family:等线;}
p.MsoTitle, li.MsoTitle, div.MsoTitle
	{mso-style-link:"标题 字符";
	margin-top:12.0pt;
	margin-right:0cm;
	margin-bottom:3.0pt;
	margin-left:0cm;
	text-align:center;
	font-size:16.0pt;
	font-family:"等线 Light";
	font-weight:bold;}
span.MsoPlaceholderText
	{color:gray;}
p.MsoListParagraph, li.MsoListParagraph, div.MsoListParagraph
	{margin:0cm;
	margin-bottom:.0001pt;
	text-align:justify;
	text-justify:inter-ideograph;
	text-indent:21.0pt;
	font-size:10.5pt;
	font-family:等线;}
span.1
	{mso-style-name:"标题 1 字符";
	mso-style-link:"标题 1";
	font-weight:bold;}
span.a
	{mso-style-name:"标题 字符";
	mso-style-link:标题;
	font-family:"等线 Light";
	font-weight:bold;}
span.a0
	{mso-style-name:"页眉 字符";
	mso-style-link:页眉;}
span.a1
	{mso-style-name:"页脚 字符";
	mso-style-link:页脚;}
.MsoChpDefault
	{font-family:等线;}
 /* Page Definitions */
 @page WordSection1
	{size:595.3pt 841.9pt;
	margin:72.0pt 90.0pt 72.0pt 90.0pt;
	layout-grid:15.6pt;}
div.WordSection1
	{page:WordSection1;}
 /* List Definitions */
 ol
	{margin-bottom:0cm;}
ul
	{margin-bottom:0cm;}
-->
</style>

</head>

<body lang=ZH-CN style='text-justify-trim:punctuation'>

<div class=WordSection1 style='layout-grid:15.6pt'>

<p class=MsoTitle><span lang=EN-US style='font-family:"Times New Roman",serif'>Tips
in programming</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:-18.0pt'><span
lang=EN-US style='font-family:"Times New Roman",serif'>1.<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span>快速幂算法</p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
style='font-family:宋体'>该法利用了指数的二进制分解。以计算</span><span lang=EN-US
style='font-family:"Times New Roman",serif'>3<sup>19</sup></span><span
style='font-family:宋体'>为例。</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
lang=EN-US style='font-size:10.5pt;font-family:等线'><img width=290 height=21
src="tips.files/image001.png"></span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
lang=EN-US style='font-size:10.5pt;font-family:等线'><img width=180 height=21
src="tips.files/image002.png"></span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
style='font-family:宋体'>这样，原本需要进行</span><span lang=EN-US style='font-family:
"Times New Roman",serif'>19</span><span style='font-family:宋体'>次操作的幂计算，只需</span><span
lang=EN-US style='font-size:10.5pt;font-family:等线;position:relative;top:4.0pt'><img
width=78 height=21 src="tips.files/image003.png"></span><span style='font-family:
宋体'>次操作即可完成（</span><span lang=EN-US style='font-family:"Times New Roman",serif'>3</span><span
style='font-family:宋体'>次乘法加上幂翻倍，</span><span lang=EN-US style='font-family:
"Times New Roman",serif'>2</span><span style='font-family:宋体'>次纯幂翻倍）。复杂度从朴素法的</span><span
lang=EN-US style='font-family:"Times New Roman",serif'>O(n)</span><span
style='font-family:宋体'>降到了</span><span lang=EN-US style='font-family:"Times New Roman",serif'>O(logn)</span><span
style='font-family:宋体'>。</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><b><span
lang=EN-US style='font-family:"Times New Roman",serif'>Code:</span></b></p>

<p class=MsoNormal style='text-indent:20.9pt'><span lang=EN-US
style='font-family:Consolas'>int quickpow(int a,int b,int c)</span></p>

<p class=MsoNormal style='text-indent:20.9pt'><span lang=EN-US
style='font-family:Consolas'>{</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt'><span lang=EN-US
style='font-family:Consolas'> int result=1,t=a;</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt'><span lang=EN-US
style='font-family:Consolas'> while (b)</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt'><span lang=EN-US
style='font-family:Consolas'> {</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; if (b%2) result=result*t%c;</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; b&gt;&gt;=1; t=t*t%c;</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt'><span lang=EN-US
style='font-family:Consolas'> }</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt'><span lang=EN-US
style='font-family:Consolas'> return result;</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
lang=EN-US style='font-family:Consolas'>}</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
lang=EN-US style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:-18.0pt'><span
lang=EN-US style='font-family:"Times New Roman",serif'>2.<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span><span
lang=EN-US style='font-family:"Times New Roman",serif'>STL std::deque</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
style='font-family:宋体'>双端队列容器，可以使用一个可逆</span><span lang=EN-US style='font-family:
Consolas'>/</span><span style='font-family:宋体'>随机访问迭代器。</span></p>

<table class=MsoTableGrid border=1 cellspacing=0 cellpadding=0 width=559
 style='width:418.95pt;margin-left:18.0pt;border-collapse:collapse;border:none'>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>容器成员</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border:solid windowtext 1.0pt;
  border-left:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>操作</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::deque&lt;T&gt;::size()</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>返回该双端队列的长度</span></p>
  </td>
 </tr>
 <tr style='height:17.5pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:17.5pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::deque&lt;T&gt;::push_back(T val)</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:17.5pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>将值为</span><span lang=EN-US style='font-family:Consolas'>val</span><span
  style='font-family:宋体'>的项插入队列尾部</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::deque&lt;T&gt;::push_front(T val)</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>将值为</span><span lang=EN-US style='font-family:Consolas'>val</span><span
  style='font-family:宋体'>的项插入队列头部</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::deque&lt;T&gt;::pop_back()</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>弹出队列尾部项</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::deque&lt;T&gt;::pop_front()</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>弹出队列头部项</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::deque&lt;T&gt;::begin()</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>返回一个指向队列头的迭代器（也可写作</span><span lang=EN-US style='font-family:Consolas'>front</span><span
  style='font-family:宋体'>）</span></p>
  </td>
 </tr>
 <tr style='height:17.5pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:17.5pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::deque&lt;T&gt;::end()</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:17.5pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>返回一个指向队列尾的迭代器（也可写作</span><span lang=EN-US style='font-family:Consolas'>back</span><span
  style='font-family:宋体'>）</span></p>
  </td>
 </tr>
 <tr style='height:17.5pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:17.5pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::deque&lt;T&gt;::iterator</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:17.5pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>类型名。指向</span><span lang=EN-US style='font-family:Consolas'>deque&lt;T&gt;</span><span
  style='font-family:宋体'>中一个元素的随机访问迭代器</span></p>
  </td>
 </tr>
 <tr style='height:17.5pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:17.5pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::deque&lt;T&gt;::iterator operator ++</span></p>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::deque&lt;T&gt;::iterator operator --</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:17.5pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>使迭代器指向下一个（上一个）元素</span></p>
  </td>
 </tr>
</table>

<p class=MsoNormal><span lang=EN-US style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoNormal><span lang=EN-US style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoNormal><span lang=EN-US style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoNormal><span lang=EN-US style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoNormal><span lang=EN-US style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoNormal><span lang=EN-US style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:-18.0pt'><span
lang=EN-US style='font-family:"Times New Roman",serif'>3.<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span><span
lang=EN-US style='font-family:"Times New Roman",serif'>Eratosthenes</span>素数筛法</p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'>一种快速寻找素数（制作素数表）的方法。当需要频繁处理素数时此法优于朴素判定法。</p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'>具体步骤如下：</p>

<p class=MsoListParagraph style='margin-left:36.0pt;text-indent:-18.0pt'><span
lang=EN-US style='font-family:"Times New Roman",serif'>1.<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span>先尝试第一个素数<span
lang=EN-US style='font-family:"Times New Roman",serif'>2</span>，将<span
lang=EN-US style='font-family:"Times New Roman",serif'>2</span>的每一个倍数都标记为合数</p>

<p class=MsoListParagraph style='margin-left:36.0pt;text-indent:-18.0pt'><span
lang=EN-US style='font-family:"Times New Roman",serif'>2.<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span>再尝试下一个质数<span
lang=EN-US style='font-family:"Times New Roman",serif'>3</span>，将其倍数标记为合数</p>

<p class=MsoListParagraph style='margin-left:36.0pt;text-indent:-18.0pt'><span
lang=EN-US style='font-family:"Times New Roman",serif'>3.<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span>再尝试<span
lang=EN-US style='font-family:"Times New Roman",serif'>5,7,11,13</span>……重复以上步骤</p>

<p class=MsoNormal style='margin-left:18.0pt'>该法的时间复杂度为<span lang=EN-US
style='font-family:"Times New Roman",serif'>O(nlog log n)</span>，快于只使用朴素法制表的<span
lang=EN-US style='font-family:"Times New Roman",serif'>O(n<sup>1.5</sup>)</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><b><span
lang=EN-US style='font-family:"Times New Roman",serif'>Code:</span></b></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>void make(bool np[],int p[],int &amp;count,int n) </span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>{</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; int i; </span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; np[1]=1;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; for (i=2;i*i&lt;=n;i++)</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; {</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; if (!np[i])</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; {</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; p[count++]=i;
</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; for
(int j=i*i;j&lt;=n;j+=i)</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; np[j]=1;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; }</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; }</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; for (;i&lt;=n;i++)</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; if (!np[i])</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; {</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; p[count++]=i;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; }</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>}</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:-18.0pt'><span
lang=EN-US style='font-family:"Times New Roman",serif'>4.<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span>记忆化搜索范例</p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
style='font-family:宋体'>在</span><span lang=EN-US style='font-family:"Times New Roman",serif'>DFS/BFS</span><span
style='font-family:宋体'>的基础上，用表</span><span lang=EN-US style='font-family:"Times New Roman",serif'>f</span><span
style='font-family:宋体'>存储</span><span lang=EN-US style='font-family:"Times New Roman",serif'>w</span><span
style='font-family:宋体'>的计算状态（如果需要的话，再加一个表</span><span lang=EN-US
style='font-family:"Times New Roman",serif'>v</span><span style='font-family:
宋体'>记录是否算过）。</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><b><span
lang=EN-US style='font-family:"Times New Roman",serif'>Code: </span></b><i><span
lang=EN-US style='font-family:"Times New Roman",serif'>(from luogu P1464
Function)</span></i></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>int w(long long a,long long b,long long c)</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>{</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; //</span><span
style='font-family:宋体'>可以直接给出的例外值不需入表</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; if (a&lt;=0 || b&lt;=0 ||
c&lt;=0) return 1;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; if (a&gt;20 || b&gt;20 ||
c&gt;20) </span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; return
w(20,20,20);</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; //</span><span
style='font-family:宋体'>核心</span><span lang=EN-US style='font-family:Consolas'>1</span><span
style='font-family:宋体'>：已经算过的值就从“记忆”里找，不要再算</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; if (v[a][b][c]) return
f[a][b][c];</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; //</span><span
style='font-family:宋体'>核心</span><span lang=EN-US style='font-family:Consolas'>2</span><span
style='font-family:宋体'>：算一次就要“记忆”下来</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; if (a&lt;b &amp;&amp; b&lt;c) </span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; {</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; v[a][b][c]=1;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; return
f[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; }</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; v[a][b][c]=1;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; return f[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>}</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:-18.0pt'><span
lang=EN-US style='font-family:"Times New Roman",serif'>5.<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span>快速排序</p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
style='font-family:宋体'>一种排序方法。核心是分治法和选“枢轴点”：对于每一段序列，在枢轴点两侧寻找不满足“左小右大”的值并交换，再对枢轴点两侧的序列重复以上操作，直到所有层级下枢轴点两侧均为“左小右大”为止。</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
style='font-family:宋体'>最好时间复杂度</span><span lang=EN-US style='font-family:"Times New Roman",serif'>O(n)</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
style='font-family:宋体'>最坏时间复杂度</span><span lang=EN-US style='font-family:"Times New Roman",serif'>O(n&shy;<sup>2</sup>)</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
style='font-family:宋体'>平均时间复杂度</span><span lang=EN-US style='font-family:"Times New Roman",serif'>O(nlogn)</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><b><span
lang=EN-US style='font-family:"Times New Roman",serif'>Code:</span></b></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>//</span><span style='font-family:宋体'>泛型化快速排序，支持对任意类型</span><span
lang=EN-US style='font-family:Consolas'>T</span><span style='font-family:宋体'>排序，</span><span
lang=EN-US style='font-family:Consolas'>cmp</span><span style='font-family:
宋体'>为比较函数，</span><span lang=EN-US style='font-family:Consolas'>x&lt;y</span><span
style='font-family:宋体'>时返回</span><span lang=EN-US style='font-family:Consolas'>true</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>template&lt;typename T&gt;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>void qsort(T* a,int l,int r,bool (*cmp)(T x,T y))//</span><span
style='font-family:宋体'>应用二分思想</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>{</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; T mid=a[(l+r)/2];//</span><span
style='font-family:宋体'>中间数</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; int i=l,j=r;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; do{</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; while(cmp(a[i],mid))
i++;//</span><span style='font-family:宋体'>查找左半部分比中间数大的数</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; while(cmp(mid,a[j]))
j--;//</span><span style='font-family:宋体'>查找右半部分比中间数小的数</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
if(i&lt;=j)//</span><span style='font-family:宋体'>如果有一组不满足排序条件（左小右大）的数</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; {</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
//</span><span style='font-family:宋体'>交换</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; T
tmp=a[i];</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; a[i]=a[j];</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; a[j]=tmp;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
i++;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
j--;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; }</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; }while(i&lt;=j);//</span><span
style='font-family:宋体'>这里注意要有</span><span lang=EN-US style='font-family:Consolas'>=</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; if(l&lt;j) qsort(l,j);//</span><span
style='font-family:宋体'>递归搜索左半部分</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;&nbsp;&nbsp; if(i&lt;r) qsort(i,r);//</span><span
style='font-family:宋体'>递归搜索右半部分</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>}</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:-18.0pt'><span
lang=EN-US style='font-family:"Times New Roman",serif'>6.<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span><span
lang=EN-US style='font-family:"Times New Roman",serif'>STL std::map</span></p>

<p class=MsoListParagraph style='margin-left:18.0pt;text-indent:0cm'><span
style='font-family:宋体'>映射表容器，可以使用一个正向</span><span lang=EN-US style='font-family:
Consolas'>/</span><span style='font-family:宋体'>反向</span><span lang=EN-US
style='font-family:Consolas'>/</span><span style='font-family:宋体'>随机访问迭代器，所有元素均自动按字典升序排列。</span></p>

<table class=MsoTableGrid border=1 cellspacing=0 cellpadding=0 width=559
 style='width:418.95pt;margin-left:18.0pt;border-collapse:collapse;border:none'>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>容器成员</span><span lang=EN-US style='font-family:Consolas'>/</span><span
  style='font-family:宋体'>用法</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border:solid windowtext 1.0pt;
  border-left:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>操作</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::map&lt;T1,T2&gt; a;</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>定义一个从</span><span lang=EN-US style='font-family:Consolas'>T1</span><span
  style='font-family:宋体'>值指向</span><span lang=EN-US style='font-family:Consolas'>T2</span><span
  style='font-family:宋体'>值的映射表</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::map&lt;T1,T2&gt;::begin()</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>返回指向开头的迭代器</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::map&lt;T1,T2&gt;::end()</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>返回指向尾部的迭代器</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::map&lt;T1,T2&gt;::insert(pair&lt;T1,T2&gt;(x,y))</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>插入一个</span><span lang=EN-US style='font-family:Consolas'>T1</span><span
  style='font-family:宋体'>值</span><span lang=EN-US style='font-family:Consolas'>x</span><span
  style='font-family:宋体'>到</span><span lang=EN-US style='font-family:Consolas'>T2</span><span
  style='font-family:宋体'>值</span><span lang=EN-US style='font-family:Consolas'>y</span><span
  style='font-family:宋体'>的映射</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::map&lt;T1,T2&gt;::insert(map&lt;T1,T2&gt;::value_type(x,y))</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>效果同上</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::map&lt;T1,T2&gt; a;</span></p>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>//...</span></p>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>a[x]=y;</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>访问映射表</span><span lang=EN-US style='font-family:Consolas'>a</span><span
  style='font-family:宋体'>里键值</span><span lang=EN-US style='font-family:Consolas'>x</span><span
  style='font-family:宋体'>的对应值并修改为</span><span lang=EN-US style='font-family:
  Consolas'>y</span><span style='font-family:宋体'>。</span></p>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>若没有该映射，就插入一个</span><span lang=EN-US style='font-family:Consolas'>x-&gt;y</span><span
  style='font-family:宋体'>的映射</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::map&lt;T1,T2&gt;::erase(iterator i)</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>删除迭代器</span><span lang=EN-US style='font-family:Consolas'>i</span><span
  style='font-family:宋体'>指向的映射</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::map&lt;T1,T2&gt;::erase(T1 x)</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>删除键值</span><span lang=EN-US style='font-family:Consolas'>x</span><span
  style='font-family:宋体'>的映射</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::map&lt;T1,T2&gt;::count(iterator a,iterator
  b,T1 x)</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>判断映射表中从</span><span lang=EN-US style='font-family:Consolas'>a</span><span
  style='font-family:宋体'>到</span><span lang=EN-US style='font-family:Consolas'>b</span><span
  style='font-family:宋体'>的位置是否有键值</span><span lang=EN-US style='font-family:
  Consolas'>x</span><span style='font-family:宋体'>的映射，有返回</span><span
  lang=EN-US style='font-family:Consolas'>1</span><span style='font-family:
  宋体'>，无返回</span><span lang=EN-US style='font-family:Consolas'>0</span></p>
  </td>
 </tr>
 <tr style='height:18.2pt'>
  <td width=287 valign=top style='width:215.45pt;border:solid windowtext 1.0pt;
  border-top:none;padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span lang=EN-US
  style='font-family:Consolas'>std::map&lt;T1,T2&gt;::find(T1 x)</span></p>
  </td>
  <td width=271 valign=top style='width:203.5pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  padding:0cm 5.4pt 0cm 5.4pt;height:18.2pt'>
  <p class=MsoListParagraph style='text-indent:0cm'><span style='font-family:
  宋体'>查找映射表中键值为</span><span lang=EN-US style='font-family:Consolas'>x</span><span
  style='font-family:宋体'>的映射，有返回一个指向位置的迭代器，无返回</span><span lang=EN-US
  style='font-family:Consolas'>end()</span></p>
  </td>
 </tr>
</table>

<p class=MsoNormal style='margin-left:21.0pt'><span lang=EN-US
style='font-family:Consolas'>&nbsp;</span></p>

</div>

</body>

</html>
