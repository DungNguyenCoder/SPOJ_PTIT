#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0
/*
4 3 2 1
3 4 2 1
3 2 4 1
3 4 2 1

3 4 2 1

*/
void solution()
{
    int n;
    cin >> n;
    cout << n << " ";
    for(int i = 1; i < n; i++)
        cout << i << " ";
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