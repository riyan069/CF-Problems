#include <bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    string c ,d;
    cin >> c >> d;

    int s1 = c.size();
    int s2 = d.size();
    int high = s1;
    if(s2>s1) high = s2;

    for (int i = 0; i < high; i++)
    {
        if(c[i] == d[i]) cout << 0;
        else cout << 1;
    }
    
    
}