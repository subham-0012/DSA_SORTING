#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void Merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];
    while(i<=mid&&j<=h)
    {
        if(A[i]<A[j])
        {
            B[k++]=A[i++];
        }
        else
        {
            B[k++]=A[j++];
        }
    }
    for(;i<=mid;i++)
    {
        B[k++]=A[i];
    }
    for(;j<=h;j++)
    {
        B[k++]=A[j];
    }
    for(int i=l;i<=h;i++)
    {
        A[i]=B[i];
    }
}
void MergeSort(int A[],int n)
{
    int p,l,mid,h,i;
    for(p=2;p<=n;p=p*2)
    {
        for(i=0;p+i-1<n;i=i+p)
        {
            l=i;
            h=p+i-1;
            mid=(l+h)/2;
            Merge(A,l,mid,h);
        }
    }
    if(p/2<n)
    {
        Merge(A,0,p/2-1,n-1);
    }
}
void RMergeSort(int A[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        RMergeSort(A,l,mid);
        RMergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}
int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,48,93,3,__INT32_MAX__},n=13;
    //MergeSort(A,n-1);
    RMergeSort(A,0,n-1);
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}