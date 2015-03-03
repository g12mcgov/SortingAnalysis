/*
* 
*
*	Author: Grant McGovern
*	Date: 2 March 2015
*
*
* 	~ Implementation file for the SelectionSort class ~
*/

#include "SelectionSort.h"
#include <iostream>

void SelectionSort::sort(string* data, int n) {
    
    int temp;
    int min;
 
    for (int i = 0; i < n; ++i) {
        min = i;

        for (int j = i + 1; j < n; ++j) {
            if (data[j] < data[min])
                min = j;
        }
        if (min != i)
            swap(data[i], data[min]);
    }

    cout << "\n Testing if sorted...\n\n";
    
    for(int index = 0; index < n; index++)
    	cout << data[index] << " ";
   	
   	cout << "\n\n";
}

void SelectionSort::swap(string& s1, string& s2) {
    string tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;
}
