/*Author G.M. Shahariyar Riyan*/
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
using ll = long long;
#define precision(x) fixed << setprecision(x)
const int NNN = 1e7 + 5;
int arr[NNN];
const int INF = 1e9 + 7;
const int N_INF = -1e9 - 10;
const long long LINF = 1e18;
const long long N_LINF = -1e18;
const int MOD = 1e9 + 7;
 
string single(char q, string there)
{
    char a = q;
    string here = there;
    if (a == '0')
    {
        here = "zero";
    }
    else if (a == '1')
    {
        here = "one";
    }
    else if (a == '2')
    {
        here = "two";
    }
    else if (a == '3')
    {
        here = "three";
    }
    else if (a == '4')
    {
        here = "four";
    }
    else if (a == '5')
    {
        here = "five";
    }
    else if (a == '6')
    {
        here = "six";
    }
    else if (a == '7')
    {
        here = "seven";
    }
    else if (a == '8')
    {
        here = "eight";
    }
    else if (a == '9')
    {
        here = "nine";
    }
    return here;
}
 
string doub(char q, string there)
{
    char a = q;
    string here = there;
 
    if (a == '2')
    {
        here = "twenty-";
    }
    else if (a == '3')
    {
        here = "thirty-";
    }
    else if (a == '4')
    {
        here = "forty-";
    }
    else if (a == '5')
    {
        here = "fifty-";
    }
    else if (a == '6')
    {
        here = "sixty-";
    }
    else if (a == '7')
    {
        here = "seventy-";
    }
    else if (a == '8')
    {
        here = "eighty-";
    }
    else if (a == '9')
    {
        here = "ninety-";
    }
    return here;
}
int main()
{
    op();
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
 
    string s;
    cin >> s;
 
    string build;
    string make;
    int len = s.length();
    if (len == 1)
    {
 
        cout << single(s[0], build) << endl;
    }
    else
    {
        if (s == "10")
        {
            build = "ten";
            cout << build << endl;
        }
        else if (s == "11")
        {
            build = "eleven";
            cout << build << endl;
        }
        else if (s == "12")
        {
            build = "twelve";
            cout << build << endl;
        }
        else if (s == "13")
        {
            build = "thirteen";
            cout << build << endl;
        }
        else if (s == "15")
        {
            build = "fifteen";
            cout << build << endl;
        }
        else if (s[0] == '1' && s[0] != 0)
        {
            make = single(s[1], build);
            build = make;
            int len2 = build.length();
            if (build[len2 - 1] == 't')
            {
                build = build + "een";
            }
            else
            {
                build = build + "teen";
            }
            cout << build << endl;
        }
        else
        {
            make = doub(s[0], build);
            if (s[1] == '0')
            {
                for (int i = 0; i < make.length() -1; i++)
                {
                    
                        cout << make[i];
                    
                }
                cout << endl;
            }
            else
            {
                cout << make;
                string nxt = single(s[1], build);
                cout << nxt << endl;
            }
        }
    }
 
    return 0;
}
