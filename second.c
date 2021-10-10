#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "fun.h"
int** inputMatrix(int N,int M)
{
    int ** a = (int**)malloc(N*sizeof(int*));

    for(int i = 0; i < N; i++)
    {
        a[i] = (int*)malloc(M * sizeof(int));
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            a[i][j]=rand()%100-50;
        }     }     return a;
}
void outputMatrix(int **a, int n,int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
    void func() {
setlocale(LC_ALL,"rus");
    int N,M;
    printf("Введите размерность матрицы: ");     scanf("%d%d",&N,&M);
    int ** myMatrix = inputMatrix(N,M);
    outputMatrix(myMatrix,N,M);
     int min=myMatrix[0][0];
     int cout = 0;
     for(int i=0; i<N; i++)
    {
        for(int j=1; j<M; j++)
        {
            if((myMatrix[i][j]%3==0)&&(myMatrix[i][j]%5!=0))
            {
                cout++;
            }
        }
    }
    printf("\nЧисел кратных 3 и одновременно некратных 5: %d\n",cout);}
