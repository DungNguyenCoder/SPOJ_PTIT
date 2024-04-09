#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

ll nt[1005];
ll cnt[1005];
int x = 0;
void sang(int n,int k)
{
    for(int i = 2; i <= n; i++)
    {
        if(nt[i] == 0)
        {
            cnt[x++] = i;
            for(int j = i * i; j <= n; j += i)
            {
                if(nt[j] == 0)
                    cnt[x++] = j;
            }
            for(int j = i * i; j <= n; j += i)
                nt[j] = 1;
        }
    }
    // for(int i = 0; i <= n; i++)
    //     cout << cnt[i] << " ";
    // cout << endl;
    cout << cnt[k - 1];
}

void solution()
{
    int n,k;
    cin >> n >> k;
    sang(n,k);
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