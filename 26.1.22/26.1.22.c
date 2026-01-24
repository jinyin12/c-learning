#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[10001] = { 0 };
	gets(arr);
	int k = 0;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	while (arr[k] != '\0') {
		if (arr[k] == 'g' || arr[k] == 'G')
		{
			count1++;
		}
		if (arr[k] == 'p' || arr[k] == 'P')
		{	
			count2++;
		}
		if (arr[k] == 'L' || arr[k] == 'l')
		{
			count3++;
		}
		if (arr[k] == 'T' || arr[k] == 't')
		{	
			count4++;
		}
		k++;
	}
	k = 0;
	while (k < count1 || k < count2 || k < count3 || k < count4)
	{
		if (count1 > 0)
			printf("G");
		count1--;
		if (count2 > 0)
			printf("P");
		count2--;
		if (count3 > 0)
			printf("L");
		count3--;
		if (count4 > 0)
			printf("T");
		count4--;
	}
}