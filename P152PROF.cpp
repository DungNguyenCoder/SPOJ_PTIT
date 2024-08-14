#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

string lon(int m, int s)
{
    if(ceil((1.0*s)/9) > m || s == 0)
        return "-1";
    string ans = "";
    if(s >= 10)
    {
        int tmp = s;
        int nine = tmp/9;
        int du = tmp%9;
        while(nine--)
            ans.push_back('9');
        ans.push_back(du + '0');
    }
    else
    {
        ans.push_back(s + '0');
    }
    while(ans.size() < m)
        ans.push_back('0');
    return ans;
}

string be(int m, int s)
{
    if(ceil((1.0*s)/9) > m || s == 0)
        return "-1";
    string nho = lon(m,s);
    reverse(nho.begin(), nho.end());
    if(nho[0] == '0')
    {
        nho[0] = '1';
        int n = nho.size();
        for(int i = 1; i < n; i++)
        {
            if(nho[i] != '0')
            {
                nho[i]--;
                break;
            }
        }
    }
    return nho;
}

inline void solution()
{
    int m, s;
    cin >> m >> s;
    if(m == 1 && s == 0)
    {
        cout << "0 0";
        return;
    }
    cout << be(m,s) << " " << lon(m,s);
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