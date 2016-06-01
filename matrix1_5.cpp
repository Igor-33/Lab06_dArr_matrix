#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define size 5
int main(){
	int i, n;
	int mas[20][20];
	
	for(i = 0; i < size; i++) {
		for(n = 0; n < size; n++)
			if(i <= size / 2) {
				if((n >= i) && (n < (size - i)))
					mas[i][n] = 1;
			  else
					mas[i][n] = 0;
			} else {
				if((n <= i) && (n >= (size - i) - 1))
					mas[i][n] = 1;
			  else
					mas[i][n] = 0;
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
