#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[5][5];
    int m=0;
    int n=0;
    int man_dist=0;
    for(m=0;m<5;m++)
    { 
     for(n=0;n<5;n++)
     {
       cin>>mat[m][n];
      if(mat[m][n]==1)
       {
        man_dist= abs(2-m)+abs(2-n);
        cout<<man_dist<<endl;
       }
     }
    }
    return 0;
}
