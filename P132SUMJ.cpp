#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

int a[20], n;
int check[20];
int k;
vector<int> v;

void solu()
{
    int ans = 0;
    for(int i = 1; i <= n; i++)
        ans = ans*10 + a[i];
    v.push_back(ans);
}

void sinh(int i)
{
    for(int j = 0; j <= n; j++)
    {
        if(!check[j])
        {
            check[j] = 1;
            a[i] = j;
            if(i == n)
            {
                solu();
            }
            else
                sinh(i+1);
            check[j] = 0;
        }
    }
}

int chuso(int n)
{
    int cnt = 0;
    while(n)
    {
        ++cnt;
        n /= 10;
    }
    return cnt;
}

inline void solution()
{
    cin >> k;
    n = chuso(k);
    sinh(1);
    int leng = v.size();
    for(int i = 0; i < n; i++)
    {
        // if(v[i] > k)
        // {
        //     cout << v[i];
        //     break;
        // }
        cout << v[i] << " ";
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