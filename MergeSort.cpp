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

    cout << "\n\nTesting MergeSort...\n\n";
    
    for(int i = 0; i<n; i++)
      cout << data[i] << " ";

    cout << "\n\n";
}

/*
*  Recursively performs mergeSort method
*/
void MergeSort::mergeSort(string* data, int low, int high){

  if(high-low > 1){

    int mid = (high+low)/2;
    mergeSort(data,low,mid);
    mergeSort(data,mid+1,high);
    merge(data,low, mid, high);
  }

}

/*
* The main algorithm behind mergeSort.
* --> see here for details of how it works: http://en.wikipedia.org/wiki/Merge_sort
*/
void MergeSort::merge(string* data, int low, int mid, int high){

  int left = low;
  int right = mid + 1;
  int i = 0;

  string* tmp = new string[(high-low)+1];

  if(high-low == 1) {

    if(data[high] < data[low])
      swap(data[high], data[low]);

    return;
  }

  while(left <= mid && right <= high) {
    
    if(data[right] < data[left]) {
      tmp[i] = data[right];
      
      right++;
    }
    else {
      tmp[i] = data[left];
      
      left++;
    }
    
    i++;
  
  }

  for(; i <= high && left <= mid; i++, left++)
    tmp[i] = data[left];

  for(; i <= high && right <= high; i++, right++)
    tmp[i]=data[right];

  for(i = 0, left = low; i < ((high - low) + 1) && low <= high; i++, left++)
    swap(data[left], tmp[i]);


}

void MergeSort::swap(string& s1, string& s2) {
    string tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;
}