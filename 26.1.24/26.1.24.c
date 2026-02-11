#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sex[50] = { 0 };
	int opt[50] = { 0 };
	char name[501] = { 0 };
	for (int k = 0; k < n; k++)
	{
		scanf("%d %s", &sex[k], &name[9 * k]);
	}
	int j = n - 1;
	for (int k = 0; j >= k; k++)
	{
		j = n - 1;
		if (opt[k] == 1)
			continue;
		while (sex[k] == sex[j] || opt[j] == 1)
		{

			j--;
			if (j == k)
				break;
		}
		if (j == k)
			break;
		opt[j] = 1;
		opt[k] = 1;
		printf("%s %s", &name[9 * k], &name[9 * j]);
		printf("\n");
	}
}