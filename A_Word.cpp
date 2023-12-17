#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
      FAST;
    string s[100];
    int i = 0;
    char temp='\0';
    while (i < 100) {
        cin >> s[i];
        if (s[i].empty()) {
            break;
        }
        i++;
    }
int lower=0,upper=0;


//cout<<s[0].length()<<endl;
for (int k = 0; k < i; k++)
{
    for (int j = 0; j <s[0].length(); j++)
    {
        if (s[k][j] >= 'a' && s[k][j] <= 'z')
        lower++;
        else if (s[k][j] >= 'A' && s[k][j] <= 'Z')
        upper++;
    }
    
}

if(lower==upper) 
{
    for (int k = 0; k < i; k++)
{
    for (int j = 0; j <s[0].length(); j++)
    {   
        temp = s[k][j];
        temp= tolower(temp);
         s[k][j]=temp ;
         temp='\0';
    }
    
}
}
else if(lower>upper)
{ 
    for (int k = 0; k < i; k++)
{
    for (int j = 0; j <s[0].length(); j++)
    {
        temp = s[k][j];
        temp= tolower(temp);
         s[k][j]=temp ;
         temp='\0';
    }
    
}
}
else
{
        for (int k = 0; k < i; k++)
{
    for (int j = 0; j <s[0].length(); j++)
    {
        temp = s[k][j];
        temp= toupper(temp);
         s[k][j]=temp ;
         temp='\0';
    }
    
}
}


 for (int j = 0; j < i; j++) {
        cout<<s[j];
    }
cout<<endl;
    return 0;
}
