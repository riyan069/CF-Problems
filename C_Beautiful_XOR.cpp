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
string to_bin(int x)
{
    int n = x;
    string s;
    int c = n;
    for (int i = 0; i < c; i++)
    {
        int rem = n % 2;
        if (rem == 0)
            s.push_back('0');
        else
            s.push_back('1');
        n = n / 2;
        if (n == 0)
        {
            reverse(s.begin(), s.end());
            return s;
        }
    }
}
int main()
{
    op();
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        string bin1 = to_bin(a);
        string bin2 = to_bin(b);
        if (a == b)
            cout << 0 << endl;
        else if (bin1.length() < bin2.length())
        {
            cout << -1 << endl;
        }
        else
        {
            int xrr = a ^ b;
            if (xrr <= a)
            {
                cout << 1 << endl;
                cout << xrr << endl;
            }
            else
            {
                cout << 2 << endl;
                cout << b << ' '<< a << endl;
            }
        }
    }
}