#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        double area=0.5*(abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)));
        cout<<(area+0.5)<<endl;
    }
}
