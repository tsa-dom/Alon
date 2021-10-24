#include<iostream>
#include<vector>
#define ll long long
#define vll vector<ll>
#define vvl vector<vll>

using namespace std;

ll MOD = 1000000007;

ll pow(ll x, ll q) {
    if (q == 0) return 1;
    ll c = pow(x, q/2);
    c = (c * c) % MOD;
    if (q % 2 == 1) c = (c * x) % MOD;
    return c;
}

int main() {
    ll n;
    cin >> n;
    ll target = (n + 1) * n / 2;
    if (target % 2 != 0) {
        cout << 0;
        return 0;
    }
    target = target / 2;
    vvl table;
    for (int i = 0; i < n; i++) {
        vll item;
        item.push_back(1);
        for (int j = 1; j < target; j++) {
            item.push_back(0);
        }
        table.push_back(item);
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < target; j++) {
            if (j == i) table[i][j] = table[i-1][j] + 1;
            else if (j > i) table[i][j] = table[i-1][j] + table[i-1][j-i-1];
            else table[i][j] = table[i-1][j];
            table[i][j] = table[i][j] % MOD;
        }
    }

    cout << (table[n-1][target-1] * pow(2, MOD - 2)) % MOD;
}