#include <stdio.h>
int main() {
    	int arr[5][5];
    	int i, j;
    	printf("Son kirit : ");
    	for (i = 0; i < 5; i++) {
        	for (j = 0; j < 5; j++) {
            		scanf("%d", &arr[i][j]);
            	if (j > i) {
                	arr[i][j] = 0;
           	}
    	    	}
    	}
    	printf("\n");
    	for (i = 0; i < 5; i++) {
        	for (j = 0; j < 5; j++) {
            	printf("%2d ", arr[i][j]);
        }
        printf("\n");
    	}
    	return 0;
}
