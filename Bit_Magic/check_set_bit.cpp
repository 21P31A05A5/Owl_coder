#include<bits/stdc++.h>
using namespace std;
int check_setbit(int a,int b)
{
    return (a&(1<<b))==(1<<b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<check_setbit(a,b);
}
