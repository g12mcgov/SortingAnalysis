# SortingAnalysis
Lab from my CSC 222 Data Structures and Algorithms Pt. II class. Tests the complexities of certain sorting algorithms against large data sets.

Usage
=======

Simply run:

`make`

Then (assuming everything went well), type:

`./test` 

To run the program.


Python Spreadsheet Script
=======

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

```Python
	python csvwriter.py
```