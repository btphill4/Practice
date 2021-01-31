#include<iostream>      //always include
#include<stdlib.h>
#include<stdio.h>
#include<string.h>      //string class


using namespace std;    //always include

/** 
// numbers
int n;
while (cin >> n)
{
   ...
}
// lines
string line;
while (getline(cin, line))
{
   ...
}
// characters
char c;
while (cin.get(c))
{
   ...
}
*/

int main()
{
    //string to store text
    string  sTxt;

    //store input into string sTxt, 
    //cin only will get the first word not the whole line
    while(cin >> sTxt)
    {
        getline(cin,sTxt);
    }

    //assign the size of sTxt
    int sSize = sTxt.length();                      

    //Convert sTxt into a char[]
    //create a char array with the size of sTxt
    char* cTxt = new char[sSize];  
        //adds sTxt to cTxt[]                     
        for(int i = 0; i < sSize; i++)                   
        {
            //iterates through sTxt and adds each letter individually
            cTxt[i] = sTxt[i];   
            cout << cTxt[i];                            
        }    

    
}

