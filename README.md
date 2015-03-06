# SortingAnalysis
Lab from my CSC 222 Data Structures and Algorithms Pt. II class. Tests the complexities of certain sorting algorithms against large data sets.

Usage
=======

Simply run:

`make`

Then (assuming everything went well), type:

`./test` 

To run the program.

You will now see the following results:

	Reading data from file...
		Read 235886 lines
	Running a timing experiment with parameters:
	==========================================================
	Number of algorithms to test: 3
	number of problems to run per algorithm: 10
		smallest problem size: 10
		largest problem size: 100
	maximum trials per problem size: 500

	==========================================================
	Running algorithm 1 out of 3...
		problem size:     10  trials:  500 avg. time (s): 0.00000281
		problem size:     20  trials:  500 avg. time (s): 0.00001024
		problem size:     30  trials:  500 avg. time (s): 0.00002185
		problem size:     40  trials:  500 avg. time (s): 0.00003829
		problem size:     50  trials:  500 avg. time (s): 0.00005927
		problem size:     60  trials:  500 avg. time (s): 0.00008241
		problem size:     70  trials:  500 avg. time (s): 0.00011486
		problem size:     80  trials:  499 avg. time (s): 0.00014444
		problem size:     90  trials:  499 avg. time (s): 0.00018303
		problem size:    100  trials:  499 avg. time (s): 0.00022276
	Running algorithm 2 out of 3...
		problem size:     10  trials:  498 avg. time (s): 0.00000413
		problem size:     20  trials:  500 avg. time (s): 0.00001105
		problem size:     30  trials:  500 avg. time (s): 0.00001771
		problem size:     40  trials:  500 avg. time (s): 0.00002629
		problem size:     50  trials:  500 avg. time (s): 0.00003552
		problem size:     60  trials:  500 avg. time (s): 0.00004720
		problem size:     70  trials:  500 avg. time (s): 0.00005581
		problem size:     80  trials:  499 avg. time (s): 0.00006387
		problem size:     90  trials:  499 avg. time (s): 0.00007374
		problem size:    100  trials:  499 avg. time (s): 0.00008528
	Running algorithm 3 out of 3...
		problem size:     10  trials:  498 avg. time (s): 0.00000322
		problem size:     20  trials:  500 avg. time (s): 0.00000838
		problem size:     30  trials:  500 avg. time (s): 0.00001436
		problem size:     40  trials:  500 avg. time (s): 0.00002457
		problem size:     50  trials:  500 avg. time (s): 0.00002795
		problem size:     60  trials:  500 avg. time (s): 0.00003565
		problem size:     70  trials:  500 avg. time (s): 0.00004290
		problem size:     80  trials:  499 avg. time (s): 0.00005034
		problem size:     90  trials:  499 avg. time (s): 0.00005944
		problem size:    100  trials:  499 avg. time (s): 0.00006654
	Writing results to file Results.txt


As you can see, this displays information regarding each testing trial for the given sorting algorithms.

If you want to print <b>verbose</b> and to actually see the output of the sorting, remove the `#` sign from the following line in the `Makefile`:

`CFLAGS = -g -I/usr/local/include #-DPRINT`

Python Spreadsheet Script
=======

One of the annoying things I found with this project was copying the sorting results to Microsoft Excel in order to generate graphs. As a result, I wrote a short Python script that reads the data in `Results.txt` and creates the necessary Excel spreadsheet using this data. To use this, follow the instructions below:

To install dependencies:

`$ sudo pip install xlsxwriter`


Because xlsx writer can't modify existing spreadsheets, this script merely writes your data into the following format:

	Input Size	 Selection Sort		Merge Sort		Quick Sort
	5				7.72e-07		1.472e-06		1.324e-06
	5				8.14e-07		1.632e-06		1.686e-06
	5				7.36e-07		1.446e-06		1.164e-06
	5				7.36e-07		1.468e-06		1.266e-06
	5				7.44e-07		1.524e-06		1.154e-06
	5				7.68e-07		1.506e-06		1.126e-06
	5				7.56e-07		1.462e-06		1.152e-06
	5				7.46e-07		1.558e-06		1.146e-06
	5				7.26e-07		1.456e-06		1.122e-06
	5				7.48e-07		1.51e-06		1.122e-06


Then, you can simply copy and paste this into a spreadsheet where
the rest of your results for all lab trials exist.

To run:


`python csvwriter.py`
