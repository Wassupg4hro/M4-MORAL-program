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
    // Declare variables
    double width, height, coverage;
    int coats;
    
    // Ask for user input
    cout << "Enter wall width: ";
    cin >> width;
    
    cout << "Enter wall height: "; 
    cin >> height;
    
    cout << "Enter number of coats: ";
    cin >> coats;
    
    cout << "Enter coverage per can: ";
    cin >> coverage;
    
    // Compute wall area
    double wallArea = width * height;
    
    // Compute total paint area 
    double totalPaintArea = wallArea * coats;
    
    // Compute exact number of cans 
    double exactCans = totalPaintArea / coverage; 
    
    // Compute whole number of cans to buy 
    int cansToBuy = ceil(exactCans);
    
    // Display results
    cout << fixed << setprecision(2);
    
    cout << "Wall area = " << wallArea << endl;
    cout << "Total paint area = " << totalPaintArea << endl;
    cout << "Exact cans = " << exactCans << endl;
    cout << "Cans to buy = " << cansToBuy << endl;
    
    return 0;
}