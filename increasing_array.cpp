#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main() {
    ll n, prev, curr;
    cin >> n;
    cin >> prev;
    ll result = 0;
    if (n > 1) {
        for (int i = 1; i < n; i++) {
            cin >> curr;
            if (prev - curr > 0) result += prev - curr;
            prev = max(prev, curr);
        }
    }
    cout << result;
}