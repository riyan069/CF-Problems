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
    int mishka = 0, chris = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            mishka++;
        else if (b > a)
            chris++;
    }
    if (mishka > chris)
    {
        cout << "Mishka";
    }
    else if (chris > mishka)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
}