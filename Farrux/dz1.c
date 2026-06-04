#include <stdio.h>

int main()
{
    int n, d, sum = 0;
    printf("Son kiriting: ");
    scanf("%d", &n);
    while(n > 0)
    {
        d = n % 10;
        if(d % 2 != 0)
            sum += d * d;
        n /= 10;
    }

    printf("%d\n", sum);

    return 0;
}