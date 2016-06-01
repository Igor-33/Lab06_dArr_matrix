#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define Size 6
int main(){
	
	int mas[100][100];
    int i, n;
	
	for(i = 0; i < Size; i++){
		for ( n = 0; n < Size; n++){
			if(i <= n){
				mas[i][n] = 1;
			} else {
				mas[i][n] = 0;
			}
		}
	}
    
    for(i = 0; i < Size; i++){
		for ( n = 0; n < Size; n++){
		    if(i >= Size - n)
			mas[i][n] = 0;
		}
	}
	
	for(i = 0; i < Size; i++){
		for(n = 0; n < Size; n++)
		printf("%4d", mas[i][n]);
		printf("\n");
	}
	system("pause");
	return 0;
}
