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
    int i = 1;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int maxi = max(a, b);
        int mini = min(a, b);
        int first, scnd;
        if (a != b)
        {
            first = (maxi - mini) * 4 + 6 + 5;
        }
        else
            first = 5 + 6;

        scnd = a * 4 + 3 + 5;
        cout << "Case " << i << ": " << first + scnd << endl;
        i++;
    }
}