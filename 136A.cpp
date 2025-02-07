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
    vector<int> sol(n);
    for (int l =0;l<n;l++){
        for (int i = 1 ;i<n+1;i++){
            if (i == v[l]){
                sol[i-1]=l+1;
            }
        }
    }
    for(auto x : sol){
        cout<<x<<endl;
    }
    return 0;
}
