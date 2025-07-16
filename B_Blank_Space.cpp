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
        int x;
        cin >> x;
        int len = x;
        vector<int> v;
        while (x--)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        vector<int> gap;
        int c = 0;
        for (int i = 0; i < len; i++)
        {
            if (v[i] == 0)
            {
                c++;
                gap.push_back(c);
            }
            else
            {
                c = 0;
            }
            //  cout << "  " << c << endl;
        }
        int max = 0;
        if (!gap.empty())
        max = gap[0];
            for (int i = 1; i < gap.size(); i++)
            {
                if (max < gap[i])
                {
                    max = gap[i];
                }
            }
        cout << max << endl;
        v.clear();
        gap.clear();

        
    }
}