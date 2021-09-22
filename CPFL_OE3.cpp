#include<iostream>

using namespace std;

int main(){
    string EI,EN; //Employee ID, Employee Name
    int hours; // hours worked
    double rph,gp,np,tax,taxs; // Rate per hour, GrossPay , NetPay , VAT TAX , calculated tax

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  


    cout << "Enter Employee Name           : ";
    cin >>  EN;
    cout << "Enter Employee ID             : ";
    cin >>  EI;
    cout << "Enter numbers of hours worked : ";
    cin >> hours;
    cout << "Enter rate per hour           : ";
    cin >> rph;

    if(hours == 0 || rph == 0) {
        cout << "You did not input anything!";
        return 0;
    }
    //focus here


    else if(hours <= 40){
        gp  =  rph * hours; // Regular hours worked

        if (gp >= 40000){
        tax = 0.12;
        taxs = gp * tax;
        np = gp - taxs;
     }
        if (gp <29999){
        tax = 0.05;
        taxs = gp * tax;
        np = gp - taxs;
     }
     if (gp > 30000 && gp < 40000){
        tax = 0.10;
        taxs = gp * tax;
        np = gp - taxs;
    }
    }else if(hours > 40){
        gp  =  rph * 40 + 1.5 * rph * (hours - 40); //with OT

        if (gp >= 40000){
        tax = 0.12;
        taxs = gp * tax;
        np = gp - taxs;
     }
        if (gp <29999){
        tax = 0.05;
        taxs = gp * tax;
        np = gp - taxs;
     }
     if (gp > 30000 && gp < 40000){
        tax = 0.10;
        taxs = gp * tax;
        np = gp - taxs;
    }
    
    }else{
        cout << "Invalid input!";

    }
    
    cout << "Number of hours worked is     : " << hours << endl;
    cout << "Your Gross Pay is             : " << gp << endl;
    cout << "Your Tax Rate is              : " << tax << endl;
    cout << "Your Net Pay is               : " << np << endl;
    return 0;
}