#include <stdio.h>

int main()
{
	long long num = 239809320265259;
	long factor1 = 2;

	while (num % factor1 != 0)
	{
		if (factor1 > num)
		{
			return (-1);
		}
		factor1++;
	}
	long factor2 = num / factor1;
	
	printf("%lld = %ld * %ld\n", num, factor1, factor2);
	return (0);
}
