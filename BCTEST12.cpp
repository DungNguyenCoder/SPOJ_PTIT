#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(!(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i'))
        {
            cout << "." << s[i];
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