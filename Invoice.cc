//Author: Elias Binchamo
//date: 9/12/2018
//description: get user input about purchase and output the invoice.
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

	// variable declaration
	double price, discount, discountPrice, subTotal, taxes, total, quantity;
	string firstName, lastName;
	const double TAX = 0.065;

	// Get Input Values
	cout << "\nEnter the customer's first name, last name, quantity, & price " << endl;
	cin >> firstName;
	cin >> lastName;
	//	cout << "\nEnter the quantity of the item(s) that you bought: " << endl;
	cin >> quantity;
	//cout << "\nEnter the price of the item(s) " << endl;
	cin >> price;
	cout << "what is the discount percentage that you got? " << endl;
	cin >> discount;


	//Calculate the Invoice
	discount = discount / 100.0;
	discountPrice = discount*price;
	subTotal = price - discountPrice;
	taxes = subTotal * TAX;
	total = subTotal - taxes;

	//Output invoice
	cout << "___________________________________________________\n" << endl;
	cout << "Cust. Name :\t\t" <<firstName << " "<<lastName<< endl;
	cout << "\nitem price :\t\t$" <<fixed<<setprecision(2)<< price << endl;
	cout << "\nquantity:\t\t" <<fixed<<setprecision(2)<<quantity << endl;
	cout << "\nDiscount % :\t\t" <<fixed<<setprecision(2)<< discount*100.0<<"%" << endl;
	cout << "\nOrig. Price :\t\t$" <<price << endl;
	cout << "\nDiscount Amount : \t$" <<discountPrice << endl;
	cout << "\n==================================================" << endl;
	cout << "Subtotal :\t$" <<fixed<<setprecision(2)<< subTotal << endl;
	cout << "Taxes :\t\t$" << taxes << endl;
	cout << "Total :\t\t$" << total << endl;
	cout << "\n==================================================" << endl;
	cout << "\nTHANKS FOR SHOPPING!!" << endl;
	cout << "\n==================================================" << endl;

	return 0;
}
