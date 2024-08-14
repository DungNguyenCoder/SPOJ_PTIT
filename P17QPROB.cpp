#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;
const int mx = 1e5;

bool TEST = 1;

bool cmp(string a, string b)
{
    return a + b < b + a;
}

void solution()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin,s);
    stringstream ss(s);
    string token;
    vector<string> word;
    while(ss >> token)
    {
        word.push_back(token);
    }
    sort(word.begin(),word.end(),cmp);
    for(int i = 0; i < n; i++)
    {
        cout << word[i];
    }
    cout << endl;
}

int main()
{
    faster();
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--)
    {
        solution();
    }
}