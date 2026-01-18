#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[10001] = { 0 };
	gets(arr);
	int arr1[256] = { 0 };
	char sign;
	while(( sign=getchar())!= '\n')	
	{
		arr1[sign] = 1;
	}
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (!arr1[arr[i]])
		{
			printf("%c", arr[i]);
		}
	}	
}