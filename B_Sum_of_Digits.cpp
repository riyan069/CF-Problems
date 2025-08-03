/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    typedef long long int ll;
int main()
{
    string s;
    cin >> s;
    int sum = 99;
    int count = 0;
    if (s.size() < 2)
    {
        cout << 0;
    }

    else
    {
        while (sum > 9)
        {
            sum = 0;
            for (int i = 0; i < s.size(); i++)
            {
                sum += s[i] - '0';
            }
            s = to_string(sum);
            count++;
        }
        cout << count;
    }
}