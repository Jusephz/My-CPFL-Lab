#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

//function for monetary formatting
struct group_facet: public numpunct<char> {
    protected:
        string do_grouping() const { return "\003"; }
};

// First function prototypes
    void promptAndWait();

/* Function takes two arguments: one float and one unsigned int.
    The unsigned int has a default value of 1. Function returns no value.*/

void dollarsToPeso (float rate, unsigned dollars);
void PesoTodollars (float rate, unsigned peso);
int ans;
int main() 
{
    //Declare the variables for the user input.
    float conversionRate = 50.73; // $1 = 50.73 Pesos
    unsigned dollarsIn;
    unsigned pesoIn;
    float rate = conversionRate;
    int ch;
   
    do{
        system("cls");
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[3] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "\n<< Convert Dollar to Peso >>" << endl;
                // Prompt the user and take US dollars input.
                cout << "Enter a US dollar amount (without the dollar sign, commas or a decimal) : [####] ";
                cin >> dollarsIn;
                dollarsToPeso(rate,dollarsIn); // Show the exchange rate by calling the function.
                promptAndWait(); // Call the promptAndWait() function.
                break;
            }

            case 2:{
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                cout << "\nEnter a Philippine peso amount (without the dollar sign, commas or a decimal) : [####] ";
                cin >> pesoIn;
                PesoTodollars(rate,pesoIn);
                promptAndWait();
                break;
            }
            case 3:{
                promptAndWait();
                cout << "Conversion App Terminated \nThank you for using the app!";
                return 0;
            }
            default:
            {
                cout << "Invalid Input!";
                promptAndWait();
            }

        }
    }while(ans == 1); 
return 0;
}
 //End of main function

// Define the promptAndWait() function.
    void promptAndWait()
{
    cout << "\nConvert again? " << endl;
    cout << "[1] Yes " << endl;
    cout << "[2] No  " << endl;
    cin >> ans;
}

// Define the dollarsToPeso function.
void dollarsToPeso (float rate, unsigned dollar = 0) 
{
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout << "\n$" << dollar << " US = " << (rate * dollar) << " Pesos. \n";
}
//Define the Pesotodollars function.
void PesoTodollars (float rate, unsigned peso = 0)
{
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results
     cout << "\nP" << peso << " PHP = " << (peso / rate) << " Dollars. \n";

}
