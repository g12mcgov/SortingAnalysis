#
#	Author: Grant McGovern
#	Date: 4 March 2015
# 
#	~ A utility script written in Python that opens the 
#	~ 'Results.txt' file, reads the data, and loads it into
#	~ Microsoft Excel.
#

## TO INSTALL DEPENDENCIES ##
# 	>> sudo pip install xlsxwriter 
##

## USAGE ##
#
#  Because xlsx writer can't modify existing spreadsheets, 
#  this script merely writes your data into the following format:
#
#	Input Size	 Selection Sort		Merge Sort		Quick Sort
#	5				7.72e-07		1.472e-06		1.324e-06
#	5				8.14e-07		1.632e-06		1.686e-06
#	5				7.36e-07		1.446e-06		1.164e-06
#	5				7.36e-07		1.468e-06		1.266e-06
#	5				7.44e-07		1.524e-06		1.154e-06
#	5				7.68e-07		1.506e-06		1.126e-06
#	5				7.56e-07		1.462e-06		1.152e-06
#	5				7.46e-07		1.558e-06		1.146e-06
#	5				7.26e-07		1.456e-06		1.122e-06
#	5				7.48e-07		1.51e-06		1.122e-06
#
#
#	Then, you can simply copy and paste this into a spreadsheet where
#	the rest of your results for all lab trials exist.
#
#

## TO RUN ##
#	>> python csvwriter.py 
##

import xlsxwriter
import os

def openFile(fileName):
	lines = []

	with open(fileName) as results:
		for row in results:
			indexed = row.split(' ')
			lines.append(indexed)

	return lines




def write(lines):
	workbook = xlsxwriter.Workbook('lab2temp.xlsx')
	worksheet = workbook.add_worksheet()

	worksheet.write('A1', 'Input Size')
	worksheet.write('B1', 'Selection Sort')
	worksheet.write('C1', 'Merge Sort')
	worksheet.write('D1', 'Quick Sort')

	i = 2
	for line in lines:
		# Column 1 --> Input Size
		worksheet.write('A'+str(i), line[0])
		# Column 2 --> Selection Sort 
		worksheet.write('B'+str(i), line[1])
		# Column 3 --> Merge Sort 
		worksheet.write('C'+str(i), line[2])
		# Column 4 --> Quick Sort (Also remove '\n' character so Excel can read it as a number)
		worksheet.write('D'+str(i), line[3].rstrip())

		i += 1

if __name__ == "__main__":
	try:
		FILENAME = "Results.txt"

		if (os.path.isfile("lab2temp.xlsx")):
			os.remove("lab2temp.xlsx")

		lines = openFile(FILENAME)
		write(lines)

		print "Success."
	
	except AttributeError as err:
		print err
		print "Script could not run"

