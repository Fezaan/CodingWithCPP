//C++ Assignment
//20BCE10681

//Q1a
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str1[50];
    int i, l = 0;
    cout << "\n\n Find the length of a string:\n";
    cout << "---------------------------------\n";
    cout << " Input a string: ";
    cin >> str1;
    for (i = 0; str1[i] != '\0'; i++) 
	{
        l++;
    }
    cout << "The string contains " << l << " number of characters." << endl;
}

//Q1b

#include <iostream>
using namespace std;

int main() {
    string str = "Hello";

    
    cout << "String Length = " << str.size();

    return 0;
}

//Q2

#include <iostream>
using namespace std;

int main()
{
    string s1, s2, result;

    cout << "Enter string s1: ";
    getline (cin, s1);

    cout << "Enter string s2: ";
    getline (cin, s2);

    result = s1 + s2;

    cout << "Resultant String = "<< result;

    return 0;
}

//Q3a

#include <iostream>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter string s1: ";
    getline (cin, s1);

    s2 = s1;

    cout << "s1 = "<< s1 << endl;
    cout << "s2 = "<< s2;

    return 0;
}


//Q3b

#include<iostream>
#include<string>
using namespace std;
void copy(string str, int len)
{
	string newstr;
	int i;
	for(i=0; i<len; i++)
		newstr[i] = str[i]; 
	newstr[i] = '\0'; 
	cout<<"\n The copied string is: "<<newstr;
}
int main()
{
	string str;
	int len;
	cout<<"Enter a string: ";
	getline(cin,str);
	len=str.length();
	copy(str,len);
	return 0;
}


//Q4
#include <iostream>
using namespace std;
 
void relationalOperation(string s1, string s2)
{
 
    if (s1 != s2) 
    {
        cout << s1 << " is not equal to " << s2 << endl;
        if (s1 > s2)
            cout << s1 << " is greater than " << s2 << endl;
        else
            cout << s2 << " is greater than " << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}



//Q5
#include <bits/stdc++.h> 
using namespace std; 
  
 
void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 

//Q6

#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
   char string[10];
 
   cout<<"Input a string to convert to upper case"<<endl;
   cin.getline(string, 10);
 
   cout<<"Characters in uppercase:"<< strupr(string);
   
 
   return  0;
}


//Q7

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[20], str2[20];
    int i, j, len = 0, flag = 0;
    cout << "Enter the string : ";
    gets(str1);
    len = strlen(str1) - 1;
    for (i = len, j = 0; i >= 0 ; i--, j++)
        str2[j] = str1[i];
    if (strcmp(str1, str2))
        flag = 1;
    if (flag == 1)
        cout << str1 << " is not a palindrome";
    else
        cout << str1 << " is a palindrome";
    return 0;
}



//Q8a

#include <iostream>
using namespace std;
# define NO_OF_CHARS 256
 
class gfg
{
    public :
     
    
    void fillCharCounts(char *str, int *count)
    {
        int i;
        for (i = 0; *(str + i); i++)
        count[*(str + i)]++;
    }
 
    
    void printDups(char *str)
    {
         
        
        int *count = (int *)calloc(NO_OF_CHARS, 
                                      sizeof(int));
        fillCharCounts(str, count);
 
       
        int i;
        for (i = 0; i < NO_OF_CHARS; i++)
        if(count[i] > 1)
            printf("%c, count = %d \n", i, count[i]);
 
        free(count);
    }
};


//Q8b

#include <bits/stdc++.h> 
using namespace std; 
  
char *removeDuplicate(char str[], int n) 
{ 
    
   int index = 0;    
     
    
   for (int i=0; i<n; i++) { 
         
      
     int j;   
     for (j=0; j<i; j++)  
        if (str[i] == str[j]) 
           break; 
       
     if (j == i) 
        str[index++] = str[i]; 
   } 
     
   return str; 
} 


//Q9
#include <iostream> 
using namespace std; 
  
char *removeSpaces(char *str) 
{ 
    int i = 0, j = 0; 
    while (str[i]) 
    { 
        if (str[i] != ' ') 
           str[j++] = str[i]; 
        i++; 
    } 
    str[j] = '\0'; 
    return str; 
} 


//Q10

#include<iostream>
using namespace std;

int main( )
{
	char str[80];
	
	cout << "Enter a string: ";
	cin.getline(str,80);
	
	int words = 0; 
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ') 
		{
			words++;
		} 		
	}

	cout << "The number of words = " << words+1 << endl;

	return 0;
}
