#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void BubbleSort(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
            }
        }
    }
}
int main()
{
    int A[]={3,7,9,10,6,5,12,4,11,2},n=10,i;
    BubbleSort(A,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}