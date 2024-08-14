#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    string a;
    while (cin >> a)
    {
        int s = 0, b[26] = {};
        for (int i = 0; i < a.size(); i++)
            b[a[i] - 'a']++;
        for (int i = 0; i < 26; i++)
            if (b[i] % 2 == 1)
                s++;
        if (s % 2 == 1 || s == 0)
            cout << "First\n";
        else
            cout << "Second\n";
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