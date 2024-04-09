#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 2

inline void solution()
{
    string s;
    cin >> s;
    int k = s.size();
    for(int i = 0; i < k; i++)
    {
        if(islower(s[i]))
            s[i] = toupper(s[i]);
    }
    // for(char x : s)
    //     cout << x << " ";
    // cout << endl;
    vector<int> v;
    for(char x : s)
    {
        if(x == 'A' || x == 'B' || x == 'C')
            v.push_back(2);
        else if(x == 'D' || x == 'E' || x == 'F')
            v.push_back(3);
        else if(x == 'G' || x == 'H' || x == 'I')
            v.push_back(4);
        else if(x == 'J' || x == 'K' || x == 'L')
            v.push_back(5);
        else if(x == 'M' || x == 'N' || x == 'O')
            v.push_back(6);
        else if(x == 'P' || x == 'Q' || x == 'R' || x == 'S')
            v.push_back(7);
        else if(x == 'T' || x == 'U' || x == 'V')
            v.push_back(8);
        else if(x == 'W' || x == 'X' || x == 'Y' || x == 'Z')
            v.push_back(9);
    }
    int n = v.size();
    for(int i = 0; i < n/2; i++)
    {
        if(v[i] != v[n - 1 - i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    // for(int x : v)
    //     cout << x << " ";
    // cout << endl;
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