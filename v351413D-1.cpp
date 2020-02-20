#include <iostream>
#include <vector>
#include <algorithm>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

typedef pair<int, int> two;

bool cmp(two a, two b) {
    return a.first != b.first ? a.first < b.first : a.second < b.second;
}

int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<two> all_sticks(n);
        for (int i = 0; i < n; i++) {
            cin >> all_sticks[i].first >> all_sticks[i].second;
        }
        sort(all_sticks.begin(), all_sticks.end(), cmp);
        bool flags[n]{};
        int cnt{};
        for (int i = 0; i < n; i++) {
            if (!flags[i]) {
                int tmp_f = all_sticks[i].first, tmp_s = all_sticks[i].second;
                for (int j = i; j < n; j++) {
                    if (!flags[j] && all_sticks[j].first >= tmp_f &&
                        all_sticks[j].second >= tmp_s) {
                        tmp_f = all_sticks[j].first;
                        tmp_s = all_sticks[j].second;
                        flags[j] = true;
                    }
                }
                ++cnt;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}