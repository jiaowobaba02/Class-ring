#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    // 检查参数个数
    if (argc != 4)
    {
        printf("Usage: ./msg_control.exe info title type\n");
        return 1;
    }

    // 获取参数
    char *info = argv[1]; // 消息框内容
    char *title = argv[2]; // 消息框标题
    char *type = argv[3]; // 消息框类型

    // 根据type的值选择消息框类型
    UINT msg_type;
    if (strcmp(type, "w") == 0 || strcmp(type, "W") == 0)
    {
        msg_type = MB_ICONWARNING;
    }
    else if (strcmp(type, "e") == 0 || strcmp(type, "E") == 0)
    {
        msg_type = MB_ICONERROR;
    }
    else if (strcmp(type, "i") == 0 || strcmp(type, "I") == 0)
    {
        msg_type = MB_ICONINFORMATION;
    }
    else
    {
        printf("Invalid type: %s\n", type);
        return 2;
    }

    // 创建消息框
    int result = MessageBox(NULL, info, title, msg_type);
    if (result == 0)
    {
        printf("Failed to create message box.\n");
        return 3;
    }

    return 0;
}
