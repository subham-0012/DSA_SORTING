#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int A[],int l,int h)
{
    int pivot=A[l];
    int i=l,j=h;
    do
    {
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j){swap(&A[i],&A[j]);}
    }while(i<j);
    swap(&A[l],&A[j]);
    return j;
}
void QuickSort(int A[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}
int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,48,93,3,__INT32_MAX__},n=13;
    QuickSort(A,0,n-1);
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}