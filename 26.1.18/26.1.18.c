#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[10001] = { 0 };
	gets(arr);
	char arr1[256] = { 0 };
	for (int i = 0; i < 256; i++)
	{
		arr1[i] = '\t';
	}
	while (1)
	{
		char sign;
		sign=getchar();
		if (sign == '\n')
			break;
		else 
		{
			int i = sign;
			arr1[i] = sign;
		}
	}
	int count = 1;
	for (int i = 0;; i++)
	{
		if (arr[i] == '\0')
		{
			printf("%c",'\0');
			break;
		}
		for (int j = 0;j<256; j++)
		{
			if (arr1[j] == arr[i])
				count = 0;
		}
		if (count)
		{
			printf("%c", arr[i]);
		}
		count = 1;
	}
	
	
}