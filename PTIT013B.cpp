#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define mod 1000000007
#define TEST 1

struct point
{
    string name;
    int diem;
};

bool cmp(point a, point b)
{
    if(a.diem != b.diem)
        return a.diem > b.diem;
    else
        return a.name + b.name < b.name + a.name;
}

inline void solution()
{
    int n;
    cin >> n;
    point player, enemy;
    cin >> player.name >> enemy.name;
    vector<point> v;
    for(int i = 0; i < n; i++)
    {
        point x;
        cin >> x.name >> x.diem;
        v.push_back(x);
    }
    int k,l;
    for(int i = 0; i < n; i++)
    {
        string x = v[i].name;
        if(x == player.name)
        {
            k = i;
        }
        if(x == enemy.name)
        {
            l = i;
        }
    }
    v[k].diem += 3;
    sort(v.begin(),v.end(),cmp);
    for(int i = 0; i < n; i++)
    {
        string x = v[i].name;
        if(v[i].name == player.name)
        {
            cout << i+1 << " ";
            k = i;
        }
        if(x == enemy.name)
        {
            l = i;
        }
    }
    v[k].diem -= 3;
    v[l].diem += 3;
    sort(v.begin(),v.end(),cmp);
    for(int i = 0; i < n; i++)
    {
        string x = v[i].name;
        if(v[i].name == player.name)
        {
            cout << i+1 << " ";
            k = i;
        }
        if(x == enemy.name)
        {
            l = i;
        }
    }
    v[l].diem -= 3;
    ++v[k].diem;
    ++v[l].diem;
    sort(v.begin(),v.end(),cmp);
    for(int i = 0; i < n; i++)
    {
        // cout << v[i].name << " " << v[i].diem << endl;
        string x = v[i].name;
        if(v[i].name == player.name)
        {
            cout << i+1 << " ";
            k = i;
        }
        if(x == enemy.name)
        {
            l = i;
        }
    }
    cout << "\n";
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