#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void SelectionSort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                swap(&A[i],&A[j]);
            }
        }
    }
}
int main()
{
    int A[]={3,7,9,10,6,5,12,4,11,2,19,1},n=12,i;
    SelectionSort(A,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}