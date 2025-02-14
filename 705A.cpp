#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t =0;
    while (t<n) {
        cout << "I ";
        if (t % 2 == 1) {
            cout << "love ";
        } else {
            cout << "hate ";
        }
        if (t ==n-1) {
            cout << "it ";
        } else {
            cout << "that ";
        }
        t++;
    }
    return 0;
}
