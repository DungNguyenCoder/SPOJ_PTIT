#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

inline void solution()
{
    int s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    int a,b,c;
    a = sqrt((s1*s3)/s2);
    b = sqrt((s1*s2)/s3);
    c = sqrt((s2*s3)/s1);
    int ans = (a+b)*2 + (b+c)*2 +(a+c)*2;
    cout << ans << endl;
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