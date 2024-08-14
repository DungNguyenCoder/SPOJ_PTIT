#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1

int snt[mx+5];
int nt[mx+5];
int x = 1;

void sang()
{
    snt[0] = snt[1] = 1;
    for(int i = 2; i <= sqrt(mx); i++)
        if(!snt[i])
            for(int j = i*i; j <= mx; j += i)
                snt[j] = 1;
    for(int i = 2; i <= mx; i++)
        if(!snt[i])
            nt[x++] = i;
    --x;
}

void solution()
{
    int l,r;
    cin >> l >> r;
    int duoi;
    int tren;
    for(int i = 1; i <= x; i++)
    {
        if(nt[i] >= l)
        {
            duoi = i;
            break;
        }
    }
    for(int i = 1; i <= x; i++)
    {
        if(nt[i] <= r)
        {
            tren = i;
        }
        if(nt[i] > r)
            break;
    }
    int cnt = 0;
    for(int i = duoi; i < tren; i++)
    {
        for(int j = i+1; j <= tren; j++)
        {
            if(nt[j] - nt[i] == 6)
                ++cnt;
            else if(nt[j] - nt[i] > 6)
                break;
            else if(nt[j] - nt[i] < 6)
                continue;
        }
    }
    // cout << duoi << " " << tren << endl;
    cout << cnt << "\n";
    // cout << endl;
    // for(int i = 0; i <= 20; i++)
    // {
    //     cout << nt[i] << " ";
    // }
    // cout << endl;
}

int main()
{
    int t;
    sang();
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}