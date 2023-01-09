#include <iostream>
using namespace std;

//Insertion Sort
void insertionSort(string arr[],int n)
{
    //initialize values 
    string key;
    int j;
    int i;

    //loop 
    for(int i = 1; i < n; i++)          
    {
        key = arr[i];   //picking an element
        j = i - 1;      //will make j the element to the left of the key (we compare the key)

        while(j >= 0 && arr[j] > key)   //check to see if j index position is zero or greater than 0 and that arr[j] is larger than the key 
        {   
            arr[j+1] = arr[j];          //shift the larger elements one to the right (iterate through ascending order)
            j = j - 1;                  //set j index to the value to the left until it reaches the key or 0 (decrementing)
        }
        arr[j + 1] = key; 
    }
} //end of insertionSort