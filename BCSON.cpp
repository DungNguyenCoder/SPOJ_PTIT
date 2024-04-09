#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    int n,m;
    cin >> n >> m;
    ll a[n + 2][m + 2];
    for(int i = 0; i < n + 2; i++)
    {
        for(int j = 0; j < m + 2; j++)
        {
            if(i == 0 || i == n + 1 || j == 0 || j == m + 1)
                a[i][j] = 0;
            else
                cin >> a[i][j];
        }
    }
    ll sum = n * m;
    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < m + 1; j++)
        {
            if(a[i][j] > a[i-1][j]) sum += (a[i][j]-a[i-1][j]);   
            if(a[i][j] > a[i+1][j]) sum += (a[i][j]-a[i+1][j]); 
            if(a[i][j] > a[i][j-1]) sum += (a[i][j]-a[i][j-1]);   
            if(a[i][j] > a[i][j+1]) sum += (a[i][j]-a[i][j+1]);         
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