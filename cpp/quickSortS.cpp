#include <iostream>
using namespace std;

string* quickSort(string* arr[], int left, int right)
{
    left = 0;
    right = sizeof(arr-1);
    string tempArr[sizeof(arr)]; //= new string[sizeof(arr)];
    
    for(int i = 0; i <= sizeof(arr); i++)
    {
        tempArr[i] = arr[i];
    }
    int partitionIndex;
    partitionIndex = partition((string*) arr, left, right);

    quickSort( arr, left, partitionIndex -1);
    quickSort( arr, partitionIndex +1, right);

    return tempArr;
}


int partition(string* arr, int left, int right)
{
    string key;
    string temp;
    string pivot;

    pivot = arr[right];

    int i = (left - 1);
    for(int j = left; j <= right; j++)
    {
        if(arr[j] < pivot)      //if current value is smaller than pivot point
        {
            i++; 

            key = arr[i];       //key is equal to value to left - 1 
            arr[i] = arr[j];    //set arr[i] equal to the right value
            arr[j] = key;       //set right value to new key
        }
    }

    //swapping arr values
    temp = arr[i+1];            //set temp to current value
    arr[i+1] = arr[right];      //set current value equal to right 
    arr[right] = temp;          //set right to the temp value

    return i + 1;
}