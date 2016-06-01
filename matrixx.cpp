#include <cstdlib>
#include <iostream>
#include <stdio.h>
 
int A[][3] = 
{
    {4,5,6},
    {7,8,9}
};
int B[][2] = 
{
    {1,2},
    {3,4},
    {5,6}
};
void outvec(int n, int * vec)
{
    for(int i = 0; i < n; i++)
        printf("%d ",vec[i]);
           printf("\n");
}
int main()
{
    int C[2][2] = {0};
    int i,j,k;
    int mA = 2;
    int nA = 3;
    int mB = 3;
    int nB = 2;
        printf("Matrix A:\n");
    for(i = 0; i < mA; i++)
        outvec(nA, A[i]);
           printf("Matrix B:\n");
      for(i = 0; i < mB; i++)
        outvec(nB, B[i]);
        
    for(i = 0; i < mA; i++)
      for(j = 0; j < nB; j++)
        for(k = 0; k < nA; k++)
    {
        C[i][j] += A[i][k]*B[k][j];
    }
    printf("Matrix C:\n");
      for(i = 0; i < mA; i++)
        outvec(nB, C[i]);
   system("PAUSE");
    return 0;
}  
  

