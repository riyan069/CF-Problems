/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int arr[24][60];
int main()
{
    int t;
    cin >> t;
    int n = t;

    int cash = 0;
    while (n--)
    {
        int h, m;
        cin >> h >> m;
        arr[h][m]++;
        if (arr[h][m] > cash)
        {
            cash = arr[h][m];
        }
    }
    cout << cash;
}