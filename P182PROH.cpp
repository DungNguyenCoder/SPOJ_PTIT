#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

//08:23:15PM
//0123456789

void solution()
{
    string s;
    cin >> s;
    if(s[8] == 'A')
    {
        if(s[0] == '1' && s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else if(s[8] == 'P')
    {
        if(!(s[0] == '1' && s[1] == '2'))
        {
            int i = int((s[0] - '0')*10 + s[1] - '0');
            i += 12;
            // cout << i;
            s[0] = i/10 + '0';
            s[1] = i%10 + '0';
        }
    }
    s.erase(s.begin()+8);
    s.erase(s.begin()+8);
    cout << s;
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