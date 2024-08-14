#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1

void solution()
{
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(),r.end());
    int n = s.size();
    for(int i = 0; i < n/2; i++)
    {
        if(abs(s[i] - s[i+1]) != abs(r[i] - r[i+1]))
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}