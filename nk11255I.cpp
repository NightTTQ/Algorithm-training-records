#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 10;
int n;
int a[N], r[N];

struct Tbit
{
    int size;
    ll t[N];
    int lowbit(int x)
    {
        return x & (-x);
    }
    void init(int sz)
    {
        size = sz + 1;
    }
    void add(int p, ll x)
    {
        if (p <= 0)
            return;
        for (; p <= size; p += lowbit(p))
            t[p] += x;
    }
    ll get(int p)
    {
        ll sum = 0;
        for (; p > 0; p -= lowbit(p))
            sum += t[p];
        return sum;
    }
    ll query(int l, int r)
    {
        return get(r) - get(l - 1);
    }
    void update(int p, ll x)
    {
        add(p, x - query(p, p));
    }
    int kth(ll k)
    {
        int p = 0;
        for (int i = 20; i >= 0; i--)
        {
            int p_ = p + (1 << i);
            if (p_ <= size && t[p_] < k)
            {
                k -= t[p_];
                p = p_;
            }
        }
        return p + 1;
    }
} T;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i], r[a[i]] = i;
    for (int i = 1; i <= n; i++)
    {
        if (r[a[i] + 1] < i && a[r[a[i] + 1]] == a[i] + 1)
        {
            a[i]++;
        }
    }
    T.init(2e5);
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        // cout << a[i] << " ";
        ans += T.query(a[i] + 1, 2e5);
        T.add(a[i], 1);
    }
    // cout << endl;
    cout << ans << endl;
}