/*Ryan McGuiness 
Prof Montella
CSE-109
July 15,2019
rcm421@lehigh.edu
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    bool hasNextString = true;
    string newuserString;
    int i;
    while(hasNextString)
    {
        getline(cin,newuserString);
        if(newuserString == "#")
        {
            hasNextString = false;
            cout<<"Bye"<<endl;
        }
        else
        {
            for(i=0; i< newuserString.size(); i++)
            {
                cout<<newuserString.at(i)<<"*"<<endl;
            }
        }
    }
    return 0;
}