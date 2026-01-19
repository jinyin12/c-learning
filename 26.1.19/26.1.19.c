#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	char arr[18];
	int count = 0;
	for (int j = 0; j < n; j++)
	{
		getchar();
		int sign = 0;
		scanf("%s",arr);
		for (int k = 0; k < 18; k++)
		{
			if (arr[k] >= '0' && arr[k] <= '9')
				arr[k] = arr[k] - '0';
			else if (k == 17 && arr[k] == 'X') arr[k] = 10;
			else
			{
				sign++;
			}
		}
		if (sign)
		{
			for (int k = 0; k < 18; k++)
			{
				if (arr[k] <= 9)
					printf("%d", arr[k]);
				else printf("%c",arr[k]);
				count++;
			}
			printf("\n");
			continue;
		}
		int sum = arr[0] * 7 + arr[1] * 9 + arr[2] * 10 + arr[3] * 5 + arr[4] * 8 + arr[5] * 4 + arr[6] * 2 + arr[7] * 1 + arr[8] * 6 + arr[9] * 3 + arr[10] * 7 + arr[11] * 9 + arr[12] * 10 + arr[13] * 5  +arr[14] * 8 + arr[15] * 4 + arr[16] * 2;
		int z = sum % 11;
		z = (12 - z) % 11;
		if (z == arr[17])
			continue;
		else
		{
			count++;
			for (int k = 0; k < 18; k++)
			{
				if (arr[k] <= 9)
					printf("%d", arr[k]);
				else printf("X");
			}
			printf("\n");
		}
	}
	if (count == 0)
		printf("All passed");
}