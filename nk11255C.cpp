#include <bits/stdc++.h>
using namespace std;
int n;
pair<int, int> q[3];
string s[3];
int main()
{
    for (int i = 0; i < 3; i++)
        cin >> q[i].first, q[i].second = i;
    cin >> n;

    sort(q, q + 3, greater<>());

    for (int i = 0; i < q[0].first; i++)
    {
        int head = q[2].first - i;
        int tail = q[1].first - min(head, q[0].first);
        int mid = n - head - tail;
        if (head < 0 || tail < 0 || mid < 0)
            continue;
        s[q[0].second] = string(n, 'a');
        s[q[1].second] = string(q[0].first, 'a') + string(n - q[0].first, 'b');

        s[q[2].second] =
            string(head, 'a') + string(mid, 'c') + string(tail, 'b');

        for (auto &_ : s)
            cout << _ << "\n";
        exit(0);
    }
    {
        cout << "NO";
        exit(0);
    }
}