#include<iostream>
#include<set>
#define sstr set<string>

using namespace std;

sstr result;

void procedure(string start, string end) {
    if (start.size() <= 0) result.insert(end);
    int size = start.size();
    for (int i = 0; i < size; i++) {
        procedure(start.substr(0, i) + start.substr(i + 1, start.size()) , end + start[i]);
    }
}

int main() {
    string str;
    cin >> str;
    procedure(str, "");
    cout << result.size() << endl;
    for (auto i : result) cout << i << endl;
}