#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int t = 1;
    while(1)
    {
        string a,b;
        cin >> a >> b;
        if(a == "END" && b == "END")
            break;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a == b)
        {
            cout << "Case " << t << ": same" << "\n";
        }
        else
            cout << "Case " << t << ": different" << "\n";
        ++t;
    }
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