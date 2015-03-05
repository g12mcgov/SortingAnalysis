/*
* 
*
*   Author: Grant McGovern
*   Date: 2 March 2015
*
*
*   ~ Implementation file for the MergeSort class ~
*/

#include "MergeSort.h"
#include <iostream>
#include <string.h>
#include <stdio.h>


/*
* Calls the sort method, triggering the mergeSort method.
*/
void MergeSort::sort(string* data, int n) {
    mergeSort(data,0,n-1);

    // cout << "\n\nTesting MergeSort...\n\n";
    
    // for(int i = 0; i<n; i++)
    //   cout << data[i] << " ";

    // cout << "\n\n";
}

/*
*  Recursively performs mergeSort method
*/
void MergeSort::mergeSort(string* data, int low, int high){

    if(high <= low)
        return;

    int mid = (high + low)/2;
    mergeSort(data,low,mid);
    mergeSort(data,mid+1,high);
    merge(data,low, mid, high);

}

/*
* The main algorithm behind mergeSort.
* --> see here for details of how it works: http://en.wikipedia.org/wiki/Merge_sort
*/
void MergeSort::merge(string* data, int low, int mid, int high) {
    
    int i = low;
    int j = mid + 1;
    int k = low;

    string* buffer = new string[high-low+1];

    for (int index = low; index <= high; index++)
        buffer[index - low] = data[index];

    while(i <= mid && j <= high) {

        if (buffer[i - low] < buffer[j - low]) {
            data[k] = buffer[i - low];
            i++;
        }
        else {
            data[k] = buffer[j-low];
            j++;
        }

        k++;

    }

    if (i > mid) {

        while(j <= high) {
            data[k] = buffer[j-low];
            k++;
            ++j;
        }

    }
    else {

        while(i <= mid) {
            data[k] = buffer[i-low];
            k++;
            ++i;
        }
        
    }  


}

void MergeSort::swap(string& s1, string& s2) {
    string tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;
}