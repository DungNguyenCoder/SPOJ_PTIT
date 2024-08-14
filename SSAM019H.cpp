#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int MOD = 1000000007;
#define TEST 1

struct matran
{
    ll X[2][2];
    friend matran operator * (matran a, matran b)
    {
        matran c;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                c.X[i][j] = 0;
                for(int k = 0; k < 2; k++)
                {
                    c.X[i][j] += a.X[i][k] * b.X[k][j];
                    c.X[i][j] %= MOD;
                }
            }
        }
        return c;
    }
};

matran binpow(matran a, ll n)
{
    if(n == 1){
        return a;
    }
    matran tmp = binpow(a, n / 2);
    if(n % 2 == 1){
        return tmp * tmp * a;
    }
    else{
        return tmp * tmp;
    }
}

inline void solution()
{
    matran a;
    a.X[0][0] = 1; a.X[0][1] = 1;
    a.X[1][0] = 1; a.X[1][1] = 0;
    ll n;
    cin >> n;
    matran res = binpow(a, n);
    cout << res.X[0][1] << endl;
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