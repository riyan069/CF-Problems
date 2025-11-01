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

const int LIMIT = 1e5 + 7;
vector<bool> isPrime(LIMIT, true);
void seive()
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i < LIMIT; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j < LIMIT; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
int main()
{
    op();
    seive();
    int n;
    cin >> n;
    int sum = 0, c = 0;

    vector<int> v;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int j = 0; j < n / 2; j++)
        {
            cout << 2 << ' ';
        }
        cout << endl;
    }
    else
    {
        int num = n - 3;
        cout << (num / 2) + 1 << endl;
        for (int j = 0; j < num / 2; j++)
        {
            cout << 2 << ' ';
        }
        cout << 3 << endl;
    }

    return 0;
}
