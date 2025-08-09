/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        deque<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int move = 1;
        int alice_total = v.front();
        int alice = v.front();
        v.pop_front();

        int bob_total = 0;
        int bob = 0;

        int turn = 0;
        while (v.size() > 0)
        {
            if (turn == 0)
            {
                while (v.size() > 0 && bob <= alice)
                {
                    bob += v[v.size() - 1];
                    v.pop_back();
                }
                turn = 1;
                bob_total += bob;
                alice = 0;
                move++;
            }
            else
            {
                while (v.size() > 0 && alice <= bob)
                {
                    alice += v[0];
                    v.pop_front();
                }
                turn = 0;
                alice_total += alice;
                bob = 0;
                move++;
            }
        }
        cout << move << " " << alice_total << " " << bob_total << endl;
    }
}