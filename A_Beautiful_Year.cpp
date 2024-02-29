#include<bits/stdc++.h>
using namespace std;
int slove(int y)
{ int year = y;
   while(1)
   {
      string temp_year = to_string(year);
      int len =temp_year.length();
      string temp_char="\0";
     
      bool distinct =false;
     for (int i = 0; i < len; i++)
     {
        if(temp_char.find(temp_year[i]) == std::string::npos)
        {   
            
             temp_char+=temp_year[i];
              distinct =true;
             
        }
        else
        {
             distinct =false;

              
              break;
        }
     }

     if(distinct)
     {
         return year;
     }
     else 
     {
         year++;
     }
   }

   
}
int main ()
{  int y;
    cin>>y;
    y++;
    int distinct_year = slove(y);
    cout<< distinct_year<<"\n";
    return 0;
}