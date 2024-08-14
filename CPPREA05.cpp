#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

inline void solution()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        a.push_back(x);
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    int cnt = 0;
    int i = 0, j = 0;
    while(cnt != n)
    {
        if(cnt % 2)
        {
            cout << a[i] << " ";
            ++i;
        }
        else if(cnt % 2 == 0)
        {
            cout << b[j] << " ";
            ++j;
        }
        ++cnt;
    }
    cout << "\n";
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