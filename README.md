# Class-ring
*提示:编译时可能需要<unistd.h>库，推荐在MSYS2下编译*\
上课自动打铃程序，目前还比较简陋\
感谢另一位开发者，他在B站:私密の店\
但他好像没有github账号……\
## v0.20.0版本更新
*重大更新:*
支持读取csv文件\
模块化设计*\
支持多数声音文件\
支持课表提醒\
*:模块化设计指可以随意组合，例：只响铃不弹出则可不编译class_form.cpp和（或）msg_control.cpp,只弹出不响铃可不编译audio_contorl.cpp,但是time_get.cpp必须编译
