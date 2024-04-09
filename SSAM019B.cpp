#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 1000000
int CHECK = 1;

void solution()
{
    int n;
    scanf("%d",&n);
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }
    int check = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        
            if(a[j] == a[i])
            {
                printf("%lld\n",a[i]);
                check = 1;
                break;
            }
        
        if(check)
            break;
    }
    if(check == 0)
        printf("NO\n");
}

int main()
{
    int t;
    if(CHECK)
    {
        scanf("%d",&t);
        // getchar();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}