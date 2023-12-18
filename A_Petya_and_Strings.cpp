#include<bits/stdc++.h>
using namespace std;
int main()
{
   int result=0;
   string str1,str2;
   char ch1,ch2;
   cin>>str1;
   cin>>str2;

 for(int i=0;i<str1.length();i++)
  {
    ch1 = tolower(str1[i]);
    ch2 = tolower(str2[i]);
    if (ch1 < ch2) {
    cout <<"-1"<< endl;
     return 0;
   }
   else if (ch1 > ch2) {
    cout <<"1"<< endl;
     return 0;
  }
  } 

  cout <<"0"<< endl;

   return 0;
}