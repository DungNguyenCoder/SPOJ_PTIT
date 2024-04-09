#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

bool cmp(string a, string b)
{
    while(a.size() < 102)   a = "0" + a;
    while(b.size() < 102)   b = "0" + b;
    return a < b;
}

inline void solution()
{
    int n;
    cin >> n;
    vector<string> v;
    vector<string> num;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for(int i = 0; i < n; i++)
    {
        int leng = v[i].size();
        string x = v[i];
        for(int j = 0; j < leng; j++)
        {
            string tmp;
            while(x[j] >= '0' && x[j] <= '9')
            {
                tmp.push_back(x[j]);
                ++j;
            }
            // cout << tmp << "\n";
            for(int k = 0; k < tmp.size();)
            {
                if(tmp[k] != '0')
                    break;
                while(tmp[k] == '0')
                {
                    tmp.erase(0,1);
                    if(tmp.size() == 0)
                        num.push_back("0");
                }
            }
            // if(tmp.size() == 0)
            //     num.push_back("0");
            // else
            if(tmp.empty() != 1)
                num.push_back(tmp);
        }
    }
    sort(num.begin(), num.end(), cmp);
    for(auto x : num)
        cout << x << "\n";
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