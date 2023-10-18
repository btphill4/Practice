#include <iostream>
using namespace std;


void quickSwap(int s1[], int s2[])
{
    int s1Size = sizeof(s1);
    int s2Size = sizeof(s2);
    int* a = new int[s1Size];
    int* b = new int[s2Size];

    a = s1;
    b = s2;
    
    int* temp = new int[s2Size];
    
    temp = a;
    a = b;
    b = temp;
}

int partition(string arr[], int left, int right)
{
    string key; 
    string temp;

    int y = left -1;        //element before left val
    int i = left;
    int j = right - 1;      //element before end
    string pivot = arr[right];

    
    for(int i = left; i <= right -1; i++)
    {
        if(arr[i] < pivot)      //current element is less than piviot
        {
            i++;                //increment left element to next element
            key = arr[i];       //set key to next element
            arr[y] = arr[i];    //set left value to position before
            arr[i] = key;       //set right to key
        }
    }
/*
    while(i < j && (right - left) && j >= left)
    {
        while(arr[i] < pivot)   // if less than, pivot is good
        {
            i++;                //incremenets i to the right until it is the pivot
        }
        while(arr[j] > pivot)   // j decrements to left
        {
            j--;
        }
        if(i < j)               //if left is less than j, swap
        {
            quickSwap((string*) arr[i], arr[j]); 
        }
    }
    */

   //swap the values
    temp = arr[y + 1];
    arr[y+1] = arr[right];
    arr[right] = temp;

    return i;
}//end partitioSn

string* quickSort(string* arr[], int left, int right)
{
    left = 0;
    right = sizeof(arr-1);

    int pPartition;
    pPartition = partition((string*)arr, left, right);
    if (left < right)
    {
        int mid = partition((string *)arr, left, right);
        quickSort(arr,left,mid-1);
        quickSort(arr, mid, mid+1);    
    }
}//end quickSort

int main()
{
/*
//initialization
string myArray[5];         //initialize myArry
string* tempArr = new string[5];
cout << "Enter 5 letters in any order" << endl;

//add to array
    for(int i = 0; i < 5; i++) //loops to 5 so we can get 5 digits
    {
        cin >> myArray[i];  //adds values to the array in position i 
    }
int arrSize = sizeof(myArray);
//print before sorting
cout << "Before Sorting" << endl;
    for(int i = 0; i < arrSize; i++) //loops to 5 so we can get 5 digits
    {
        cout << tempArr[i] << ", ";  //prints value and a comma between 
    }

//Sorting
quickSort(tempArr, 0, arrSize-1);     //call to insertion sort on myArry

//print out sorted array
cout << endl << "After Sorting" << endl;
    for(int i = 0; i < 5; i++) //loops to 5 so we can get 5 digits
    {
        cout << myArray[i] << ", ";  //prints value and a comma between 
    }
*/
    return 0;
} //end of main
