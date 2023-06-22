#include<iostream>
using namespace std;
int check(int a[], int n){
    int b=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>b)
        b=a[i];
    }
    return b;
}
int check2(int a[], int n){
    int min=a[0];
    for (int i=0;i<n;i++){
        if(a[i]<min)
        min=a[i];
    }
    return min;
}
int main()
{
    int a[10];
    for(int i=0;i<10;i++){
    cin>>a[i];
    }
    cout<<"the max element is "<<check(a,10)<<endl;
    cout<<"the min element is "<<check2(a,10)<<endl;
    return 0;
}