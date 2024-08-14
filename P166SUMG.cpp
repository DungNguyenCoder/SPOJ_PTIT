#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1

void solution()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a == 0 && (b == 0 || c == 0))
    {
        cout << "NO";
        cout << endl;
        return;
    }
    if(b == c || (int)abs(b-c)%3 == 0)
        cout << "YES";
    else
        cout << "NO";
    cout << "\n";
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