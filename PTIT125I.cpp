#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int n,k;
    cin >> n >> k;
    stack<int> s;
    for(int i = 1; i <= n; i++)
    {
        char c;
        cin >> c;
        int tmp = c - '0';
        if(s.empty())
        {
            s.push(tmp);
        }
        else
        {
            while(!s.empty() && tmp > s.top() && k > 0)
            {
                s.pop();
                k--;
            }
            s.push(tmp);
        }
    }
    while(k > 0 && !s.empty())
    {
        s.pop();
        k--;
    }
    vector<int> min;
    while(!s.empty())
    {
        int tmp = s.top();
        s.pop();
        min.push_back(tmp);
    }
    reverse(min.begin(),min.end());
    for(int i = 0; i < min.size(); i++)
        cout << min[i];
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