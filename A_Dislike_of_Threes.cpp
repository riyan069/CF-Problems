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
    while (n--)
    {
        int c = 0;
        int x;
        cin >> x;

        // cout << len;
        for (int i = 1;; i++)
        {
            if (i % 3 != 0)
            {
                string s = to_string(i);
                int len = s.size();

                if (s[len - 1] != '3')
                {

                    c++;
                    if (c == x)
                    {
                        
                        cout << i << endl;
                        break;
                    }
                }
            }
        }
    }
}