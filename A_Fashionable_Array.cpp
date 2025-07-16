#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int maxi(vector<int> v, int len)
{
    int max = v[0];
    for (int i = 1; i < len; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    return max;
}

int mini(vector<int> v, int len)
{
    int min = v[0];
    for (int i = 1; i < len; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    return min;
}

int suma(int max, int min)
{
    return max + min;
}
int remi(int sum)
{
    return sum % 2;
}

int main()
{
    op();
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        int len = x;
        for (int i = 0; i < len; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int c = 0;
        int tr = 0;

        for (int i = 0; i < x; i++)
        {
            int max = maxi(v, len);
            int min = mini(v, len);
            int sum = suma(max, min);
            int rem = remi(sum);

            if (rem == 0)
            {
                cout << c << endl;
                break;
            }
            else
            {
                
                auto min_it = min_element(v.begin(), v.end());
                v.erase(min_it);
                c++;
                len--;
                
            }
        }
        v.clear();
    }
}

           