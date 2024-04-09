#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

int b[50];

void solution()
{
    while(1)
    {
        int n;
        cin >> n;
        if(n == 0)
            break;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < 6; j++)
            {
                int x;
                cin >> x;
                b[x] = 1;
            }
        }
        int check = 0;
        for(int i = 1; i <= 49; i++)
        {
            if(b[i] == 0)
            {
                check = 1;
            }
            else
            {
                b[i] = 0;
            }
        }
        if(check)
            cout << "No\n";
        else
            cout << "Yes\n";
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