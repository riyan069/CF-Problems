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
    ll t;
    cin >> t;
    vector<ll> a;
    for (ll i = 0; i < t; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    bool ok = true;
    ll c = 0;
    vector<int>v;
    for(auto u:a)v.push_back(u);
    

    sort(a.begin(),a.end());
    ll mini = a[0];
    ll ind = 0;
    for (ll i = 1; i < a.size(); i++)
    {
        if (a[i] < mini)
        {
            mini = a[i];
            ind = i;
        }
        if (a[i] == mini &&  a[i-1] == mini)
        {
            ok = false;
            break;
        }
        
        
    }
    if(ok)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == a[ind])
            {
                cout<< i+1 << endl;
            }
            
        }
        
    }
    else cout << "Still Rozdil"<< endl;


    return 0;
}