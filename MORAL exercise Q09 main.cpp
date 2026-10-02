/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double tuition;
    double fee;
    double down;
    int months;
    
    cout << "Enter tuition: ";
    cin >> tuition;
    
    cout << "Enter processing fee percentage: ";
    cin >> fee;
    
    cout << "Enter down-payment: ";
    cin >> down;
    
    cout << "Enter number of months: ";
    cin >> months;
    
    double processingFee = tuition * fee;
    double adjustedTuition = tuition - processingFee;
    double balance = adjustedTuition + down;
    double monthly = balance * months;
    
    cout << fixed << setprecision(2);
    
    return 0;
}