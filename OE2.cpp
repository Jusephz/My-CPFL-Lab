//Name: Joseph Rafael Manio
//Activity Name: OE2
//Description : POS Computer System that computes at least 3 kinds of product input, plus 12% Vat


#include <iostream>
const double TAX = 0.12;

using namespace std;

int main (){

    string cn,pi1,pi2,pi3;
    int qty1,qty2,qty3;
    double price1,price2,price3, t_price1,t_price2,t_price3,total,vattotal;
    //add inputs: Product id, customer name - at least three products in your POS
    cout << "Input Customer Name   :";
    getline(cin,cn);
    cin.ignore();
    cout << "Input Product ID(1)   :";
    cin >> pi1;
    cout << "Enter Quantity        :";
    cin >> qty1;
    cout << "Enter Price           :";
    cin >> price1;
    cout << "Input Product ID(2)   :";
    cin >> pi2;
    cout << "Enter Quantity        :";
    cin >> qty2;
    cout << "Enter Price           :";
    cin >> price2;
    cout << "Input Product ID(3)   :";
    cin >> pi3;
    cout << "Enter Quantity        :";
    cin >> qty3;
    cout << "Enter Price           :";
    cin >> price3;
    
    //add VAT paid  
    t_price1 = (qty1 * price1);
    t_price2 = (qty2 * price2);
    t_price3 = (qty3 * price3);
    total = (t_price1 + t_price2 + t_price3) * TAX;
    vattotal = (t_price1 + t_price2 + t_price3) - total;
    
    


    //minus tax in the total price
    //output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\n-------------------------" << endl;
    cout << "RECEIPTS-----------------" << endl;
    cout << "Product Name   :" << pi1 << endl;
    cout << "Quantity       :" << qty1 << endl;
    cout << "Price          :" << price1 << endl;

    cout << "Product Name   :" << pi2 << endl;
    cout << "Quantity       :" << qty2 << endl;
    cout << "Price          :" << price2 << endl;

    cout << "Product Name   :" << pi3 << endl;
    cout << "Quantity       :" << qty3 << endl;
    cout << "Price          :" << price3 << endl;


    //output total VAT deduction
    cout << "Total Amount   :" << "P" << vattotal << endl; //Plus VAT
    return 0;
}

