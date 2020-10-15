Ryan McGuiness

Prof. Montella

CSE-109

July 24, 2019

# Programming Assignment 2
The default behavior of ls is to list all files and folders that are not hidden. It lists the file names only. The program will accept the following command line arguments, in any order:
- a – list all files, including hidden files. Hidden files begin with a period 
- l – display the long format listing
- d – displays only directories.
- r – displays files in reverse order

# Instructions

## Variables
- *directEntry* - creates dirent struct which includes:
    - char d_name[]
    - DT_DIR
    - DT_REG
- *listNames* - array of file names.
- *numFiles* - total number of files 
- *fileName* - name of file taken from directory
- *listAll* - when set to 1 list of all files, including hidden files will be displayed.
- *longList* - when set to 1 the long format listing is displayed.
- *directList* - when set to 1 all displays only directories.
- *reverse* - when set to 1 the Files will print in reverse order.
- *i* - counter

## Functions
- A for loop and a series of if-statements is used to parse through the arguments and understand what the reader wants the program to do

- The rest of the code is ran inside of a while loop that goes through *directEntry*.
     - The variable *fileName* is taken and printed out according to which arguments the user entered.
     - The long prints out:
        - owner's name if it is found
        - group name if it is found 
        - size of file
        - Date

## Input/Output
- if "-a" is entered all files will be printed out
- if "-a -l" is entered then a list of all of the files(including hidden files) will be printed on long format


# Works Cited
- http://pubs.opengroup.org/onlinepubs/009695399/functions/stat.html
- https://github.com/zizhengwu/Linux-C-Programming/blob/master/myls/myls.c
- http://pubs.opengroup.org/onlinepubs/7908799/xsh/dirent.h.html
