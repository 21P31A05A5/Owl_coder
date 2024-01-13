#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if (a+b+c==0)
        {
            cout<<"YES"<<endl;
        }
        else if (a+b-c==0)
        {
            cout<<"YES"<<endl;
        }
        else if (a-b+c==0)
        {
            cout<<"YES"<<endl;
        }
        else if(a-b-c==0)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}
