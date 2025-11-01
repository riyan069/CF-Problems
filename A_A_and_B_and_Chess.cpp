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
    vector<string> str(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> str[i];
    }
    int blck = 0, whte = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (str[i][j] == 'Q')
            {
                whte += 9;
            }
            else if (str[i][j] == 'R')
            {
                whte += 5;
            }
            else if (str[i][j] == 'B')
            {
                whte += 3;
            }
            else if (str[i][j] == 'N')
            {
                whte += 3;
            }
            else if (str[i][j] == 'P')
            {
                whte += 1;
            }
            else if (str[i][j] == 'q')
            {
                blck += 9;
            }
            else if (str[i][j] == 'r')
            {
                blck += 5;
            }
            else if (str[i][j] == 'b')
            {
                blck += 3;
            }
            else if (str[i][j] == 'n')
            {
                blck += 3;
            }
            else if (str[i][j] == 'p')
            {
                blck += 1;
            }
        }
    }
    if(whte > blck) cout << "White" << endl;
    else if(blck > whte) cout << "Black"<< endl;
    else cout << "Draw"<< endl;

    return 0;
}