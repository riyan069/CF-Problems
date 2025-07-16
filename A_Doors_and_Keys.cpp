#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int door = 0;
        int r, R, g, G, b, B;
        for (int i = 0; i < 6; i++)
        {
            if (s[i] == 'r')
                r = i;
            if (s[i] == 'R')
                R = i;
        }
        if (r < R)
            door++;
        for (int i = 0; i < 6; i++)
        {
            if (s[i] == 'b')
                b = i;
            if (s[i] == 'B')
                B = i;
        }
        if (b < B)
            door++;
        for (int i = 0; i < 6; i++)
        {
            if (s[i] == 'g')
                g = i;
            if (s[i] == 'G')
                G = i;
        }
        if (g < G)
            door++;
        
        if (door == 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}