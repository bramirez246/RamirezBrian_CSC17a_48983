/*
 * File: main.cpp
 * Created on: November 18, 2015
 * Author: Brian Ramirez
 */

#include <iostream>
using namespace std;

//Class declaration
class RetailItem
{
private:
	string description;				//Item's description
	int quantity;					//Item's quantities
	float price;					//Item price
public:
	//Parameter constructor
	RetailItem(string newDescription, int newQuantity, float newPrice)
	{
		description = newDescription;
		quantity = newQuantity;
		price = newPrice;
	}

	//Getting item's information
	string getDesc()
	{
		return description;		//Return the description
	}
	int getQuan()
	{
		return quantity;		//Return the quantity
	}
	float getPrice()
	{
		return price;			//Return price
	}
};


int main()
{
	string description;				//Item's description
	int quantity;					//Item's quantity
	float price;					//Item's price

	//Inputing first item's information
	cout << "Enter the item's description: ";	//Prompt for user's input
	getline(cin, description);					//Input the description

	cout << "Enter the item's quantity: ";
	cin >> quantity;							//Input quantities
	cin.ignore();

	cout << "Enter the item's price: ";
	cin >> price;								//Input the price
	cin.ignore();

	//Setting the information into the first class
	RetailItem information1(description, quantity, price);

	description = information1.getDesc();		//Return the description
	quantity = information1.getQuan();			//Return the quantity
	price = information1.getPrice();			//Return the price

	//Output the first item's informations
	cout << "\nItem #1:" << endl;
	cout << "\tDescription: " << description << endl;
	cout << "\tQuantity   : " << quantity << endl;
	cout << "\tPrice      : " << price << endl;

	//Inputing second item's information
	cout << "\nEnter the item's description: ";	//Prompt for user's input
	getline(cin, description);					//Input the description

	cout << "Enter the item's quantity: ";
	cin >> quantity;							//Input quantities
	cin.ignore();

	cout << "Enter the item's price: ";			//Input the price
	cin >> price;
	cin.ignore();

	//Setting the information into the second class
	RetailItem information2(description, quantity, price);

	description = information2.getDesc();		//Return the description
	quantity = information2.getQuan();			//Return the quantity
	price = information2.getPrice();			//Return the price

	//Output the second item's informations
	cout << "\nItem #2:" << endl;
	cout << "\tDescription: " << description << endl;
	cout << "\tQuantity   : " << quantity << endl;
	cout << "\tPrice      : " << price << endl;

	//Inputing third item's information
	cout << "\nEnter the item's description: ";	//Prompt for user's input
	getline(cin, description);					//Input the description

	cout << "Enter the item's quantity: ";
	cin >> quantity;							//Input quantities
	cin.ignore();

	cout << "Enter the item's price: ";
	cin >> price;								//Input the price
	cin.ignore();

	//Setting the information into the third class
	RetailItem information3(description, quantity, price);

	description = information3.getDesc();		//Return the description
	quantity = information3.getQuan();			//Return the quantity
	price = information3.getPrice();			//Return the price


//Output the third item's informations
	cout << "\nItem #3:" << endl;
	cout << "\tDescription: " << description << endl;
	cout << "\tQuantity   : " << quantity << endl;
	cout << "\tPrice      : " << price << endl;

	return 0;									//End code
}
