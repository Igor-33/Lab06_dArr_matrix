#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define size 3
int main() {
	int mas[size][size];
        int i, j;
	
	for(i = 0; i < size; i++){
		for ( j = 0; j < size; j++){
			if(i = j)
			    mas[i][j] = 1;
			else
				mas[i][j] = 0;
	  	  }
	   }
 	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++)
		   printf("%4d", mas[i][j]);
		      printf("\n");
  }
    system("PAUSE");
    return 0;
}
