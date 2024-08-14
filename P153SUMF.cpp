#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> se;
    for(int i = 0; i < n; i++)
    {
        if(isupper(s[i]))
            s[i] = tolower(s[i]);
    }
    for(int i = 0; i < n; i++)
    {
        se.insert(s[i]);
    }
    if(se.size() == 26 && s.size() >= se.size())
        cout << "YES";
    else
        cout << "NO";
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