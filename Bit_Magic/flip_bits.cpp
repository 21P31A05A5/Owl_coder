#include<bits/stdc++.h>
using namespace std;
int flip_bit(int a)
{
    return (~a);//result=-(a+1)
}
int main()
{
    int a;
    cin>>a;
    a=flip_bit(a);
    cout<<a;
}
