#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    printf("N = ");
    scanf("%d", &n);
    int a[n];
    srand(time(NULL));
    for(int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }
    printf("\nLokal maksimum: ");
    for(int i = 1; i < n - 1; i++)
    {
        if(a[i] > a[i-1] && a[i] > a[i+1])
            printf("%d ", a[i]);
    }

    return 0;
}