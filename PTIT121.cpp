#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 1

void solution()
{
    int x;
    int r;
    cin >> x >> r;
    string s;
    cin >> s;
    int n = s.size();
    cout << x << " ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= r; j++)
        {
            cout << s[i];
        }
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