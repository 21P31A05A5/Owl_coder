#include <bits/stdc++.h>
using namespace std;
int singleElement(int arr[] ,int n) 
{
    int ans=0;
    vector<int>v(32,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<32;j++)
        {
            if(arr[i]&(1<<j))
            {
                v[j]++;
                v[j]=v[j]%3;
            }
        }
    }
    for(int i=0;i<32;i++)
    {
        if(v[i])ans|=(1<<i);
    }
    return ans;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<singleElement(arr,n);
    }
}
