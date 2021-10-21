#include<iostream>
#include<set>
#include<vector>
#define ll long long
#define sll multiset<ll>
#define vll vector<ll>

using namespace std;

int main() {
    ll n, m, x;
    cin >> n >> m;
    sll tickets;
    for (int i = 0; i < n; i++) {
        cin >> x;
        tickets.insert(x);
    }
    vll result;
    for (int i = 0; i < m; i++) {
        cin >> x;
        if (x < *tickets.begin() || tickets.size() <= 0) {
            result.push_back(-1);
            continue;
        }
        auto bound = tickets.lower_bound(x);
        if (tickets.find(x) == tickets.end()) bound--;
        result.push_back(*bound);
        tickets.erase(bound);
    }
    for (auto i : result) {
        cout << i << ' ';
    }
}