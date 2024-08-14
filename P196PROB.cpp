#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    int a[4];
    for(int i = 1; i <= 3; i++)
        cin >> a[i];
    sort(a+1,a+4);
    int min = mod;
    for(int i = a[1]; i <= a[3]; i++)
    {
        int sum = abs(a[1] - i) + abs(a[2] - i) + abs(a[3] - i);
        if(sum < min)
            min = sum;
    }
    cout << min;   
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