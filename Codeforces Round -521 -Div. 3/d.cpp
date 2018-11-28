#include<bits/stdc++.h>

using namespace std;

const int MAX = 2e5 + 1;

int n, k;
vector<int> cnts(MAX);
vector<int> s, t;

bool can(int cnt) {
    t.clear();
    for(int i = 0; i < MAX; ++i) {
        int need = min(cnts[i] / cnt, k - int(t.size()));
        for(int j = 0; j < need; ++j) {
            t.push_back(i);
        }
    }
    return int(t.size()) == k;
}


int main() {
    cin >> n >> k;

    s = vector<int>(n);
    for(int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    for(auto c : s) {
        cnts[c]++;
    }

    int l = 0, r = n;
    while(r > l + 1) {
        int mid = (r + l) >> 1;
        if(can(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    if(!can(r))
        can(l);
    for(auto it : t) {
        cout << it <<" ";
    }
    return 0;
}
