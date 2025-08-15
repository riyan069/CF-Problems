/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (a == 0 && s.substr(i, 2) == "AB")
        {
            a = 1;
            i++;
        }
        else if (a == 1 && s.substr(i, 2) == "BA")
        {
            b = 1;
            break;
        }
    }

    int c = 0, d = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (c == 0 && s.substr(i, 2) == "BA")
        {
            c = 1;
            i++;
        }
        else if (c == 1 && s.substr(i, 2) == "AB")
        {
            d = 1;
            break;
        }
    }

    if ((a == 1 && b == 1) || (c = 1 && d == 1))
        cout << "YES";
    else
        cout <<"NO";
        
}
