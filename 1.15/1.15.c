#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int find(int n, int start, int arr[],int k)
{
	
	if (n % start == 0)
	{
		n = n / start;
		arr[k++]=start;
		start = start + 1;
		find(n, start, arr, k);
		return find(n, start, arr, k);
	}
	else return k;
}
int main()
{
	int start = 2;
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int result[100] = { 0 };
	int count = 0;
	int find(int n, int start,int arr[],int k);
	int k = 0;
	for (; start * start < n; start++)
	{
	
		int j = find(n, start, arr, k);
		if (count < j)
		{
			count = j;
			for (int t = 0; t < j; t++)
			{
				result[t] = arr[t];
			}
		}
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
		else printf("%d\n%d",1, n);
}