#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1

int chiadu(string s)
{
    int res = 0;
    for(int i = 0; i < s.size(); i++)
        res = (res*10 + s[i] - '0') % 36;
    return res == 0;        
}

void solution()
{
    string s;
    cin >> s;
    if(chiadu(s))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
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