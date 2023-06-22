#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int temp;
    for(int i=0;i<2;i++)
   {
    cin>>temp;
    v.push_back(temp);
   }
    for(int i:v)
    std::cout<<i<<endl;
    return 0;
}