#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

int tn(int n)
{
    int rev = 0;
    int tmp = n;
    while(n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == tmp;
}

int loai2()
{
    int cnt = 0;
    for(int i = 100000; i <= 999999; i++)
    {
        int sum = 0;
        if(tn(i))
        {
            int tmp = i;
            while(tmp)
            {
                sum += tmp % 10;
                tmp /= 10;
            }
            if(sum % 10 == 0)
                ++cnt;
        }
    }
    return cnt;
}

int loai1()
{
    int cnt = 0;
    for(int i = 100000; i <= 999999; i++)
    {
        int sum = 0;
        int check = 0;
        if(tn(i))
        {
            int tmp = i;
            while(tmp)
            {
                if(tmp % 10 == 0)
                {
                    check = 1;
                    break;
                }
                sum += tmp % 10;
                tmp /= 10;
            }
            if(sum % 10 == 0 && !check)
                ++cnt;
        }
    }
    return cnt;
}

int N = loai1();
int M = loai2();
int K = 900;

void solution()
{
    int n,m,k;
    cin >> n >> m >> k;
    // cout << N << " " << M << " " << K << endl;
    if(n > N || m > M - n || k > K - m - n)
        cout << "NO\n";
    else
        cout <<"YES\n";
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