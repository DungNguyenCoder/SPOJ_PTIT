#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if(t == 1)
        {
            cout << v.size() << endl;
        }
        else if(t == 2)
        {
            if(v.size())
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else if(t == 3)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(t == 4)
        {
            if(v.size())
                v.erase(v.begin()+0);
        }
        else if(t == 5)
        {
            if(v.size())
                cout << v[0] << endl;
            else
                cout << -1 << endl;
        }
        else if(t == 6)
        {
            if(v.size())
                cout << v[v.size()-1] << endl;
            else
                cout << -1 << endl;
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