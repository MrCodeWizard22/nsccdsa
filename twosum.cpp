// leetcode problem number 1 in time complexity O(nlogn)
#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int> &nums,int target){
    int i=0;
    int j=nums.size()-1;
    sort(nums.begin(),nums.end());
    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum==target)
        return {i,j};
        else if(sum<target)
        i++;
        else 
        j--;

    }    
}
int main()
{
    vector <int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(6);
    vector<int> ans=twosum(nums,6);
    for(int i:ans)
    std::cout<<" "<<i;
    return 0;
}