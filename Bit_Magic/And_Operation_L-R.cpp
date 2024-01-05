#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<vector<int>> ans;//(10,vector<int>(5,90));
    vector<int>temp(32,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<32;j++)
        {
            if(v[i]&(1<<j))
            {
                temp[j]++;
            }
        }
        ans.push_back(temp);
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int result=0;
        if(l==0)
        {
            int len=r+1;
            for(int i=0;i<31;i++)
            {
                if(ans[r][i]==len)
                {
                    result|=(1<<i);
                }
            }
        }
        else
        {
            int len=r-l+1;
            for(int i=0;i<32;i++)
            {
                if((ans[r][i]-ans[l-1][i]==len))
                {
                    result|=(1<<i);
                }
            }
        }
        cout<<result<<endl;
    }
    
}
