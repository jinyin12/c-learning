#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 long long int gcd(long long a, long long b)
{
	return b == 0 ? a : gcd(b, a % b);
}
int main()
{
	int n;
	scanf("%d", &n);
	long long int sum1 = 0;
	long long int sum2 = 1;
	for (int j=0; j < n; j++)
	{
		long long int a, b;
		scanf("%lld/%lld", &a, &b);
		sum1 = sum1 * b + a * sum2;
		sum2 = sum2 * b;
		long long int k = gcd(llabs(sum1), llabs(sum2));
		sum1 = sum1 / k;
		sum2 = sum2 / k;
	}
	if (llabs(sum1) < llabs(sum2))
	{
		if (sum1 != 0)
			printf("%lld/%lld", sum1, sum2);
		else printf("%lld", sum1);
	}
	else
	{
		long long int j = sum1 / sum2;
		printf("%lld", j);
		sum1 = sum1 % sum2;
		if (sum1 != 0)
		{
			
			printf(" ");
			printf("%lld/%lld", llabs(sum1), sum2);

		}
		
	}

}