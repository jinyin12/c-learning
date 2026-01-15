#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int start = 2;
	int count = 0;
	int arr[100] = { 0 };
	int result[100] = { 0 };
	int k = 0;
	for (int count1=0; (long long)start * start <= n; start++)
	{
		for (int j=n,start1=start;; count1++)
		{
			if (j % start1 == 0)
			{
				arr[k++] = start1;
				j = j / start1;
				start1++;
			}
			else 
			{
				break;
			}
				
		}
		if (count1 > count)
		{
			for (int t = 0; t < k; t++)
			{
				result[t] = arr[t];
			}
			count = count1;
		}		
		count1 = 0;
		k = 0;
	}
	if (count != 0)
	{
		printf("%d\n", count);
		for (int i = 0; i < count; i++)
		{
			printf("%d", result[i]);
			if (i != count - 1)
				printf("*");
		}
	}
	else printf("%d\n%d", 1, n);
}