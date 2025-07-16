#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 != 0)
            {
                cout << "#";
            }
            if (i % 2 == 0)
            {
                if (i % 4 != 0)
                {
                    if (j != m)
                    {
                        cout << ".";
                    }
                    else
                    {
                        cout << "#";
                    }
                }
                if (i % 4 == 0)
                {
                    if (j == 1)
                    {
                        cout << "#";
                    }
                    else
                    cout << ".";
                    
                }
                
            }
        }
        cout << endl;
    }
}