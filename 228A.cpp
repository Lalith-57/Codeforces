#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> v(4);
   for (auto &x : v){
    cin>>x;
   }
   sort(v.begin(),v.end());
   int sum = 0;
   for(int i = 1 ; i<4;i++){
        if (v[i-1]==v[i]) sum+=1;
   }
   cout<<sum;
   return 0;
}
