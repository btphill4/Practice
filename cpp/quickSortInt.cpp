#include<iostream>
using namespace std;


/* Pseudocode for quick sort main algorithm
procedure quickSort(arr[], low, high)
    arr = list to be sorted
    low – first element of array
    high – last element of array
begin
    if (low < high)
    {
       // pivot – pivot element around which array will be partitioned  
        pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);  // call quicksort recursively to sort sub array before pivot
        quickSort(arr, pivot + 1, high); // call quicksort recursively to sort sub array after pivot
    }
end procedure
//partition procedure selects the last element as pivot. Then places the pivot at the correct position in 
//the array such that all elements lower than pivot are in the first half of the array and the //elements higher
 than pivot are at the higher side of the array.
procedure partition (arr[], low, high)
begin
    // pivot (Element to be placed at right position)
    pivot = arr[high];  
     i = (low - 1)  // Index of smaller element
    for j = low to high
    {
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i + 1] and arr[high])
    return (i + 1)
end procedure
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



