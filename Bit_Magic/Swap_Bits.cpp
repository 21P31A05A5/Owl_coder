#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,n;
    cin>>x>>a>>b>>n;
    for(int i=0;i<n;i++)
    {
        if(((x&(1<<(a+i)))>0 && (x&(1<<(b+i)))>0) || ((x&(1<<(a+i)))==0 && (x&(1<<(b+i)))==0))
        {
            continue;
        }
        else
        {
            x=x^(1<<(a+i));
            x=x^(1<<(b+i));
        }
    }
    cout<<x;
}
