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
    ll a, b;
    cin >> a >> b;
    ll xr = a ^ b;
    cout << xr;

    // int n;
    // cin >> n;
    // string s;
    // int c = n;
    // for (int i = 0; i < c; i++)
    // {
    //     int rem = n % 2;
    //     if (rem == 0)
    //         s.push_back('0');
    //     else
    //         s.push_back('1');
    //     n = n / 2;
    //     if (n == 0)
    //     {
    //         reverse(s.begin(),s.end());
    //         cout << s;
    //         break;
    //     }
    // }
    return 0;
}