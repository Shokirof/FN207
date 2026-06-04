#include <stdio.h>
int main() {
    	char str[500];
    	int i, j;
	printf("Matini kirit : ");
    	scanf("%[^\n]", str);
    	int len = 0;
    	while (str[len] != '\0') {
        	len++;
    	}
    	for (i = 0; str[i] != '\0'; i++) {
       		if (str[i] == '+') {
            		for (j = len; j > i; j--) {
                		str[j + 2] = str[j];
            }
	str[i + 1] = '+';
        str[i + 2] = '+';
        len += 2;
        i += 2;
        	}
    	}
    	printf("%s\n", str);
    	return 0;
}
