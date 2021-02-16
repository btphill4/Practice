#include <iostream>
using namespace std;

//pesudo code
/*
declare variables - i, key, j
loop : 1 to n-1     //outer loop
    key = a[i];
    j = i -1;
    loop (j >= 0 && arr[j] > key)   //inner loop
        arr[j + 1]= arr [j];
        j = j-1;
        end loop    //inner loop
    arr[j + 1] = key;
end loop    //outer loop
*/

//Xue's Psuedocode
/* key = j
insertionSort(A)
for(j=2 to length[A])
{
    do{ 
    key = A[J]
    i = j-1
    } while i > 0 and A[i] > key
        do
        {
            A[i+1] = A[i]
            i = i - 1
        }
    A[i+1] = key
}
*/

void insertionSort(int arr[])
{
    //initialize values
    int j = 0;
    int key;
    int size = *(&arr + 1) - arr; 
    //loop 
    for(int i = 1; i < 5; i++)          
    {
        key = arr[i];   //picking an element
        j = i - 1;      //will make j the element to the left of the key (we compare the key)

        /* For print the iterations and comparisions */
        cout << arr[j] << ">" << key << endl;       //checks if element j is larger than key (key = arr[i])
        cout << "Iteration: " << i << " " << endl;  //prints the iteration
        for(int x = 0; x < 5; x++)
        {
            cout << arr[x] << ", ";                 //loops to print the current array 
        }
           

        while(j >= 0 && arr[j] > key)   //check to see if j index position is zero or greater than 0 and that arr[j] is larger than the key 
        {
            arr[j+1] = arr[j];          //shift the larger elements one to the right (iterate through ascending order)
            j = j - 1;                  //set j index to the value to the left until it reaches the key or 0 (decrementing)
        }
        arr[j + 1] = key; 
    }
} //end of insertionSort




int main(){

    //initialize
    int size;

    cout <<"How many numbers do you want to add" << endl;
    cin >> size;
    //user input
    int myArray[size];

    cout << "Please enter "<< size << " numbers" << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> myArray[i];
    }

//print before sorting
cout << "Before Sorting" << endl;
for(int i = 0; i < 5; i++) //loops to 5 so we can get 5 digits
{
    cout << myArray[i] << ", ";  //prints value and a comma between 
}

//Sorting
insertionSort(myArray);     //call to insertion sort on myArry

//print out sorted array
cout << endl << "After Sorting" << endl;
for(int i = 0; i < 5; i++) //loops to 5 so we can get 5 digits
{
    cout << myArray[i] << ", ";  //prints value and a comma between 
}

    return 0;
} //end of main