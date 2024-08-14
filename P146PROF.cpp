#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

int check(int a, int b, int c)
{
    if(a + b > c && b + c > a && c + a > b)
        return 1;
    else if(a + b == c || b + c == a || c + a == b)
        return 0;
    else
        return -1;
}

void solution()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(check(a,b,c) == 1 || check(a,b,d) == 1 || check(a,c,d) == 1 || check(b,c,d) == 1)
        cout << "TRIANGLE";
    else if(check(a,b,c) == 0 || check(a,b,d) == 0 || check(a,c,d) == 0 || check(b,c,d) == 0)
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
}

int main()
{
    int t;
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