#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

char a[50][50];
char win[4];
int n;

int ngoaiban(int i, int j)
{
    if(i < 1 || i > n)  return 1;
    if(j < 1 || j > n)  return 1;
    return 0;
}

int kt(char x)
{
    return win[1] == win[2] && win[2] == win[3] && win[3] == x;
}

int ngang(int i , int j, char x)
{
    if(ngoaiban(i,j+2))   return 0;
    else
    {
        win[1] = a[i][j];
        win[2] = a[i][j+1];
        win[3] = a[i][j+2];
    }
    if(kt(x))   return 1;
    return 0;
}

int doc(int i , int j, char x)
{
    if(ngoaiban(i+2,j))   return 0;
    else
    {
        win[1] = a[i][j];
        win[2] = a[i+1][j];
        win[3] = a[i+2][j];
    }
    if(kt(x))   return 1;
    return 0;
}

int cheo1(int i , int j, char x)
{
    if(ngoaiban(i+2,j+2))   return 0;
    else
    {
        win[1] = a[i][j];
        win[2] = a[i+1][j+1];
        win[3] = a[i+2][j+2];
    }
    if(kt(x))   return 1;
    return 0;
}

int cheo2(int i , int j, char x)
{
    if(ngoaiban(i+2,j-2))   return 0;
    else
    {
        win[1] = a[i][j];
        win[2] = a[i+1][j-1];
        win[3] = a[i+2][j-2];
    }
    if(kt(x))   return 1;
    return 0;
}

inline void solution()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            char x = a[i][j];
            if(x != '.' && (ngang(i,j,x) || doc(i,j,x) || cheo1(i,j,x) || cheo2(i,j,x)))
            {
                cout << x;
                return;
            }
        }
    }
    cout << "ongoing";
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