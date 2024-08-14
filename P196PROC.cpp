#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    int n;
    string r1,r2,res;
    cin >> n >> r1 >> r2;
    for(int i = 0; i < n; i++)
    {
        char x = r1[i];
        char y = r2[i];
        if(x == 'K' && y == 'K')
            res.push_back('B');
        else if(x == 'B' && y == 'B')
            res.push_back('G');
        else if(x == 'G' && y == 'G')
            res.push_back('K');

        else if((x == 'K' && y == 'B') || (x == 'B' && y == 'K'))
            res.push_back('B');
        else if((x == 'B' && y == 'G') || (x == 'G' && y == 'B'))
            res.push_back('G');
        else if((x == 'G' && y == 'K') || (x == 'K' && y == 'G'))
            res.push_back('K'); 
    }
    cout << res;
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