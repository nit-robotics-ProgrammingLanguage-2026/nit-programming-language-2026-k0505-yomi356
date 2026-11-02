
#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);

    // 0以上10未満の場合はOK
    if (input >= 0 && input < 10)
    {
        printf("OK");
    }

    // それ以外の場合はNG
    if (input < 0 || input >= 10)
    {
        printf("NG");
    }

    return 0;
}
