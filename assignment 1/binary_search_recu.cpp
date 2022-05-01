#include<bits/stdc++.h>
using namespace std;
int binSearch(int a[],int l,int r,int x)
{
    if (l<=r) 
    {
    int mid = (l + (r - l)) / 2;

    if (a[mid] == x)
    return mid;

    if (a[mid] > x)
    return binSearch(a, l, mid - 1, x);
    else return binSearch(a, mid + 1, r, x);
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the array length "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to search "<<endl;
    int x;
    cin>>x;
    int res=binSearch(a,0,n-1,x);
    if(res==-1)
    cout<<"Element not present in the array "<<endl;
    else cout<<"Element present at index "<<res;
    return 0;

}
