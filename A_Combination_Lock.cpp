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
    string give, lock;
    cin >> give >> lock;
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        int forright = give[i] - '0';
        int forleft = give[i] - '0';
        int checkL = lock[i] - '0';
        int checkR = lock[i] - '0';
        int left = 0, right = 0;
        for (int j = 0; j < 10; j++)
        {
            if (forright != checkR)
            {
                forright++;
                if (forright == 10)
                {
                    forright = 0;
                }

                right++;
                if (forright == checkR)
                {
                    break;
                }
            }
        }

        for (int j = 0; j < 10; j++)
        {
            if (forleft != checkL)
            {
                forleft--;
                if (forleft == -1)
                {
                    forleft = 9;
                }
                left++;
                if (forleft == checkL)
                {
                    break;
                }
            }
        }

        int mini = min(right, left);
        count = count + mini;
    }
    cout << count;
}
