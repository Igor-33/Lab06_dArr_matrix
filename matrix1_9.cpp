#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define size 6
int main(){	
	int mas[20][20];
    int i, n;

    	for(i = 0; i < size; i++){
		   for ( n = 0; n < size; n++){
 	          if(i >= size - n){
				 mas[i][n] = 0;
			} else {
				mas[i][n] = 1;
			}
		}
	}
	for(i = 0; i < size; i++){
		for(n = 0; n < size; n++)
	    	printf("%4d", mas[i][n]);
	        	printf("\n");
	}
    system("PAUSE");
    return 0;
}
