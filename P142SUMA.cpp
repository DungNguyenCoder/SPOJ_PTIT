#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

int b[44725];

void solution()
{
    int n;
    cin >> n;
    int k = 1;
    for(int i = 1; i < 44725; i++)
    {
        b[i] = b[i-1] + k;
        ++k;
    }
    for(int i = 1; i <= 44723; i++)
    {
        for(int j = i; j <= 44723; j++)
        {
            if(b[i] + b[j] > n)
                break;
            if(b[i] + b[j] == n)
            {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
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