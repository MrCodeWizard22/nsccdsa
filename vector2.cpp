// what if we remove * from the max_element
// implement all functions in vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(4);
    v.push_back(4);
    sort(v.begin(),v.end());
    int mini=*max_element(v.begin(),v.end());
    cout<<mini<<endl;



    return 0;
}