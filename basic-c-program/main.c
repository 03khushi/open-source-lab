#include <stdio.h>
#include <stdlib.h>

int binarysearch(int a[],int n,int l,int r)
{
   while(l<=r)
   {
       int mid=l+(r-l)/2;
       if (n==a[mid])
           return mid;
       if (a[mid]<n)
           l=mid+1;
       else
           r=mid-1;
   }
   return -1;
}


int main()
{
    int a[]={1,3,5,6,8,14};
    int n=3;
    int r=sizeof(a)/sizeof(a[0]);
    int x=binarysearch(a,n,0,r-1);
    printf(x);
}
