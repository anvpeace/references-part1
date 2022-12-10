#include <iostream>

using namespace std;



int main(){

    string name = "Peace";

    string &pea = name;

    string &ace = name;

    string &pe = name;


    cout << name << " " << &name <<endl;
    cout << pea << " " << &pea << endl;
    cout << ace << " " << &ace << endl;
    cout << pe << " " << &pe << endl;
    // string &refernce_name = name;

    // cout << refernce_name << " " << &refernce_name << " " << name << &name <<endl;







    return 0;
}

// Exercise 1.

// Declare a string variable called "name", containing a name of your choice. For example
// "Cassandra". Next declare three reference variables to "name" variable and name them
// using the short version of the name you have chosen. Print out in the console all four
// variables (name and its references) and their addresses.

// eg.
// var name = Cassandra
// ref cassie = name
// ref cassey = name
// ref sandra = name

// Output:
// Cassandra 0x69fedc
// Cassandra 0x69fedc
// Cassandra 0x69fedc
// Cassandra 0x69fedc          