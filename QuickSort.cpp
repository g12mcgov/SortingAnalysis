/*
* 
*
*	Author: Grant McGovern
*	Date: 2 March 2015
*
*
* 	~ Implementation file for the QuickSort class ~
*/

#include "QuickSort.h"
#include <iostream>


void QuickSort::sort(string* data, int n) {
    quickSort(data, 0, n-1);
    
    // cout << "\n\nTesting QuickSort...\n\n";
    
    // for(int i = 0; i < n; i++)
    //   cout << data[i] << " ";

    // cout << "\n\n";
}

void QuickSort::quickSort(string* data, int low, int high) {

	if(low < high) {
		int pivot = partition(data, low, high);

		quickSort(data, low, pivot - 1);
		quickSort(data, pivot + 1, high);
	}
}

int QuickSort::partition(string* data, int low, int high) {

	// Pivot will be the rightmost value in the array
	int pivot = high;
	int j = low;
	
	swap(data[pivot], data[high]);

	for(int i = low; i <= high; i++){

		if(data[i] < data[pivot]) {
			swap(data[i], data[j]);
			j++;
		}
	}
	swap(data[j], data[high]);
	return j;

}

void QuickSort::swap(string& s1, string& s2) {
    string tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;
}