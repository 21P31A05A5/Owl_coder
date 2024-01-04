#include <bits/stdc++.h>
using namespace std;
int count_set_bit(int n)
{
    int c=0;
        while(n!=0)
        {
            int rb=n&-n;
            n=n-rb ;
            c++;
        }
        return c;
}
int main() 
{
    int sum=0;
    int n;
    cin >> n;
    for(int i=1; i<=n ; i++)
    {
        sum+=count_set_bit(i);
    }
    cout << sum << endl;   
}
