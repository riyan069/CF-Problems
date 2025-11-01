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
const int N = 1e7 + 5;
int arr[N];

int main()
{
    op();
    vector<ll> v;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= v[4]; j++)
        {
            ll mul = v[i] * j;
            if (mul > v[4])
                break;
            arr[mul]++;
        }
    }
    ll dmg = 0;
    for (int i = 1; i <= v[4]; i++)
    {
        if (arr[i] == 0)
            dmg++;
    }
    cout << v[4] - dmg << endl;

    return 0;
}