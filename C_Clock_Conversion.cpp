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
        string s;
        cin >> s;
        int hr = (s[0] - '0') * 10 + (s[1] - '0');
        if (hr == 0)
        {
            cout << 12;
            for (int i = 2; i < 5; i++)
            {
                cout << s[i];
            }
            cout << ' ' << "AM" << endl;
        }

        else if (hr < 13)
        {
            if (hr < 12)
            {
                cout << s << ' ' << "AM" << endl;
            }
            else if (hr == 12)
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << s[i];
                }
                cout << " "<< "PM" << endl;
            }
        }
        else
        {
            hr = hr - 12;
            if (hr < 10)
            {
                cout << '0' << hr;
            }
            else
                cout << hr;

            for (int i = 2; i < 5; i++)
            {
                cout << s[i];
            }

            cout << ' ' << "PM" << endl;
        }
    }

    return 0;
}