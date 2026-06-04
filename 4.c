#include <stdio.h>
#include <stdlib.h>
int main()
{
	int rc = 5;
	int cc = 5;
	int arr[rc][cc];
	printf("Enter numbers >>>");
	for(int i=0; i<rc; i++)
	{
		for(int j=0; j<cc; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=0; i<rc; i++)
	{
		for(int j=i+1; j<cc; j++)
		{
			arr[i][j] = 0;
		}
	}
	for(int i=0; i<rc; i++)
	{
		for(int j=0; j<cc; j++)
		{
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
