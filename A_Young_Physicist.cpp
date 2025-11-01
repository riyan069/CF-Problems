#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    ;                             \
    cout.tie(0);
int main()
{
    int t;
    cin >> t;
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int n;
            cin >> n;
            if (j == 0)
                x += n;
            else if (j == 1)
                y += n;
            else
                z += n;
        }
    }
    if(x==0 && y == 0 && z == 0)cout << "YES"<<endl;
    else cout << "NO"<<endl;
}