#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    int x,y,z;
    cin >> x >> y >> z;
    int sum = 0;
    for(int i = 0; i <= x; i++)
    {
        for(int j = 0; j <= y; j++)
        {
            for(int k = 0; k <= z; k++)
            {
                if(j-i == 1 && k-j == 1 && i+j+k > sum)
                    sum = i+j+k;
            }
        }
    }
    cout << sum;
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