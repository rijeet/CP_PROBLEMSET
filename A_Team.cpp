
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str[n];
    string str_output[n];
    int len=0;
    int cnt_1=0;
    int cnt_solve=0;
    int check =0;
    string temp_str;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> str[i];
    }
    
    for (int i = 0; i < n; ++i)
    {
        

        len = str[i].length();
        temp_str = str[i];
        cnt_1=0;
        while(len--)
        {   
            check = temp_str[len] - '0';
            if(1==check)
            cnt_1++;
        }
        if(cnt_1>=2)
        { 
            cnt_solve++;   
            len=0;
        }
    }
    
     cout << cnt_solve << endl;

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a,b,c;
    int cnt=0;
    int problemSolved=0;
    cin>>n;
    for(int i =0;i<n;i++)
    {
       cin>> a>>b >>c;
       cnt = a+b+c;
       if(cnt>=2)
       {    
         problemSolved++;
         cnt =0;
       }

    }

   cout<<problemSolved<<endl;

    return 0;
}