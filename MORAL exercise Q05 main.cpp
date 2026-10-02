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
    
    int attendees;
    int seatsPerTable;
    
    cout << "Enter number of attendees: ";
    cin >> attendees;
    
    cout << "Enter seats per table: ";
    cin >> seatsPerTable;
    
    // Calculate tables
    int tableRequired = attendees / seatsPerTable;
    
    // Calculate total seats
    int totalSeats = attendees * seatsPerTable;
    
    //Calculate unesed seats 
    int unusedSeats = attendees - totalSeats;
    
    cout << fixed << setprecision(2);
    
    cout << "Exact tables = " << tableRequired << endl;
    cout << "Tables required = " << tableRequired << endl;
    cout << "Total seats = " << totalSeats << endl;
    cout << "Unused seats = " << unusedSeats << endl;

    return 0;
}