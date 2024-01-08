#include <bits/stdc++.h>
using namespace std;
int minImpossibleOR(vector<int>& nums) 
{
    int ans = 1;
    unordered_set<int> numsSet(nums.begin(), nums.end());
    while (numsSet.count(ans)) 
    {
        ans <<= 1;
    }
    return ans;
}
int main() 
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }
    cout <<minImpossibleOR(nums)<< endl;
}
