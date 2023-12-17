#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
   FAST;
   int a,b;
   cin>>a>>b;
   int year =0;
   
    while(1)
    {
       
       a=a*3;
       b=b*2;
       year++;
       if(a>b)
       break;
         
    }


   cout<<year<<endl;

    return 0;
}
