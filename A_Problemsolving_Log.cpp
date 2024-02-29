/*
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using ll = long long;
using P = pair<ll,ll>;


//bool compare(char a, char b) {
//    return a > b; // Sorting in descending order
//}


int main() {
  FAST;

  int tc = 1, ti,n;
  cin >> tc;

  for (ti = 0; ti < tc; ++ti) {
    cin >> n;
    string s[n];
   int ans = 0;
    string t="\0";
   cin>> s[ti];
 //   cout << s[ti] << "\n";
 // sort(s[ti].begin(), s[ti].end());

 //  cout << s[ti] << "\n";
   int temp=0;
 int len = s[ti].length();
  for (int i = 0; i <len ; i++)
  {
       temp =static_cast<int>(s[ti][i]);
       temp = temp - 64;
//      cout<<i<<" char "<<s[ti][i]<<" tem "<<temp<<" value of N "<<n<<" ans "<<ans<<"\n";

    if(n>0 && t.find(s[ti][i]) == std::string::npos)
    { if(n>=temp)
       {
        ans++;
       }
      n=n-temp;


      t+=s[ti][i];
 //     cout<<i<<" string if "<<t<<" tem "<<temp<<" value of N "<<n<<" ans "<<ans<<"\n";
    }
    else if (n>0 && t.find(s[ti][i]) != std::string::npos)
    {

       n=n-temp;
      t+=s[ti][i];
 //     cout<<i<<" string else "<<t<<" tem "<<temp<< "value of N "<<" ans "<<ans<<"\n";
    }
  }


    cout << ans << "\n";
  }

  return 0;
}


#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using ll = long long;
using P = pair<ll, ll>;

int main()
{
  FAST;

  int tc = 1, ti, n;
  cin >> tc;

  for (ti = 0; ti < tc; ++ti)
  {
    cin >> n;
    string s[n];
    int ans = 0;
    string t = "\0";
    cin >> s[ti];
    int temp = 0;
    int len = s[ti].length();
    for (int i = 0; i < len; i++)
    {

      if (t.find(s[ti][i]) == std::string::npos)
      {
        temp = static_cast<int>(s[ti][i]);
        temp = temp - 64;
        int x = count(s[ti].begin(), s[ti].end(),s[ti][i]);
        if (x >= temp)
        {
          ans++;
        }

        t += s[ti][i];
      }
      else if (t.find(s[ti][i]) != std::string::npos)
      {

        t += s[ti][i];
      }
    }

    cout << ans << "\n";
  }

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
  FAST;

  int tc = 1, ti, n;
  cin >> tc;

  for (ti = 0; ti < tc; ++ti)
  {
    cin >> n;
    string s[n];
    int ans = 0;
    string t = "\0";
    cin >> s[ti];
    int temp = 0;
    int len = s[ti].length();
    for (int i = 0; i < len; i++)
    {

      if (t.find(s[ti][i]) == std::string::npos)
      {
        temp = static_cast<int>(s[ti][i]);
        temp = temp - 64;
        int x = count(s[ti].begin(), s[ti].end(),s[ti][i]);
        if (x >= temp)
        {
          ans++;
        }

        t += s[ti][i];
      }
      else if (t.find(s[ti][i]) != std::string::npos)
      {

        t += s[ti][i];
      }
    }

    cout << ans << "\n";
  }

  return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
  FAST;
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >>n;
    string str;
    cin>> str;
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
      mp[str[i]]++;
    }
    int cnt =0;
    for(auto it:mp)
    {
      if(it.second>=(it.first-'A'+1))
      cnt++;
    }
    cout<<cnt<<"\n";
  }

  return 0;
}