#include <stdio.h>
void power_down(long number, long *root)
{
	for(int i=0; i*i<=number;i++)
	{
		if(i*i == number)
		{
			*root = i;
			return;
		}
	}
}
int main()
{
	long a = 0;
	long *root = &a;
	long son;
	printf("Sonni kiriting >>>");
	scanf("%ld",&son);
	power_down(son,root);
	printf("%ld", *root);
	return 0;
}
