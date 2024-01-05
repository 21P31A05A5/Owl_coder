#include<bits/stdc++.h>
using namespace std;
bool IsCircular(vector<int>&v,int n)
{
    vector<int>temp(32,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<32;j++)
        {
            if((v[i]&(1<<j)))
            {
                temp[j]++;
            }
        }
    }
    for(int i=0;i<32;i++)
    {
        if(temp[i]>=3)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    IsCircular(v,n)?cout<<"True":cout<<"False";    
}
