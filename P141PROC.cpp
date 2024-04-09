#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    cin.ignore();
    int x = 0;
    vector<string> v;
    for(int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < n; i++)
    {
        if(v[i] == "++X" || v[i] == "X++")
            ++x;
        else if(v[i] == "--X" || v[i] == "X--")
            --x;
    }
    cout << x;
    // if(v[n - 1] == "X++" || v[n - 1] == "X--")
    //     cout << x;
    // else if(v[n - 1] == "--X")
    //     cout << x - 1;
    // else if(v[n - 1] == "++X")
    //     cout << x + 1;
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