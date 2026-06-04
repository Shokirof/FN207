#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int is_palindrom(char arr[])
{
	int n = strlen(arr);
	for(int i=0; i<n;i++)
	{
		if(arr[i] != arr[n-i-1])
			return 0;
	}
	return 1;
}
int main()
{
	FILE *fstart= fopen("String.txt","w");
	if (fstart == NULL)
	{
		printf("Fayl ochilmadi");
		return 0;
	}
	fprintf(fstart,"apple\nAziza\nkatak\nqochoq\naka");
	fclose(fstart);
	FILE *fali= fopen("String.txt","r");
	if (fali == NULL)
	{
		printf("Fayl ochilmadi");
		return 0;
	}
	char word[100];
	while(fscanf(fali,"%s",word) == 1)
	{
		if(is_palindrom(word))
		printf("%s\n",word);
	}
	fclose(fali);
	printf("Yozildi");
	return 0;
}
