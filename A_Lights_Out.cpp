#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int v[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            v[i][j + 1] += v[i][j];
            v[i + 1][j] += v[i][j];
            v[i][j - 1] += v[i][j];
            v[i - 1][j] += v[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (v[i][j] / 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
}