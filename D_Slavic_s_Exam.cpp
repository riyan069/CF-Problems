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
        string s, a;
        cin >> s >> a;

        int i = 0, j = 0;
        while (i < s.length() && j < a.length())
        {
            if (s[i] == '?')
            {
                s[i] = a[j];
                i++;
                j++;
            }
            else
            {
                if (s[i] == a[j])
                {
                    i++;
                    j++;
                }
                else i++;
            }
        }
        if (j == a.length())
        {
            cout << "YES"<< endl;
            for (int i = 0; i <s.length(); i++)
            {
                if(s[i] == '?')cout << 'a';
                else cout << s[i];
            }
            cout<< endl;
        }
        else cout << "NO"<< endl;
        

    }
}