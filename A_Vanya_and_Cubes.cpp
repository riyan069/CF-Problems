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
    vector<int> v;
    int prev, final = 1;
    int cube = 1;
    int sum = 0;
    int c = 1;
    while (1)
    {
        if (final >= n)
        {
            break;
        }

        else
        {

            prev = final;
            v.push_back(prev);
            final = prev + (cube++);
        }
        for (auto m : v)
        {

            sum += m;
        }
        if (final > sum)
        {
            c++;
        }
    }
    cout << c;
}