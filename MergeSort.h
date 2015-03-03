/*
* 
*
*	Author: Grant McGovern
*	Date: 2 March 2015
*
*
* 	~ Header file for the MergeSort class ~
*/

#ifndef MERGESORT_H
#define MERGESORT_H

#include "SortAlgorithm.h"

// MergeSort implements the SortAlgorithm interface
class MergeSort : public SortAlgorithm
{

public:
    void sort(string*, int);	// implementation of sort function
private:
    void swap(string&, string&); 
    void mergeSort(string*, int, int);
    void merge(string*, int, int, int);
};

#endif