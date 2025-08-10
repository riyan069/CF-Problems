/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    int arr[5][5];
    int r, c;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    // cout << r << " " << c << endl;
    if (r == 2)
    {
        if (c <= 2)
            cout << 2 - c;
        else if (c <= 4)
            cout << c - 2;

    }
    else if (c == 2)
    {
        if (r <= 2)
            cout << 2 - r;
        else if (r <= 4)
            cout << r - 2;

    }
    else
    {

        if (r <= 2 && c <= 2)
            cout << (2 - r) + (2 - c);
        else if (r <= 4 && c <= 4 && r>2 && c > 2)
            cout << (r - 2) + (c - 2);
        else if (r <= 4 && c <= 2)
            cout << (r - 2) + (2 - c);
        else if (r <= 2 && c <= 4)
            cout << (2 - r) + (c - 2);
       
    }
}