//Q1a

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100];
    int y;
    cout<<"Enter thr text: ";
    gets(x);
    cout<<"Length of the text is: ";
    y=strlen(x);
    cout<<y;
    return 0;
}


//Q1b

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100];
    int y=0;
    cout<<"Enter thr text: ";
    gets(x);
    cout<<"Length of the text is: ";
    while(x[y]!='\0')
    {
        y++;
    }
    cout<<y;
    return 0;
}

//Q2

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[50],y[50],z;
    cout<<"Enter the text 1: ";
    gets(x);
    cout<<"Enter the text 2: ";
    gets(y);
    cout<<"Combined text is: "<<strcat(x,y);
    return 0;
}



//Q3a

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100],y[100];
    cout<<"Enter the text: ";
    gets(x);
    cout<<"Copied string is: "<<strcpy(y,x);
    return 0;
}

//Q3b

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100],y[100];
    int i;
    cout<<"Enter the text: ";
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        y[i]=x[i];
    }
    y[i]='\0';
    cout<<"Copied string is: "<<y;
    return 0;
}


//Q4

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100],y[100];
    int i,f=0;
    cout<<"Enter the text 1: ";
    gets(x);
    cout<<"Enter the text 2: ";
    gets(y);
    if(strcmpi(x,y))
        cout<<"Both the entered texts are same.";
    else
        cout<<"Texts entered are different.";
    return 0;
}


//Q5a

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100],y[100];
    int i;
    cout<<"Enter the text: ";
    gets(x);
    cout<<"Reversed string is: "<<strrev(x);
    return 0;
}

//Q5b

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100];
    int n;
    cout<<"Enter the text: ";
    gets(x);
    n=strlen(x);
    for (int i=0;i<n/2;i++)
    {
        swap(x[i],x[n-i-1]);
    }
    cout<<"Reversed string is: "<<x;
    return 0;
}


//Q5c

#include <bits/stdc++.h> 
using namespace std; 
  
void reverse(string str)  
{  
    if(str.size() == 0) 
    { 
        return; 
    } 
    reverse(str.substr(1)); 
    cout << str[0]; 
}  
  
int main()  
{  
    string a = "Hello wold!";  
    reverse(a);  
    return 0;  
}  

//Q6

#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
   char x[10];
 
   cout<<"Text in lower case"<<endl;
   gets(x);
   cout<<"Text in upper case:"<< strupr(x);
   return  0;
}


//Q7

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char x[20], y[20];
    int i, j, len = 0, f = 0;
    cout << "Enter the text: ";
    gets(x);
    len = strlen(x) - 1;
    for (i = len, j = 0; i >= 0 ; i--, j++)
        y[j] = x[i];
    if (strcmp(x, y))
        f = 1;
    if (f == 1)
        cout <<x<< " is not a palindrome";
    else
        cout <<y<< " is a palindrome";
    return 0;
}

