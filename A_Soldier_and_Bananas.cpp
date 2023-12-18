#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
   FAST;
   int k,w;
   long long int n,price=0;
   cin>>k>>n>>w;
   
   for (int i = 1; i <= w; i++)
   {
      price += i*k;
   }
   
   price=price-n;
   if(price>0)
   cout<<price<<endl;
   else
   cout<<0<<endl;
    return 0;
}