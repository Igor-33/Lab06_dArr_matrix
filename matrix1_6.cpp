#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define size 6
int main() {
	int i, n;
	int mas[100][100];
	
	for(i = 0; i < size; i++) {
		for(n = 0; n < size; n++)
			if(i <= size / 2) {
				if((n < (size - i)) && (n >= i) )
					mas[i][n] = 0;
			else
					mas[i][n] = 1;
	      } else {
				if((n >= (size - i) - 1) && (n <= i))
					mas[i][n] = 0;
			else
					mas[i][n] = 1;
			}
    	}
	for(i = 0; i < size; i++) {
		for(n = 0; n < size; n++)
			printf("%4d", mas[i][n]);
		    	printf("\n");
	}
    system("PAUSE");
    return 0;
}
