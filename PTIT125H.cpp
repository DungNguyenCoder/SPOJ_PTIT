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
    string s;
    cin >> s;
    int cnt = n + 1;
    int check = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'L')
            ++check;
        if(check == 2)
        {
            check = 0;
            cnt--;
        }
    }
    cout << cnt;
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