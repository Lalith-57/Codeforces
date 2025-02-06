#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (auto &x : v){
        cin>>x;
    }
    int count= 1;
    for (int i = 1 ; i<n; i++){
        if(v[i-1]!=v[i]){
            count++;
        }
    }
    cout<<count;
    return 0;
}
