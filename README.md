# Class-ring
*提示:编译时可能需要<unistd.h>库，并可能采用了较新的C++标准，所以推荐在MSYS2下编译*\
上课自动打铃程序，目前还比较简陋\
感谢另一位开发者，他在B站:私密の店\
但他好像在2023.8.6刚有github账号……\
[说明文章：](https://jiaowobaba02.github.io/article/6.html)
## v0.20.1版本更新
*小更新:*
弹窗更自然\
不会因为一个弹窗的问题导致整个程序暂时停止从而不会响下一个上/下课铃\
这个release里的程序可能不支持周日正确的弹窗显示

## v0.20.0版本更新
*重大更新:*
支持读取csv文件\
模块化设计*\
支持多数声音文件\
支持课表提醒\
*:模块化设计指可以随意组合，例：只响铃不弹出则可不编译class_form.cpp和（或）msg_control.cpp,只弹出不响铃可不编译audio_contorl.cpp,但是time_get.cpp必须编译

## v0.11.0（最初版本）
~相当于补最初版本的介绍~\
该版本优点：代码少\
缺点（一大堆）
