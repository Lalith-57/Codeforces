#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n,k,p;
    while (t--) {
        cin>>n>>k>>p;
        if(abs(k)<=n*p){
            if(abs(k)%p==0){
                cout<<abs(k)/p<<endl;
            }
            else{
                cout<<abs(k)/p+1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
