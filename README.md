/* 
	Project: Introduction to Embedded Systems week 1 assignment to develop a statistics library.
	Author: Ebenezer Dadson 
*/


/** Setup:

To get to the home dir and create the file you will run the following commands, but replace Fosdick_coursera with your repository name:


Once you have an initialized repository you will need to set your committer information. Run the following commands with your own name and email inserted.


If you want to create your own README.md file with the touch command or with vim directly (one or the other)


Add your description (and copyright as applicable) and then save the file. Move the files provided in the zip to this directory. Now you will need to commit this as your initial repository commit to the master branch.


For the second commit you will start your development by making a development branch with the git branch command. Call this dev_c1m1. Checkout out this branch after you created it.


For this second commit you are to only add the files with all of the functions “stubbed” and the associated function and file documentation. Meaning add all function prototypes and function documentation in the header files. All function definitions but with an empty function body in the implementation file.


For the third (and subsequent commits) you are to begin to code the functions you need to deliver from the requirements of each file. When you are satisfied with your changes, repeat the process committing from the second. If you want to save your repository on a repository store site like github or bitbucket, you need to create an account on those sites and set up an empty repository. Then run the following code to push your developed commits...

$ cd /path/to/ your/repo
$git remote add origin https://bitbucket.org/(ACCOUNT>/(REPONAME>.git
$ git push -u origin master
origin master

*/


/** Instructions:

You will need to write eight functions in the stats.c implementation file:

main() - The main entry point for your program

print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.

print_array() -  Given an array of data and a length, prints the array to the screen

find_median() - Given an array of data and a length, returns the median value

find_mean() -  Given an array of data and a length, returns the mean

find_maximum() -  Given an array of data and a length, returns the maximum

find_minimum() -  Given an array of data and a length, returns the minimum

sort_array() - Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )

To print data to the screen, you can use the printf function provided by the standard IO library (stdio.h). Each printed value should be nicely formatted with an indicator of the variable or index for each statistic value printed. 

Most of the functions in the stats.c file require 2 input parameters and one return value:

Input: A unsigned char pointer to an n-element data array

Input: An unsigned integer as the size of the array

Output: An unsigned char result from the function

*/



