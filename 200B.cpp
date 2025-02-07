#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (auto &x : v){
        cin>>x;
    }
    double sum = 0.0;
    for(auto x : v){
        sum += x/100.0;
    }
    cout<<setprecision(10)<<sum*100/n;    
    return 0;
}
