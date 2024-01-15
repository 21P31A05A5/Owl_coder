#include<bits/stdc++.h>
using namespace std;
bool check_wave(int n)
{
    string numStr = to_string(n);
    int length = numStr.length();
    bool upDownUp = true;
    for (int i = 0; i < length - 2; i += 2) {
        if (!(numStr[i] < numStr[i + 1] && numStr[i + 1] > numStr[i + 2])) {
            upDownUp = false;
            break;
        }
    }
    bool downUpDown = true;
    for (int i = 0; i < length - 2; i += 2) {
        if (!(numStr[i] > numStr[i + 1] && numStr[i + 1] < numStr[i + 2])) {
            downUpDown = false;
            break;
        }
    }
    return upDownUp || downUpDown;
}
int main()
{
    int n;
    cin>>n;
    if(check_wave(n))
    {
        cout<<"Wave Number";
    }
    else
    {
        cout<<"Not a Wave Number";
    }
}
