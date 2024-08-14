#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

string tich(string s1, string s2)
{
    int len1 = s1.size();
    int len2 = s2.size();
    int len = len1 + len2;
    vector<int> a,b;
    for(int i = 0; i < len1; i++)
        a.push_back(s1[i] - '0');
    for(int i = 0; i < len2; i++)
        b.push_back(s2[i] - '0');
    vector<vector<int>> res(len2);
    int index = 0;
    for(int i = len2 - 1; i >= 0; i--)
    {
        int t = 0;
        while(t < index)
        {
            res[index].push_back(0);
            t++;
        }
        int nho = 0;
        int so = 0;
        for(int j = len1 - 1;j >= 0; j--)
        {
            so = a[j] * b[i] + nho;
            res[index].push_back(so%10);
            nho = so/10;
        }
        if(nho > 0) res[index].push_back(nho);
        while(res[index].size() < len)
            res[index].push_back(0);
        reverse(res[index].begin(),res[index].end());
        index++;
    }
    int nho = 0;
    string ans = "";
    for(int j = res[0].size()-1; j >= 0; j--)
    {
        int so = nho;
        for(int i = 0; i < res.size(); i++)
        {
            so += res[i][j];
        }
        ans = char(so%10 + '0') + ans;
        nho = so/10;
    }
    if(nho > 0) ans = char(nho + '0') + ans;
    while(ans[0] == '0')
        ans.erase(ans.begin());
    return ans;
}

inline void solution()
{
    string x,y;
    cin >> x >> y;
    cout << tich(x,y) << "\n";
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