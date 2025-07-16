#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    op();
    vector<int>v;
    int n = 4;
    while (n--)
    {
        int x;
        cin>> x;
        v.push_back(x);
    }
    string s;
    cin>> s;
    int sum = 0;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        int num = s[i] - '0';
        sum += v[num -1];
    }
    cout << sum  ;
    

    

    
}