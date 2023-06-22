// removing duplicates from an array in a new way
#include<bits/stdc++.h>
using namespace std;
int remove(vector <int> &arr)
{
    int i=0;
    int j=0;
    while(i<arr.size()){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
        else i++;
    }
    return j+1;
}
int main(){
    vector<int>arr;
    arr.push_back(0);
    arr.push_back(0);
    // arr.push_back();
    // arr.push_back(1);
    // arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(4);
    cout<<remove(arr);
    return 0;
}