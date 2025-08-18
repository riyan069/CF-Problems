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
    int t;
    cin >> t;
    while (t--)
    {
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;
        int maxi = max(h, c);
        int profit = 0;
        int burg = floor(b / 2);
        int maxi2;
        int remain = 0;
        if (h == maxi)
        {
            maxi2 = max(burg, p);
            if (maxi2 == burg)
            {
                remain = burg - p;
                profit = p * h;
            }
            else
            {
                profit = burg * h;
            }
        }
        else
        {
            maxi2 = max(burg, f);
            if (maxi2 == burg)
            {
                remain = burg - f;
                profit = f * c;
            }
            else
            {
                profit = burg * c;
            }
        }
        if (remain == 0)
        {
            cout << profit << endl;
        }
        else
        {
            if (h == maxi)
            {
                maxi2 = max(remain, f);
                if (maxi2 == remain)
                {
                    profit = profit + (f * c);
                }
                else
                {
                    profit = profit + (remain * c);
                }
            }
            else
            {
                maxi2 = max(remain, p);
                if (maxi2 == remain)
                {
                    profit = profit + (p * h);
                }
                else
                {
                    profit = profit + (remain * h);
                }
            }
            cout << profit << endl;
        }
        
    }
}