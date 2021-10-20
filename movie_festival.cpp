#include<iostream>
#include<map>
#define ll long long
#define mmap multimap<ll, ll>

using namespace std;

int main() {
    ll n, a, b, ptr, result;
    cin >> n;
    mmap movies;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        movies.insert(pair<ll, ll> (b, a));
    }
    ptr = 0;
    result = 0;
    for (auto i = movies.begin(); i != movies.end(); i++) {
        if (ptr <= i->second) {
            ptr = i->first;
            result++;
        }
    }
    cout << result;
}