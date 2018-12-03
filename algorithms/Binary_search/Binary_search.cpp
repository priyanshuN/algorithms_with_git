#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int l,int r,int value)
{
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==value)
            return mid;
        else if(a[mid]>value)
            r=mid-1;
        else if(a[mid]<value)
            l=mid+1;
    }
    return -1;
}
int main()
{
    int n,k;        //Enter no of integers in array(n)
    cin>>n>>k;      //Enter (k) no to be searched
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];      //Input sorted (non decreasing order) values of array
    }
    int z=binary_search(a,0,n-1,k);
    cout<<z;            //Print index of value if found or print -1
    return 0;
}
