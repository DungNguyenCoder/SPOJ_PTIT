#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

inline void solution()
{
    string a;
    string b;
    string c;
    cin >> a >> b >> c;
    a = a + b + c;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int n = a.size();
    for(int i = 0; i < n; i++)
        cout << a[i];
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