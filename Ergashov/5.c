#include <stdio.h>
void a(long number, long *root) {
    	long i = 0;
    	while ((i + 1) * (i + 1) <= number) {
        	i++;
    	}
    	*root = i;
}
int main() {
    	long number;
    	long root;
	printf("Son kiriting : ");
    	scanf("%ld", &number);
    	a(number, &root);
    	printf("*root = %ld\n", root);
    	return 0;
}
