#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    string s = "";
    for(int i = 1; i <= 1000; i++)
    {
        if(i < 10)
        {
            char a = i + '0';
            s.push_back(a);
        }
        else if(i < 100)
        {
            char a = i/10 + '0';
            char b = i%10 + '0';
            s.push_back(a);
            s.push_back(b);
        }
        else if(i < 1000)
        {
            char a = i/100 +'0';
            char b = (i%100)/10 + '0';
            char c = (i%100)%10 + '0';
            s.push_back(a);
            s.push_back(b);
            s.push_back(c);
        }
        else
        {
            s.push_back('1');
            s.push_back('0');
            s.push_back('0');
            s.push_back('0');
        }
    }
    int n;
    cin >> n;
    cout << s[n-1];
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