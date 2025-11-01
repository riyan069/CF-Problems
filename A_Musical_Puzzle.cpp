#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<string> music;
        for (int i = 1; i < n; i++)
        {
            string str;
            str.push_back(s[i - 1]);
            str.push_back(s[i]);
            music.insert(str);
        }
        cout << music.size() << endl;
    }
}