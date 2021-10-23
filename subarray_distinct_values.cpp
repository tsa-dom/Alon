#include<iostream>
#include<vector>
#include<map>
#include<deque>
#define ll long long
#define mll map<ll, ll>
#define dll deque<ll>

using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k;
    ll result = 0;
    mll valueMap;
    dll buffer;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (valueMap.count(x)) valueMap[x] += 1;
        valueMap.insert({x, 1});
        buffer.push_back(x);
        ll size = valueMap.size();
        while (size > k) {
            ll value = buffer.front();
            buffer.pop_front();
            valueMap[value] -= 1;
            if (valueMap[value] == 0) {
                valueMap.erase(value);
                size--;
            }
        }
        result += buffer.size();
    }
    cout << result;
}