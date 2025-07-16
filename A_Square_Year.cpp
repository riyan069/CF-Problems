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
        string s;
        cin >> s;
        int base;
        base = stoi(s);

        if (base == 1)
        {
            cout << 0 << " " << 1 << endl;
        }
        else
        {
            int first, second;
            double squa = sqrt(base);

            int sq = floor(squa);
            if (squa - sq == 0)
            {
                int half = sq / 2;
                int c = 0;
                for (int i = half; i > 0; i--)
                {
                    first = sq - i;
                    second = i;

                    if ((first + second) * (first + second) == base)
                    {
                        c++;
                        break;
                    }
                }

                if (c == 1)
                {
                    cout << first << " " << second << endl;
                }
                else
                    cout << -1 << endl;
            }
            else cout << -1 << endl;
        }
    }
}