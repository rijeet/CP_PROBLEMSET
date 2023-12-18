#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
   
    int value=0;
    cin>>n;
    string x[n];
    string str1 = "++";
    string str2 = "--";
    int i=0;

    while(n--)
    {
       
      cin>>x[i];
      size_t found_Pluse = x[i].find(str1);
      size_t found_Minus = x[i].find(str2);

      if (found_Pluse != string::npos)
           value++;
      else if(found_Minus != string::npos)
           value--;

      i++;
    }


   cout<<value<<endl;

    return 0;
}
