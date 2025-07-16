#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "I ";
        if (i == 1)
        {
            cout << "hate ";
        }
        else
        {
            if (i %  2 == 0)
            {
                cout << "love ";
            }

            if (i % 2 != 0)
            {
                cout << "hate ";
            }
        }

        if (i != n)
        {
            cout << "that ";
        }
    }
    cout << "it";
}