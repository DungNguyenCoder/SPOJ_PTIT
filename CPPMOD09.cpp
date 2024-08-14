#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

ll c[1001][1001]; //lưu tổ hợp chập j của i
void tohop()
{
    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i)
                c[i][j] = 1;
            else
            {
                c[i][j] = c[i-1][j-1] + c[i-1][j];
                c[i][j] %= mod;
            }
        }
    }
}


inline void solution()
{
    int n,k;
    cin >> n >> k;
    cout << c[n][k] << endl;
}

int main()
{
    faster();
    int t;
    tohop();
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