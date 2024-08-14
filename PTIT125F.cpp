#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    int minlen = mx, minxuong = mx;
    int sumlen = 0, sumxuong = 0;
    for(int i = 1; i <= n; i++)
    {
        int len,xuong;
        cin >> len >> xuong;
        sumlen += len;
        sumxuong += xuong;
        minlen = min(len,minlen);
        minxuong = min(xuong,minxuong);
    }
    sumlen += minxuong;
    sumxuong += minlen;
    if(sumlen < sumxuong)
        cout << sumxuong;
    else
        cout << sumlen;
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