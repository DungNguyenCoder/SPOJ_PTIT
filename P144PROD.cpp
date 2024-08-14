#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int t = 1;
    while(1)
    {
        int n;
        cin >> n;
        if(n == 0)
            break;
        vector<string> v;
        int len = 0;
        for(int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            len = max(len,(int)x.size());
            v.push_back(x);
        }
        for(int i = 0; i < n; i++)
        {
            while(v[i].size() != len)
                v[i] = '0' + v[i];
        }
        sort(v.begin(),v.end());
        // for(int i = 0; i < n; i++)
        //     cout << v[i] << endl;
        string nho = v[0];
        string lon = v[n-1];
        while(nho[0] == '0')
            nho.erase(nho.begin());
        while(lon[0] == '0')
            lon.erase(lon.begin());
        if(nho != lon)
            cout << "Case " << t << ": " << nho << " " << lon << "\n";
        else
        {
            cout << "Case " << t << ": ";
            cout << "There is a row of trees having equal height.\n";
        }
        ++t;
    }
}

int main()
{
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}