#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    int a,b,c;
    cin>> a >> b >> c;

    int op1 = a + b + c;
    int op2 = 2*a + 2*b;
    int op3 = 2*a + 2*c;
    int op4 = 2*b + 2*c;
    int first = min(op1,op2);
    int second = min(op3,op4);
    cout << min(first,second);
}