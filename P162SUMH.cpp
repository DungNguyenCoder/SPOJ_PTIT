#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

int cd(char x)
{
    if(x >= 'A' && x <= 'C')
        return 2+1;
    else if(x >= 'D' && x <= 'F')
        return 3+1;
    else if(x >= 'G' && x <= 'I')
        return 4+1;
    else if(x >= 'J' && x <= 'L')
        return 5+1;
    else if(x >= 'M' && x <= 'O')
        return 6+1;
    else if(x >= 'P' && x <= 'S')
        return 7+1;
    else if(x >= 'T' && x <= 'V')
        return 8+1;
    else if(x >= 'W' && x <= 'Z')
        return 9+1;
    else
        return 10+1;   
}

void solution()
{
    string s;
    cin >> s;
    int sum = 0;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        sum += cd(s[i]);
    }
    cout << sum;
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