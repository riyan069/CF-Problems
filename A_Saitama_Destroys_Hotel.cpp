/*Author G.M. Shahariyar Riyan*/
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
using ll = long long;
#define precision(x) fixed << setprecision(x)
const int NNN = 1e7 + 5;
int arr[NNN];
const int INF = 1e9 + 7;
const int N_INF = -1e9 - 10;
const long long LINF = 1e18;
const long long N_LINF = -1e18;
const int MOD = 1e9 + 7;

int main()
{
    op();
    int n, s;
    cin >> n >> s;
    int time = 0;
    vector<pair<int, int>> m;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        m.push_back({a,b});
    }
    sort(m.begin(), m.end(), [](auto &a, auto &b) {
        return a.first > b.first;
    });

    int last;
    for (auto u : m)
    {
        int timef = s - u.first;
        s = u.first;
        time += timef;
        if (time < u.second)
        {
            time += (u.second - time);
        }
        last = u.first;
    }

    cout << time + last<< endl;
    return 0;
}
