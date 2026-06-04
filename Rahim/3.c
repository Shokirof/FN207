#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    system("clear");
    char *str;
    str = (char *)malloc(100 * sizeof(char));
    printf("Satrni kiritimg >>> ");
    scanf("%[^\n]%*c", str);
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '+')
        {
            n += 2;
            str = (char *)realloc(str, n);
            for (int j = n - 1; j > i + 2; j--)
            {
                str[j] = str[j - 2];
            }
            str[i + 1] = '+';
            str[i + 2] = '+';
            i = i + 2;
        }
    }
    str[n] = '\0';
    puts(str);
    return 0;
}
