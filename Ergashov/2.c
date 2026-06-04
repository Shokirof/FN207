#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    	int n, i;
    	srand(time(NULL));
	printf("Son kirit : ");
    	scanf("%d", &n);
    	int a[n];
    	for (i = 0; i < n; i++) {
        	a[i] = rand() % 30 + 1;
        	printf("%d ", a[i]);
    	}
    	printf("\n");
    	for (i = 0; i < n; i++) {
        	if (n == 1) {
            	printf("%d ", a[i]);
        } else if (i == 0) {
            	if (a[i] > a[i + 1]) {
                printf("%d ", a[i]);
            }
        } else if (i == n - 1) {
            if (a[i] > a[i - 1]) {
                printf("%d ", a[i]);
            }
        } else {
		if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                	printf("%d ", a[i]);
            		}
        	}
    	}
    	printf("\n");
    	return 0;
}
