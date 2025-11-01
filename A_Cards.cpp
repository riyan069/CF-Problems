#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int t;
    string s;
    cin >> t >> s;
    int z = 0, n = 0;
    for (int i = 0; i < t; i++)
    {
        if (s[i] == 'z')
            z++;
        if (s[i] == 'n')
            n++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << '1' << " ";
    }
    for (int i = 0; i < z; i++)
    {
        cout << '0' << " ";
    }
    
    
}