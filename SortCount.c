#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int FindMax(int A[],int n)
{
    int max=-100;
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    return max;
}
void CountSort(int A[],int n)
{
    int i,j,max,*c;
    max=FindMax(A,n);
    c=(int *)malloc(sizeof(int)*(max+1));
    for(i=0;i<max+1;i++)
    {
        c[i]=0;
    }
    for(i=0;i<n;i++)
    {
        c[A[i]]++;
    }
    i=0;
    j=0;
    while(i<max+1)
    {
        if(c[i]>0)
        {
            A[j++]=i;
            c[i]--;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,48,93,3,__INT32_MAX__},n=13;
    CountSort(A,n-1);
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}