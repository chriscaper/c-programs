#include<stdio.h>
#include<stdlib.h>

int main()
{

    int A[50][50];
    int B[50][50];
    int m,n,i,j;
    scanf("%d%d",&m,&n);

    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&A[i][j]);

    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    B[j][i]=A[i][j];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

}