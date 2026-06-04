#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	printf("Sonni kiriting >>>");
	scanf("%d",&x);
	int sum=0;
	while (x !=0)
	{
		int a = x % 10;
		if(a % 2 == 1)
			sum = a * a + sum;
		x = x/10;
	}
	printf("Natija - %d",sum);
	return 0;
}

