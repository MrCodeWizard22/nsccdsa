#include<iostream>
using namespace std;
int main()
{
    // int a[6]={1,3,2,5,6,4};
    int a[10],n;
    cin>>n;
    for (int i=0;i<n;i++)
    cin>>a[i];
    for (int i=0;i<n/2;i++){
       int  temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}