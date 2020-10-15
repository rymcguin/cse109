Ryan McGuiness
Prof Montella
CSE-109
July 15,2019
rcm421@lehigh.edu
#------------------------
#Programming Assignment 1
#------------------------
# Program 1

*Program 1* is a program that takes an input from the user and prints out the users input letter by letter. It uses a while loop to check if the user wants to continue the program and a for loop to print out the input(Seen Ex.1).

*Program 1*:
    * Waits for input of a text string from stdin
    * Outputs each character of the text individually on stdout
    * Be sure to reach each line of the input until it’s fully consumed

##Example1
```
        - for (i = 0; i < userString.size(); i++)
            {
                cout << userString.at(i) << endl;
            }
```

#Program 2
*Program 2* takes in an input from a user and prints out the input character by character with an "*" after each one. It uses the same looping structure as *Program 1* and prints out "Bye" when the user enters "#"(Seen Ex.2).
*Program 2*:
    * Waits for input of a stream of characters from stdin
    * Outputs each character followed by the asterisk character: * 
    * Be sure to reach each line of the input until it’s fully consumed
##Example 2
```
    -getline(cin,newuserString);
        if(newuserString == "#")
        {
            hasNextString = false;
            cout<<"Bye"<<endl;
        }
        else
        {
```

# Usage
First the user has to **complie** this file and save it in a place that he could access it from his terminal. 
```
> g++ program1.cpp -o program1
```
Then use the **piping operator*** to run *program1's* output and feed it into *program2's* input. With the use of loops the user's input will print out with "*" after each character.
In Unix-like operating systems (OSX and Linux), as well as Windows, piping one program’s standard output to another programs standard input is achieved using the pipe operator “|” in the terminal. For example:
    ```
      > program1.exe | program2.exe
    ```
For OSX and Linux the programs will not end with a .exe extension. The invocation would look like
    ```
      > ./program1 | ./program2
    ```
This command will direct the output of program1 to the input of program2.


## Contributing
Resources provided by Prof. Corey Montella.
##Files Used
Programming Assignment 1.pdf
