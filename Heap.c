#include<stdio.h>
void insert(int A[],int n)
{
    int i=n,temp;
    temp=A[i];
    while(i>1&&temp>A[i])
    {
        A[i]=A[i/2];
        i/=2;
    }
    A[i]=temp;
}
int Delete(int A[],int n)
{
    int i,j,x,temp,val;
    x=A[n];
    val=A[1];
    A[1]=x;
    A[1]=val;
    i=1;j=i*2;
    while(j<n-1)
    {
        if(A[j]<A[j+1])
        {
            j=j+1;
        }
        if(A[i]<A[j])
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j*=2;
        }
        else
        {
            break;
        }
    }
    return val;
}
int main()
{
    int H[]={0,2,5,8,9,4,10,7},i;
    for(i=2;i<=7;i++)
    {
        insert(H,i);
    }
}