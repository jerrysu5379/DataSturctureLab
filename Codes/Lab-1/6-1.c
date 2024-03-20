#include <stdlib.h>
#include <stdbool.h>

void fun(int **Mat, int N){
    int i,j;
    int temp;
    for(i=0;i<N/2;i++)
    {
        for(j=i;j<N-1-i;j++)
        {
            temp=Mat[i][j];
            Mat[i][j]=Mat[N-1-j][i];
            Mat[N-1-j][i]=Mat[N-1-i][N-1-j];
            Mat[N-1-i][N-1-j]=Mat[j][N-1-i];
            Mat[j][N-1-i]=temp;
        }
    }
}
