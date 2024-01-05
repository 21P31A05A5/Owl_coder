#include<bits/stdc++.h>
using namespace std;
long long reversedBits(long long n) 
{
    // code here
    long long ans=0;
    long long i=0;
    while(i<32)
    {
        i++;
        if(n&1)
        {
            ans|=1;
        }
        ans<<=1;
        if(n)
        n>>=1;
    }
    return ans>>1;
}
int main()
{
    long long n;
    cin>>n;
    cout<<reversedBits(n);
}
