#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

string tru(string a, string b)
{
    string res = "";
    int nho = 0;
    while(a.size() < b.size())  a = "0" + a;
    while(b.size() < a.size())  b = "0" + b;
    if(a<b)
    {
        string c = a;
        a = b;
        b = c;
    }
    int len = a.size() - 1;
    for(int i = len; i >= 0; i--)
    {
        int so = (a[i] - '0') - (b[i] - '0') - nho;
        if(so < 0)
        {
            res = char(so+10 + '0') + res;
            nho = 1;
        }
        else
        {
            res = char(so+'0') + res;
            nho = 0;
        }
    }
    return res;
}

inline void solution()
{
    string x,y;
    cin >> x >> y;
    cout << tru(x,y) << "\n";
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