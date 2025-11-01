/*Author G.M. Shahariyar Riyan*/
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
using ll = long long;
int main()
{
    op();
    ll n;
    cin >> n;
    ll eo = n & 1;
    if (eo == 0)
    {
        cout << n / 2;
    }
    else
        cout << -((n / 2) + 1);

    return 0;
}