#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    const int x1=5;
    const int y1=5;
    const int x2=5;
    
    int x, y, k;
    int a[x1][y1], z[x2], r[x1] = { 0 };
        srand(time(NULL));

    for (x = 0; x < x1; x++) {
        printf("\t\n");
        for (y = 0; y < y1; y++) {
            a[x][y] = rand() % 10;
               printf("%3d  ", a[x][y]);
        }
    }
    printf("\n\n\n");
 
    for(x=0;x < x2;x++)  {
        z[x]=rand()%10;
            printf("%3d\n",z[x]);
    }
    printf("\n\n");
    system("pause");
    printf("\n\n");
   
     for (x = 0; x<x2; x++)
          for (k = 0; k<x2; k++)
                r[x]+=a[x][k]*z[k];
   
     for (x = 0; x<x2; x++)
        printf("\n\n%3d  ", r[x]);
    printf("\n\n");
    system("pause");
return 0;
}

