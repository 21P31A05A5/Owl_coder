#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int c=0;
        int n;
        cin >> n ;
        while(n!=0)
        {
            int rsvm= n & -n;
            n=n-rsvm;
            c++;
        }
        cout << c << endl;
    }
}
