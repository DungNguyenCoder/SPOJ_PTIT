#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define TEST 0
int mod = 1000000007;

inline void solution()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // int x;
    for(int i = 0; i < n; i++)
    {
        // cin >> x;
        // v.push_back(x);
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    // for(int x : v)
    //     cout << x << " ";
    int cnt = 0;
    while(v.size())
    {
        int max = -1;
        int tmp = 0;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] > max)
            {
                max = v[i];
                ++tmp;
                v.erase(v.begin()+i);
                --i;
            }
        }
        cnt += tmp - 1;
    }
    cout << cnt;
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