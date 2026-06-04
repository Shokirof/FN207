#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool polindrom(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while(left < right)
    {
        if(str[left] != str[right])
            return false;

        left++;
        right--;
    }
    return true;
}

int main()
{
    FILE *fin = fopen("Strings.txt", "r");
    FILE *fout = fopen("result.txt", "w");
    if(fin == NULL || fout == NULL)
    {
        printf("Fayl ochilmadi!\n");
        return 1;
    }
    char word[256];
    while(fscanf(fin, "%s", word) == 1)
    {
        if(polindrom(word))
            fprintf(fout, "%s\n", word);
    }
    fclose(fin);
    fclose(fout);
    printf("Palindromlar result.txt fayliga yozildi.\n");
    return 0;
}