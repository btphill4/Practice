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
       string temp;

       string enter = "ENTER";

       //for(int i = 0; i <= sizeof(line); i++)
       //{
           temp = line;
      // }

        //prints line        
        //cout << temp << endl;

        if(temp.find(enter) != std::string::npos)
        {
            cout << temp[2] << endl;
        }
        else
        {
            cout << "rip" << endl;
        }



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