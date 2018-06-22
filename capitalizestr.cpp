#include <cstring>
#include <cctype>
#include <string.h>
#include<iostream>
using namespace std;

int  main()
{

    char str[30] ;
    cin.getline(str,10000);
    if(strlen(str)<=0)
    {cout<<"empty";
    }
    else
    {
        str[0] = toupper(str[0]);
        
          for (int i = 1; i <strlen(str); i++)
       {
        if ( str[i - 1] == ' ' )
        str[i] = toupper( str[i] );
           
         else
            str[i] = tolower( str[i] );
       }
    }
    cout<<str;
     cout<<"\n";
    for (int i = 0; i <strlen(str); i++)
       {
        if ( str[i] == ' ' )
        {
        	i++;
    cout<<"\n";
        }
    cout<<str[i] ;}
    
    
}
