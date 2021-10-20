#include<iostream>
#include<vector>
#define ll long long
#define vll vector<ll>

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll check = n * (n + 1) / 2;
    if (check % 2 != 0) {
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    vll a, b;
    ll p = 1;
    if (n % 2 == 0) {
        a.push_back(1);
        p++;
    }
    for (int i = p + 2; i < n - 1; i += 4) {
        a.push_back(i);
        a.push_back(i + 1);
    }
    for (int i = p; i < n - 1; i += 4) {
        b.push_back(i);
        b.push_back(i + 1);
    }
    a.push_back(n);

    cout << a.size() << endl;
    for (auto i : a) cout << i << " ";
    cout << endl;
    cout << b.size() << endl;
    for (auto i : b) cout << i << " ";
}