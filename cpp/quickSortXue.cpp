#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

/*
quickSort(A[], p, r)
    if (p < r)
        k = partition(A[],p,r) //a[k] is the pivot
        quickSort(A[], p, k-1)
        quickSort(A[], k+1, r)  

- the element A[k] (pivot) is in its final place in the list
- all the elements in A[p].. A[k-1] are less than or equal to A[k].
- all the elements in A[k+1] .. A[r] are greater than A[k]

partition(A[], p, r)
    x = A[r]
    i = p-1

    for(j = p to r-1)
        do
            if(A[j] <= x)
                i = i + 1
                exchange A[i] and A[j]
    exchange A[i+1] and A[r]
    return i + 1

Before the body of the for-loop, 
- A[p..i-1] contains elements known to be less than or equal to A[r];
- A[i..j-1] contains elements known to be larger than A[r]

After the body of the for-loop,
- A[p.. i-1] contains elements known to be less than or equal to A[r];
- A[i..j] contains elements known to be larger than A[r]

*/

//for comparision checking
int comps = 0;
// Swap two elements - Utility function  
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

// partition the array using last element as pivot
int partition (int arr[], int p, int r) 
{ 
    int pivot = arr[r];    // pivot 
    int i = (p - 1);   
    //int n = sizeof(arr)/sizeof(arr[0]); 

    for (int j = p; j <= r- 1; j++) 
    { 
        //if current element is smaller than pivot, increment the p element
        //swap elements at i and j
        if (arr[j] <= pivot) 
        { 
            comps++;
            cout << "interation: " << comps << endl;
            for(int i = 0; i <= 5 - 1; i++)
            {
                cout << arr[i] << ", ";
            }
            cout << "j: " << arr[j] << "<=" << pivot << endl;

            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[r]); 
    return (i + 1); 
} 


//quicksort algorithm
void quickSort(int arr[], int p, int r) 
{ 
    if (p < r) 
    { 
        comps++;
        cout << "interation: " << comps << endl;
        for(int i = 0; i <= 5 - 1; i++)
        {
            cout << arr[i] << ", ";
        }
        cout << "p: " << p << "<" << r<< endl;
        
        //partition the array 
        int pivot = partition(arr, p, r); 
   
        //sort the sub arrays independently 
        quickSort(arr, p, pivot - 1); 
        quickSort(arr, pivot + 1, r); 
    } 
} 

void displayArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
      
} 
   
int main() 
{ 
   /* //initialize
    int size;

    cout <<"How many numbers do you want to add" << endl;
    cin >> size;
    //user input
    int arr[size];
    cout << "Please enter "<< size << " numbers" << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }*/

    int arr[] = {19,16,13,25,22}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << endl;
    cout<<"Input array"<<endl;
    displayArray(arr,n);
    cout<<endl;
    quickSort(arr, 0, n-1); 
    cout << endl;
    cout<<"Array sorted with quick sort"<<endl; 
    displayArray(arr,n); 
    return 0; 
}