/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    typedef long long int ll;
int main()
{
    string a, b;
    cin >> a >> b;
    int x = 0, y = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != '0')
        {
            x = (x * 10) + a[i] - '0';
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] != '0')
        {
            y = (y * 10) + b[i] - '0';
        }
    }
    int nsum = x + y;
    int sum = stoi(a) + stoi(b);
    string chng = to_string(sum);
    sum = 0;
    for (int i = 0; i < chng.size(); i++)
    {
        if (chng[i] != '0')
        {
            sum = (sum * 10) + chng[i] - '0';
        }
    }
    if (sum == nsum)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}