/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    int n, m;
    cin >> n >> m;
    map<string, string> x;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        if (a.size() <= b.size())
        {
            x[a] = a;
        }
        else
            x[a] = b;
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        cout <<x[s] << " ";
    }
    
}