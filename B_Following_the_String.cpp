#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;

char printKey(map<char, ll> &Map,
              ll K)
{
    char s;
    // If a is true, then we have
    // not key-value mapped to K
    bool a = true;

    // Traverse the map
    for (auto &it : Map)
    {

        // If mapped value is K,
        // then print the key value
        if (it.second == K)
        {
            s = it.first;
            it.second = K + 1;
            break;
        }
    }
    return s;
}

int main()
{
    FAST;
    ll t;

    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll value = 0;

        vector<char> s;
        ll arr[n];

        map<char, ll> myMap;
        ll startIndex = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool check = 1;

        ll endIndex = 0;

        ll j = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                myMap['a' + j] = arr[i] + 1;
                s.push_back('a' + j);
                j++;
            }
            if (arr[i] != 0)
            {

                char newchar = printKey(myMap, arr[i]);
                s.push_back(newchar);
                        }
        }

        for (ll i = 0; i < n; i++)
        {
            cout<<s[i];
        }
        cout<<"\n";
        
    }

    return 0;
}
