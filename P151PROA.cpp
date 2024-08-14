#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1

void solution()
{
    int n;
    string a;
    cin >> n >> a;
    string b = "";
    for(int i = 0; i < n; i++)
    {
        char x = a[i];
        if(x == '2')
            b.push_back('2');
        else if(x == '3')
            b.push_back('3');
        else if(x == '4')
        {
            b.push_back('3');
            b.push_back('2');
            b.push_back('2');
            // cout << 000;
        }
        else if(x == '5')
            b.push_back('5');
        else if(x == '6')
        {
            b.push_back('3');
            b.push_back('5');
        }
        else if(x == '7')
            b.push_back('7');
        else if(x == '8')
        {
            b.push_back('7');
            b.push_back('2');
            b.push_back('2');
            b.push_back('2');
        }
        else if(x == '9')
        {
            b.push_back('7');
            b.push_back('3');
            b.push_back('3');
            b.push_back('2');
        }
    }
    sort(b.rbegin(),b.rend());
    cout << b << endl;
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