#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

void solution()
{
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        ++cnt;
        if(cnt == 3)
        {
            if(i != s.size() - 1)
            {            
                s.insert(i + 1,",");
                cnt = 0;
                ++i;
            }        
        }
    }
    reverse(s.begin(),s.end());
    cout << s;
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