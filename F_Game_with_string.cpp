/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    op();
    string s;
    cin >> s;
    int c = 0;
    int it;
    int match = 1;
    while (match && s.size() > 0)
    {
        match = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                it = i;
                match = 1;
                c++;
                s.erase(it - 1, 2);
                // cout << c << endl;
                break;
            }
        }
        // if (match == 0 || s.size() <= 1)
        // {
        //     break;
        // }
    }
    if (c == 0)
        cout << "No";
    else if (c % 2 == 0)
        cout << "No";
    else
        cout << "Yes";
}