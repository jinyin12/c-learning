#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n, m;
	scanf("%d:%d", &n, &m);
	if (n < 12 || ((n == 12) && (m == 0)))
	{
		printf("Only %02d:%02d.  Too early to Dang.", n, m);
	}
	else
	{
		if (m > 0)
			n++;
		n = n - 12;
		for (int j = 0; j < n; j++)
		{
			printf("Dang");
		}
	}
}