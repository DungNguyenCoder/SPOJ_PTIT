#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define TEST 0
int mod = 1000000007;

string cong(string a, string b)
{
    string res = "";
    int nho = 0;
    while(a.size() < b.size())  a = "0" + a;
    while(b.size() < a.size())  b = "0" + b;
    int len = a.size()-1;
    for(int i = len; i >= 0 ; i--)
    {
        int so = int(a[i] - '0') + int(b[i] - '0') + nho;
        res = char(so%10 + '0') + res;
        nho = so/10;
    }
    if(nho > 0)
        res = char(nho + '0') + res;
    return res;
}

string tru(string a, string b)
{
    string res = "";
    int nho = 0;
    while(a.size() < b.size())  a = "0" + a;
    while(b.size() < a.size())  b = "0" + b;
    int ok = 0;
    if(a<b)
    {
        a.swap(b);
        ok = 1;
    }
    int len = a.size()-1;
    for(int i = len; i >= 0 ; i--)
    {
        int so = int(a[i] - '0') - int(b[i] - '0') - nho;
        if(so < 0)
        {
            res = char(so+10 + '0') + res;
            nho = 1;
        }
        else
            res = char(so + '0') + res;
    }
    while(res[0] == '0')
        res.erase(res.begin());
    if(ok)  res = '-' + res;
    return res;
}

inline void solution()
{
    string a,b,c;
    cin >> a >> b >> c;
    string ans;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '?')
        {
            ans = tru(c,b);
            for(int i = 0; i < a.size(); i++)
            {
                if(a[i] == '?')
                {
                    cout << ans[i];
                    return;
                }
            }
        }
    }
    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] == '?')
        {
            ans = tru(c,a);
            for(int i = 0; i < b.size(); i++)
            {
                if(b[i] == '?')
                {
                    cout << ans[i];
                    return;
                }
            }
        }
    }
    for(int i = 0; i < b.size(); i++)
    {
        if(c[i] == '?')
        {
            ans = cong(a,b);
            for(int i = 0; i < c.size(); i++)
            {
                if(c[i] == '?')
                {
                    cout << ans[i];
                    return;
                }
            }
        }
    }
}

int main()
{
    faster();
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }    
    else        t = 1;
    while(t--)
    {
        solution();
    }
}