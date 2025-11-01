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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> v;
        string srev = s;
        reverse(srev.begin(), srev.end());
        int len = s.length() - 1;
        if (s == srev)
        {
            cout << 0 << endl;
            cout << " " << endl;
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '0')
                {
                    v.push_back(i+1);
                }
                
            }    
            cout << v.size() << endl;
            sort(v.begin(), v.end());
            for (auto u : v)
                cout << u << ' ';
            cout << endl;
        }
    }

    return 0;
}