#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    string v[n];
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++)
    {
        string x = v[i];
        int k = x.size();
        int check = 0;
        for(int j = 0; j < k; j++)
        {
            if((x[j] - '0') % 2 == 0 && (j) % 2 == 0)
            {
                check = 1;
                break;
            }
            if((x[j] - '0') % 2 == 1 && (j) % 2 == 1)
            {
                check = 1;
                break;
            }
            else
            {
                continue;
            }
        }
        if(check)
            cout << "NO\n";
        else
            cout << "YES\n";
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