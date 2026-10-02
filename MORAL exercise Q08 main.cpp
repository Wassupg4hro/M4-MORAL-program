/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double T1, T2, T3;
    double average;
    double difference;
    
    cout << "Enter T1: ";
    cin >> T1;
    
    cout << "Enter T2: ";
    cin >> T2;
    
    cout << "Enter T3: ";
    cin >> T3;
    
    average = (T1 + T2 + T3) / 3;
    
    difference = fabs(T1 - T3);
    
    cout << fixed << setprecision(3);
    
    cout << "Average = " << average << ";";
    cout << "(T1 - T3) = " << difference << ";";
    cout << "floor = " << floor(average) << ";";
    cout << "ceil = " << ceil(average) << ";";
    cout << "trunc = " << trunc(average) << ";";
    cout << "round = " << round(average) << endl;

    return 0;
}