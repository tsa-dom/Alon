#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
#define vll vector<ll>

using namespace std;

int main() {
    ll n, x;
    cin >> n;
    vll list;
    for (int i = 0; i < n; i++) {
        cin >> x;
        list.push_back(x);
    }
    sort(list.begin(), list.end());
    if (list[0] > 1) {
        cout << 1;
        return 0;
    }
    ll min = 1;
    for (int i = 1; i < n; i++) {
        if (list[i] > min + 1) break;
        min += list[i];
    }
    cout << min + 1;
}