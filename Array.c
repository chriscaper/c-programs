#include<stdio.h>

int main(){
    int A[100],n;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&A[i]);
    
    for(i=n-1;i>=0;i--)
    {
        printf("%d \n",A[i]);
    }
}