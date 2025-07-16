/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    typedef long long int ll;
int main()
{
    op();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        int max = 0;
        for (int i = 1; i < n; i++)
        {
            if(v[i] < v[i - 1])
            {
                if(v[i -1] > max)
                max = v[i -1];
            }
        }
        cout << max << endl;
    }
}

/*
2 0 4 3
1 0 3 2
0 0 2 1
0 0 1 0
0 0 0 0

3 0 2 1 4
2 0 1 0 3
1 0 0 0 2
*/