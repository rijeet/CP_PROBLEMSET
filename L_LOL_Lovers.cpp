/*#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
      FAST;
      int n,k;
      cin>>n;
      k=floor(n/2);
      int right = n-k;
    string s[200];
    int cnt =0;

for(int i=0;i<n;i++)
cin >> s[i];
    int cntL=0,cntO=0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
          if(s[i][j] == 'L')
          {
               cntL++;
          }
          else
         {
          cntO++;
         } 
        }
    }
int rightL=0,rightO=0;
    for (int i = 0; i < n; i++) {
        for (int j = right; j < n; j++) {
          if(s[i][j] == 'L')
          {
               rightL++;
          }
          else
         {
          rightO++;
         } 
        }
    }





     if(cntL!= rightL && cntO!=rightO)
     {  
        cout<<k<<endl;
     }
    
     else
    {     
         cout<<-1<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
    FAST;

    int n, k;
    cin >> n;
    string s;
    cin >> s;

    k = n / 2;
    int right = n - k;
    int cntL = 0, cntO = 0;

    for (int i = 0; i < k; i++) {
        if (s[i] == 'L') {
            cntL++;
        } else {
            cntO++;
        }
    }

    int rightL = 0, rightO = 0;

    for (int i = k; i < n; i++) {
        if (s[i] == 'L') {
            rightL++;
        } else {
            rightO++;
        }
    }

    if (cntL != rightL && cntO != rightO) {
        cout << k << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string foods;
    cin >> foods;

    int numL = 0, numO = 0;
    for (char c : foods) {
        if (c == 'L') numL++;
        else numO++;
    }

    for (int i = 1; i < n; i++) {
        int leftL = 0, leftO = 0, rightL = 0, rightO = 0;
        for (int j = 0; j < i; j++) {
            if (foods[j] == 'L') leftL++;
            else leftO++;
        }
        for (int j = i; j < n; j++) {
            if (foods[j] == 'L') rightL++;
            else rightO++;
        }

        if (leftL != rightL && leftO != rightO) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}



