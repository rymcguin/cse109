// Ryan McGuiness
// Prof Montella
// CSE-109
// July 15,2019
// rcm421@lehigh.edu
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() 
{
    string userString;
    int i;
    bool endString = false;

    while (!endString)
    {
        // cout << "Enter a text string(enter '#' to quit): " << endl;
        getline(cin, userString);
        if (userString == "#")
        {
            cout << "#"<<endl;
            endString = true;
        }
        else
        {
            for (i = 0; i < userString.size(); i++)
            {
                cout << userString.at(i) << endl;
            }
           
        }
    }
}