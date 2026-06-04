#include <stdio.h>
void power_down(long number, long *root)
{
    *root = 0;
    while((*root) * (*root) <= number)
        (*root)++;
    (*root)--;
}
int main()
{
    long number, root;
    printf("number = ");
    scanf("%ld", &number);
    power_down(number, &root);
    printf("*root = %ld\n", root);
    return 0;
}