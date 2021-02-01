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

int main ()
{
    string line;
    while (getline(cin, line))
    {
        //string yeet = "yeet";
       /* int size = sizeof(line);
        string temp[size]; //= new string[size];

        for(int i = 0; i <= size; i++)                   
        {
           temp[i] = line[i];                            
        }  
        */
        //prints line        
        cout << line << endl;

        /*
        for (int i = 0; i <= size;i++)
        {
            //if(temp[i] == "yeet")
            //{
                cout << line << endl;
            //}
        }*/
    }
}