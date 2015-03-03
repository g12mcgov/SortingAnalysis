/*
 * Driver function for the sorting experiment
 *
 * author: V. P. Pauca
 * date:   2/24/2015
 */

#include <iostream>
#include <string>
#include "Data.h"
#include "Experiment.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

using namespace std;

int main() {
    
    // Read file web2random which contains 235886 word entries
    Data data("web2random");

    // Set the standard deviation for the Gaussian weight function to be
    // small so that the number of trials decays quickly as problem size
    // increases.
    data.setStd(1.0/1024);
 
    Experiment experiment(&data);

    // Add the algortithms to the experiment
    experiment.addAlgorithm(new SelectionSort());
    experiment.addAlgorithm(new MergeSort());
    experiment.addAlgorithm(new QuickSort());
    
    experiment.run(5, 5, 2, 1);
    cout << "New Experiment" << endl;
    experiment.run(4, 5, 2, 1);


    experiment.save("Results.txt");
}

