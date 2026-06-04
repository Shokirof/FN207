#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int irand(int a, int b)
{
	return a + rand()%(b - a + 1);
}
int main()
{
	srand(time(NULL));
	int n;
	printf("Massiv uzunligini kiriting >>>");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		arr[i] = irand(10,99);
		printf("%d ",arr[i]);
	}
	printf("\nLokal maximumlar\n");
	for(int i=1; i<n-1; i++)
	{
		if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
			printf("%d ",arr[i]);
	}
	return 0;
}
