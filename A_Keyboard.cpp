#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

string s1 = "qwertyuiop";
string s2 = "asdfghjkl;";
string s3 = "zxcvbnm,./";
int search(char find)
{
    int num;
    for (int i = 0; i < 10; i++)
    {
        if (find == s1[i])
            num = 1;
        if (find == s2[i])
            num = 2;
        if (find == s3[i])
            num = 3;
    }
    return num;
}
char first(string side, char find)
{
    int here;
    if (side == "R")
    {
        for (int i = 0; i < 10; i++)
        {
            if (s1[i] == find)
            {
                here = i;
                break;
            }
        }
        return s1[here - 1];
    }
    if (side == "L")
    {
        for (int i = 0; i < 10; i++)
        {
            if (s1[i] == find)
            {
                here = i;
                break;
            }
        }
        return s1[here + 1];
    }
}

char second(string side, char find)
{
    int here;
    if (side == "R")
    {
        for (int i = 0; i < 10; i++)
        {
            if (s2[i] == find)
            {
                here = i;
                break;
            }
        }
        return s2[here - 1];
    }
    if (side == "L")
    {
        for (int i = 0; i < 10; i++)
        {
            if (s2[i] == find)
            {
                here = i;
                break;
            }
        }
        return s2[here + 1];
    }
}

char third(string side, char find)
{
    int here;
    if (side == "R")
    {
        for (int i = 0; i < 10; i++)
        {
            if (s3[i] == find)
            {
                here = i;
                break;
            }
        }
        return s3[here - 1];
    }
    if (side == "L")
    {
        for (int i = 0; i < 10; i++)
        {
            if (s3[i] == find)
            {
                here = i;
                break;
            }
        }
        return s3[here + 1];
    }
}

int main()
{
    op();
    string a, b;
    cin >> a >> b;

    int num;
    int len = b.size();
    for (int i = 0; i < len; i++)
    {
        num = search(b[i]);
        // cout << " " << num << endl;
        if (num == 1)
        {
            cout << first(a, b[i]);
        }
        else if (num == 2)
        {
            cout << second(a, b[i]);
        }
        else if (num == 3)
        {
            cout << third(a, b[i]);
        }
    }
}