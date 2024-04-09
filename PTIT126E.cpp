#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

void solution()
{
    while(1)
    {
        string s;
        cin >> s;
        if(s == "#")
            break;
        int n = s.size();
        int cntY = 0, cntN = 0, cntA = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'Y')
                ++cntY;
            else if(s[i] == 'N')
                ++cntN;
            else if(s[i] == 'A')
                ++cntA;
        }
        if(cntA * 2 >= n)
        {
            cout << "need quorum\n";
        }
        else if(cntY > cntN)
            cout << "yes\n";
        else if(cntY < cntN)
            cout << "no\n";
        else if(cntY == cntN)
            cout << "tie\n";
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