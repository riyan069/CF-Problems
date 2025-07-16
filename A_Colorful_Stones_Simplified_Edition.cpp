#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    string s;
    string a;
    cin >> s >> a;
    int len1 = s.size();
    int len2 = a.size();

    int index = 0;
    for (int i = 0; i < len2; i++)
    {
        if (a[i] == s[index])
        {
            index++;
        }
    }
    cout << index + 1;
}