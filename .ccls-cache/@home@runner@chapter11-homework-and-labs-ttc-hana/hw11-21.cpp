//Introductory21.cpp - Displays the average stock price
//Created/revised by Hannah Haynes on 5 Aug 2024

#include <iostream>
#include <iomanip>
using namespace std;

//function prorotypes
double getAverage(double stocks[], int numElements);

int main()
{
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double average = 0.0;


	average = getAverage(prices, 10);
	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function

//*****function definitions*****
double getAverage(double stocks[], int numElements)
{
	double total = 0.0;
	for (int x = 0; x < numElements; x += 1)
	total += stocks[x];
	//end for
	return total / numElements;
} //end of getAverage function


