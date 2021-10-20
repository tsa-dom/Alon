#include<iostream>
#include<set>
#define ll long long
#define sll set<ll>

using namespace std;

int main() {
    ll n, x;
    ll result = 0;
    cin >> n;
    sll visited;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (visited.find(x - 1) == visited.end()) result += 1;
        visited.insert(x);
    }
    cout << result;
}