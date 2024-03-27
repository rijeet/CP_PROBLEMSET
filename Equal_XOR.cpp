#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;

pair<vector<ll>, ll> p2;
pair<vector<ll>, ll> p1;
pair<vector<ll>, ll> createPair(const vector<ll> &v)
{
    ll result = 0;
    for (ll i = 0; i < v.size(); ++i)
    {
        result ^= v[i];
    }
    return make_pair(v, result);
}

void generateCombinationL(const std::vector<ll> &r, ll combinationNumber, std::vector<ll> &current, ll start)
{
    if (combinationNumber == 0)
    {

        p1 = createPair(current);
        return;
    }

    for (ll i = start; i < r.size(); ++i)
    {
        current.push_back(r[i]);
        generateCombinationL(r, combinationNumber - 1, current, i + 1);
        current.pop_back();
    }
}

void generateCombinationR(const std::vector<ll> &r, ll combinationNumber, std::vector<ll> &current, ll start)
{
    if (combinationNumber == 0)
    {

        p2 = createPair(current);
        return;
    }

    for (ll i = start; i < r.size(); ++i)
    {
        current.push_back(r[i]);
        generateCombinationR(r, combinationNumber - 1, current, i + 1);
        current.pop_back();
    }
}

int main()
{
    FAST;
    ll t;

    cin >> t;

    while (t--)
    {
        ll n, K;
        cin >> n >> K;
      
        vector<ll> pl(n);
        vector<ll> pr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> pl[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> pr[i];
        }

    
        ll combinationNumber = 2*K;

        std::vector<ll> currentL;
        generateCombinationL(pl, combinationNumber, currentL, 0);


     

        std::vector<ll> currentR;
        generateCombinationR(pr, combinationNumber, currentR, 0);

        bool hoise = 1;

        if ((p1.second == p2.second) && hoise)
        {

            bool first = true;
            for (ll num : p1.first)
            {
                if (!first)
                {
                    cout << " ";
                }
                cout << num;
                first = false;
            }
            cout << endl;

            first = true;
            for (ll num : p2.first)
            {
                if (!first)
                {
                    cout << " ";
                }
                cout << num;
                first = false;
            }
            cout << endl;
            hoise = 0;
        }
    }

    return 0;
}