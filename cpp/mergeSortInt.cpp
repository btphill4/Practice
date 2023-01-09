#include<iostream>      //always include
#include<stdlib.h>
#include<stdio.h>
#include<string.h>      //string class


using namespace std;    //always include



//merge algorithm
void merge(int arr[], int l, int m, int r)
{
    int i = l;                  //starting index for left subarray           
    int j = m+1;                //starting index for right subarray (one to the right of mid)
    int k = l;                  //starting index for the temporary index

    int size = (r-1) +1;        //calculates the size of the array using right value and adding one extra character
    int temp[size];                //temp array

    while(i <= m && j <=r)      //i is the left most index of the left array, j is the first index after the mid(m+1)
    {
        if(arr[i]<= arr[j])     //i element in left subarray is smaller than the right subarray of the element j
        {   
            temp[k] = arr[i];   //arr[i] is smaller than arr[j]
            i++;                //moves to next element in left subarray
            k++;                //moves to the next element 
        }
        else
        {
            temp[k] = arr[j];   //arr[i] is larger than arr[j]
            j++;                //moves to next element in right subarray
            k++;                //moves to the next element in left array
        }
    }
        while(i <= m)
        {
            temp[k] = arr[i];   //copying all elements from left subarray to temp as it is
            i++;                //increment left element
            k++;                //moves to next element on the temparray
        }
        while(j <= r)
        {
            temp[k] = arr[j];   //copying all elements from right subarray to temp as it is
            j++;                //increment right element
            k++;                //moves to next element on the temparray
        }
    for(int s = l; s<=r;s++)
    {
        arr[s]=temp[s];
    }
}   //end merge()

//merge sort algorithm
void mergeSort(int arr[],int l, int r)
{
    if(l < r)   //check that the left value is less than the right
    {
        int m = (l+r)/2;         //calculates the midpoint by dividing the sum of left and right divided by 2
        mergeSort(arr,l,m);     //right is the new midpoint
        mergeSort(arr,m+1,r);   //right subarray is m+1
        merge(arr,l,m,r);       //merge function is called
    }
}   //end mergeSort()




