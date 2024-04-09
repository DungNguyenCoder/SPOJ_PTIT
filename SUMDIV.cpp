#include <stdio.h>
#include <math.h>

// #define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// using namespace std;
typedef long long ll;
#define TEST 1

void solution()
{
    ll n;
    scanf("%lld",&n);
    ll sum = 1 + n;
    if(n == 1)
    {
        printf("1\n");
        return;
    }
    for(ll i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
            sum += n / i;
        }
        if(i * i == n)
        {
            sum -= i;
        }
    }
    printf("%lld\n",sum);
}

int main()
{
    // faster();
    int t;
    if(TEST)
    {
        scanf("%d",&t);
    }    
    else        t = 1;
    while(t--)
    {
        solution();
    }
}