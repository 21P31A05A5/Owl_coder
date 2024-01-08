#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int s=a^b,cnt=0;
    //counting_set bits_s..
    while(s)
    {
        s=s &(s-1);
        cnt++;
    }
    if(cnt%2==0)
    cout<<cnt/2<<endl;
    else
    cout<<-1<<endl;
}
