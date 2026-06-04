#include <stdio.h>
#include <string.h>

int main()
{
    char str[256];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    for(int i = len - 1; i >= 0; i--)
    {
        if(str[i] == '+')
        {
            for(int j = len + 2; j >= i + 1; j--)
                str[j] = str[j - 2];
            str[i] = '+';
            str[i + 1] = '+';
            str[i + 2] = '+';

            len += 2;
        }
    }
    printf("%s", str);
    return 0;
}