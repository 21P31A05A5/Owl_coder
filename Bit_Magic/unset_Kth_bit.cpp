#include<bits/stdc++.h>
using namespace std;
int unset_bit(int a,int b)
{
    return ~((~a)|(1<<b));//negation of a and then set_bit then do negation again
}
int main()
{
    int a,b;
    cin>>a>>b;
    a=unset_bit(a,b);
    cout<<a;
}
