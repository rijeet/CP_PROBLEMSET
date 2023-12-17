#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
      FAST;
    string s[100];
    int i = 0;
    int cnt =0;
    while (i < 100) {
        cin >> s[i];
        if (s[i].empty()) {
            break;
        }
        i++;
    }
    std::set<char> distinct;
    for (int j = 0; j < i; j++) {
        for (int k = 0; k < s[j].size(); k++) {
          if(s[j][k] >= 'a' && s[j][k] <= 'z')
          {
               distinct.insert(s[j][k]);
          }
          else
         {
          cout<<"IGNORE HIM!"<<endl;
          return 0;
         } 
        }
    }
     if(distinct.size()%2==0)
     {  
       cout<<"CHAT WITH HER!"<<endl;
     }
    
     else
    {     
         cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
