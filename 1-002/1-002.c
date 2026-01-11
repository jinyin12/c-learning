#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int count, char sign)
{
    int n = count;
    for(; n > 0; n--)
    {
        for (int j = count- n; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 2 * n - 1; j >0; j--)
        {
            printf("%c", sign);
        }
        for (int j = count - n; j > 0; j--)
        {
            printf(" ");
        }
		printf("\n");
    }
    for (; n <= count; n++)
    {
        if (n == 1||n==0)
            continue;
        for (int j = count - n; j > 0; j--)
        {
            printf(" ");
        }
        for(int j = 2 * n - 1; j >0; j--)
        {
            printf("%c", sign);
        }
        for (int j = count - n; j > 0; j--)
        {
            printf(" ");
        }
		printf("\n");
    }
}
int sandglass(int n, int j, int* count)
{
    if (n - (2 * j - 1) * 2 > 0)
    {
        n = n - (2 * j - 1) * 2;
        j++;
        (*count)++;
        sandglass(n, j, count);
    }
    else
        return n;
}
int main()
{
    int count = 1;
    int j = 2;
    int n = 0;
    char sign;
    scanf("%d %c", &n, &sign);
    n = sandglass(--n, j,&count);
    print(count, sign);
    printf("%d", n);
}