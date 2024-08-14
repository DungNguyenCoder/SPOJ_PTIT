#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 1

int x[10];
int check[10];
int n;

void output()
{
    for(int i = 1; i <= n; i++)
        cout << x[i];
    cout << " ";
}

void sinh(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!check[j])
        {
            check[j] = 1;
            x[i] = j;
            if(i == n)
                output();
            else
                sinh(i+1);
            check[j] = 0;
        }
    }
}

void solution()
{
    cin >> n;
    sinh(1);
    cout << endl;
    for(int i = 0; i < 10; i++)
    {
        x[i] = 0;
        check[i] = 0;
    }
}

int main()
{
    faster();
    int t;
    if(TEST)    cin >> t;
    else        t = 1;
    while(t--)
    {
        solution();
    }
}