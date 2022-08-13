#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int insertionSort(int A[],int n)
{
    int key,i,j;
    for(i=1;i<n;i++)
    {
        j=i-1;
        key=A[i];
        while(j>-1&&A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}
int main()
{
    int A[]={3,7,9,10,6,5,12,4,11,2},n=10,i;
    insertionSort(A,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}