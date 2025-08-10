/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    int n;
    cin >> n;
    int sum = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "Icosahedron")
        {
            sum += 20;
        }
        else if (s == "Tetrahedron")
        {
            sum += 4;
        }
        else if (s == "Cube")
        {
            sum += 6;
        }
        else if (s == "Octahedron")
        {
            sum += 8;
        }
        else if (s == "Dodecahedron")
        {
            sum += 12;
        }
    }
    cout << sum;
}