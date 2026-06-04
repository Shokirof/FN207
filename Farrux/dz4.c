#include <stdio.h>

int main()
{
    int a[5][5];
    printf("25 ta son kiriting:\n");
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(j > i)
                a[i][j] = 0;
        }
    }
    printf("\nNatija:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
            printf("%4d", a[i][j]);

        printf("\n");
    }
    return 0;
}