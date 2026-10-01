#include <stdio.h>

int main(void)
{
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    printf("절대값: %d\n", num);

    return 0;
}