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
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int c = 0;
        if (a1 > b1)
        {
            if (a2 >= b2)
            {
                c++;
            }
        }
        if (a1 == b1)
        {
            if (a2 > b2)
            {
                c++;
            }
        }
        if (a2 > b2)
        {
            if (a1 >= b1)
            {
                c++;
            }
        }
        if (a2 == b2)
        {
            if (a1 > b1)
            {
                c++;
            }
        }

        if (a1 > b2)
        {
            if (a2 >= b1)
            {
                c++;
            }
        }
        if (a1 == b2)
        {
            if (a2 > b1)
            {
                c++;
            }
        }
        if (a2 > b1)
        {
            if (a1 >= b2)
            {
                c++;
            }
        }
        if (a2 == b1)
        {
            if (a1 > b2)
            {
                c++;
            }
        }


        cout << c << endl;
    }

    return 0;
}