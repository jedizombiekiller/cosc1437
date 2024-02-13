#include <iostream>

using namespace std;
//the two lines above are for setup. don't forget them

int main(){
    string name; //inputted name
    string firstName; //will be the first name
    string lastName; //will be the last name

    string halfFirst1; //first half of the first name
    string halfFirst2; //second half of the first name
    string halfLast1; //first half of the last name
    string halfLast2; //second half of the last name

    //jerma985 variables
    string jermaName;
    string month;
    string year;

    cout << "What is your name? Separate your surname with an underscore and in caps." << endl;
    //I use the underscore to tell when the first name ends and last name begins.  All caps so the final name has consistent case
    cin >> name; //"cin" is getting whatever the user inputs and it assigns it to "name"

    firstName = name.substr(0,name.find("_")); //First name is the "name" string until it finds the underscore
    lastName = name.substr(name.find("_")+1,name.length()); //Last name is the string after the underscore
    //these next 4 lines split both names into 2
    halfFirst1 = firstName.substr(0, firstName.length()/2); 
    halfLast1 = lastName.substr(0, lastName.length()/2);
    halfFirst2 = firstName.substr(firstName.length()/2, firstName.length());
    halfLast2 = lastName.substr(lastName.length()/2, lastName.length());

    //Start of Jerma name generator. You don't have to do this.
    cout << "What is the number of the month you were born?" << endl;
    cin >> month;
    cout << "What is the last two numbers of the year you were born?" << endl;
    cin >> year;
    jermaName = firstName.substr(0,3)+firstName[firstName.length()-2]+'A'+month+year; 
    //end of Jerma name generator

    cout << "Your first name is " + firstName << endl; //"cout" prints to the console. here, you're just printing the various names
    cout << "Your last name is " + lastName << endl;
    cout << "Your new first name is " + halfFirst1 + halfLast2 << endl;
    cout << "Your new last name is " + halfFirst2 + halfLast1 << endl;
    cout << "Your Jerma985 name is " + jermaName << endl;
}
//to run your code, first you have to compile it. In the terminal, type "c++ (SCRIPT NAME HERE).cpp"
//once it's done, type " ./a.out " and it should run