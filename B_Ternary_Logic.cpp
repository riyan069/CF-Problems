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

string tor(ll k)
{
    string stor = "";
    ll n = k;
    while (n != 0)
    {
        ll rem = n % 3;
        if (rem == 0)
        {
            stor.push_back('0');
            n = n / 3;
        }
        else if (rem == 1)
        {
            stor.push_back('1');
            n = n / 3;
        }
        else if (rem == 2)
        {
            stor.push_back('2');
            n = n / 3;
        }

    }
    reverse(stor.begin(),stor.end());
    return stor;
}
int main()
{
    op();
    ll a, c;
    cin >> a >> c;
    string fst = tor(a);
    string scnd = tor(c);
    // cout << fst << ' ' << scnd << endl;
    int xr = a ^ c;
    cout << xr << endl;
    // int xr2 = stoi(fst) ^ stoi(scnd);
    // cout << xr << ' ' << xr2<< endl;
    // int xr3 = 0112 ^ 1212;
    // cout << xr3;
    cout << tor(14);
    return 0;
}