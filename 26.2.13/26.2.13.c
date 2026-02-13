#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h;
	scanf("%1d%1d-%1d%1d-%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h);
	printf("%1d%1d%1d%1d-%1d%1d-%1d%1d",e, f, g, h, a, b, c, d );
}