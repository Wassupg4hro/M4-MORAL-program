/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double baseFare, distance, ratePerKm, tollFee;
    double bookingFeePercent;
    int passengers;
    
    // Ask for user input
    cout << "Enter base fee: ";
    cin >> baseFare;
    
    cout << "Enter distance in kilometers: ";
    cin >> distance;
    
    cout <<"Enter rate per kilometer: ";
    cin >> ratePerKm;
    
    cout << "Enter rate per kilometer: ";
    cin >> tollFee;
    
    cout << "Enter booking-fee percentage: ";
    cin >> bookingFeePercent;
    
    cout << "Enter number of passengers: ";
    cin >> passengers;
    
    // Compute distance charge
    double distanceCharge = distance * ratePerKm;
    
    //Compute pre-fee total 
    double preFeeTotal = baseFare + distanceCharge + tollFee;
    
    // Compute booking fee
    double bookingFee = preFeeTotal * (bookingFeePercent / 100.0);
    
    // Compute grand total 
    double grandTotal = preFeeTotal + bookingFee;
    
    // Compute amount each passenger pays
    double perPassenger = grandTotal / passengers;
    
    // Display results 
    cout << fixed << setprecision(2);
    
    cout << "Distance charge: " << distanceCharge << endl;
    cout << "Pre-fee: " <<preFeeTotal << endl;
    cout << "Booking fee: " << bookingFee << endl;
    cout << "Total: " << grandTotal << endl;
    cout << "Per passenger: " << perPassenger << endl;
    
    return 0;
    
}