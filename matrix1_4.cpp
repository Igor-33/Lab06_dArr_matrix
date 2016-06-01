#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define size 6

 int main() {
	int mas[20][20];
	int i, n;
	 for(i = 0; i < size; i++){
		if(i < size/2)
		   for(n = 0; n < size; n++)
		     mas[i][n] = 0;
		else
			for( n = 0; n < size; n++)
            	if(i < (size - n) - 1)
			       mas[i][n] = 0;
		else 
           if(n < i + 1)
	          mas[i][n] = 1;
	    else 
		      mas[i][n] = 0;
	}
	for(n = 0; n < size; n++){
		for(i = 0; i < size; i++)
 	        printf("%4d", mas[n][i]);
		       printf("\n");
	}	
	system("Pause");
	return 0;
}
