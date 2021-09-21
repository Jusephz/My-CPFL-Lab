//Name: Joseph Rafael Manio
//Activity Name: Outcomes Evaluation 1
//Description : Create a C++ program with VS Code that input your [name, gender, age, address, year & section, course, and contact number]. Display those inputs into the screen. 
// Submit in pdf screenshots I/O, VS Code, program, learning outcomes. (Download the Outcomes Evaluation template in Files tab)
//Date : 8/09/2021


#include <iostream>
#include <string>

using namespace std;

int main(){

    string na,g,ag,ad,y,c,cn;

    cout << "Hello!" << endl;


    cout << "Your Name :";
    getline (cin,na);
    cout << "Input your Gender :"; 
    getline (cin,g);
    cout << "Enter your Age:";
    getline (cin,ag);
    cout << "State your Address Here :";
    getline (cin,ad);
    cout << "Your Year and Section :";
    getline (cin,y);
    cout << "Enter your Course:";
    getline (cin,c);
    cout << "Input your Contact Number :";
    getline (cin,cn);


    cout << "Your " <<na << endl;
    cout << g << endl;
    cout << "I'm Currently " <<ag << endl;
    cout << "Living in " <<ad << endl;
    cout << "My Year Section and Course is " <<y+ c << endl;
    cout << "and my number is " <<cn << endl;
    
    return 0;
}