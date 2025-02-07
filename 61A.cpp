#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p,q;
    cin>>p>>q;
    string result = "";
    int i = 0;
    for ( int i = 0 ; i< p.length();i++){
        result+=(q[i] == p[i]) ? '0' : '1';
    }
    cout<<result;   
    return 0;
}
