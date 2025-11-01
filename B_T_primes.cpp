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

const ll LIMIT = 1e6 + 7;
vector<bool> isPrime(LIMIT, true);

void sieve()
{
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <=  LIMIT; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= LIMIT; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
int main()
{
    op();
    sieve();
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll sqr = sqrt(x);
        if ((sqr * sqr == x) && isPrime[sqr])
        {
            cout <<"YES" <<endl;
        }
        else cout << "NO"<< endl;
        
    }

    return 0;
}