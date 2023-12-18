#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M,N;
    
   
    int value=0;
    cin>>M>>N;
    value=M*N;

    int i=0;

    while(value>=2)
    {
       
      value=value-2;
     
     i++;
     
    }


   cout<<i<<endl;

    return 0;
}
