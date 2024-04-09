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
    int check = 1;
    for(int i = 0; i < n; i++)
    {
        if(s[i] != '1')
        {
            check = 0;
            break;
        }
    }
    if(!check)
    {
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                s.erase(i,1);
                break;
            }
        }
        cout << s;
    }
    else
    {
        s.pop_back();
        cout << s;
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