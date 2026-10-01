#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("합계: %d\n", sum);

    return 0;
}