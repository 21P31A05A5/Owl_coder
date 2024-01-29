#include<bits/stdc++.h> 
using namespace std;
bool Armstrong(int n) 
{ 
    int h=n; 
    int sum=0; 
    while(h) 
    { 
        sum=sum+(pow(h%10,3)); 
        h=h/10; 
    } 
    if(n==sum) 
    { 
        return true; 
    } 
    return false; 
} 
int main() 
{ 
    int n; 
    cin>>n; 
    if(Armstrong(n)) 
    { 
        cout<<"Yes"; 
    } 
    else 
    { 
        cout<<"No"; 
    }   
}
