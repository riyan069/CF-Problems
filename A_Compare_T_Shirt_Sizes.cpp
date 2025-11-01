#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int len1 = a.length();
        int len2 = b.length();
        int x1 = 0, x2 = 0;
        for (int i = 0; i < len1; i++)
        {
            if (a[i] == 'X')
                x1++;
        }
        for (int i = 0; i < len2; i++)
        {
            if (b[i] == 'X')
                x2++;
        }
        if (a == b)
        {
            cout << "=" << endl;
        }
        else if (a[len1 - 1] == b[len2 - 1])
        {
            if (a[len1 - 1] == 'S')
            {
                if (x1 > x2)
                    cout << "<" << endl;
                else
                    cout << ">" << endl;
            }
            else
            {
                if (x1 > x2)
                    cout << ">" << endl;
                else
                    cout << "<" << endl;
            }
        }
        else
        {
            if (a[len1 - 1] > b[len2 - 1])
            {
                cout << "<" << endl;
            }
            else
                cout << ">" << endl;
        }
    }
}