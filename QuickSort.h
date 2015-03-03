/*
* 
*
*	Author: Grant McGovern
*	Date: 2 March 2015
*
*
* 	~ Header file for the QuickSort class ~
*/

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "SortAlgorithm.h"

// QuickSort implements the SortAlgorithm interface
class QuickSort : public SortAlgorithm
{

public:
    void sort(string*, int);
private:
    void swap(string&, string&);
    // Returns a pivot as to partition the list around it.
    int partition(string* data, int low, int high);
    void quickSort(string* data, int low, int high);
};

#endif		