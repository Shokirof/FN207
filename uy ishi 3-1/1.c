#include <stdio.h>
int main() {
    	int n, digit;
    	int sum = 0;
	printf("Son kirit ");
    	scanf("%d", &n);
    	if (n < 0) {
        	n = -n;
    	}
    	for (; n > 0; n /= 10) {
        	digit = n % 10;
        	if (digit % 2 != 0) {
            		sum += digit * digit;
        	}
    	}
    	printf("%d\n", sum);
    	return 0;
}
