#include <bits/stdc++.h>
using namespace std;
vector<long long> primes;
void generate_seive(int n)
{
    primes.resize(n,1);
    primes[0] = 0;
    primes[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = 0;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    generate_seive(n);
    for(int i=1;i<=n;i++)
    {
        if(primes[i])
        {
            cout<<i<<" ";
        }
    }
}
