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
    string s;
    cin >> s;
    ll len = s.length();
    ll mid;
    for (ll i = 0; i < len; i++)
    {
        if (s[i] == '^')
        {
            mid = i;
            break;
        }
    }
    ll asum = 0;
    ll bsum = 0;
    bool fnd = false;
    for (ll i = 0; i < mid; i++)
    {
        if (s[i] > '0' && s[i] <= '9')
        {
            fnd = true;
            asum = asum + s[i] - '0';
        }
        if (fnd)
        {
            if (s[i] == '=')
            {
                bsum += 1;
            }
            
        }
        
    }
    
    fnd = false;
    for (ll i = mid + 1; i < len; i++)
    {
        if (s[i] > '0' && s[i] <= '9')
        {
            fnd = true;
            bsum = bsum + s[i] - '0';
        }
        if (fnd)
        {
            if (s[i] == '=')
            {
                asum += 1;
            }
            
        }
        
    }
    // cout << asum << ' '<< bsum << endl;
    if (asum == bsum)
        cout << "balance" << endl;
    else if (asum > bsum)
        cout << "left" << endl;
    else
        cout << "right" << endl;
    return 0;
}