#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

string cot(int x)
{
    string tmp = "";
    char c;
    while(1)
    {
        if(x == 0)
            break;
        --x;
        c = 'A' + x%26;
        tmp = c + tmp;
        x = x/26;
    }
    return tmp;
}

void solution()
{
    char tmp;
    int r,c;
    while(1)
    {
        cin >> tmp >> r >> tmp >> c;
        if(r == 0 && c == 0)
            break;
        cout << cot(c) << r << "\n";
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