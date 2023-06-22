#include<iostream>
using namespace std;
int main()
{
    int *a=new int[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++)
    cout<<a[i];
    cout<<endl;
    int b=a.length();
    return 0;
}