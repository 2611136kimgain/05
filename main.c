#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;

    printf("계산식을 입력하세요: ");
    scanf("%d %c %d", &num1, &op, &num2);

    if (op == '+')
    {
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    }
    else if (op == '-')
    {
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    }
    else if (op == '*')
    {
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    }
    else if (op == '/')
    {
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
    }
    else
    {
        printf("잘못된 연산자입니다.\n");
    }

    return 0;
}