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
    float x1, y1, x2, y2;
    float dx, dy, distance;
    
    cout << "Enter x1: ";
    cin >> x1;
    
    cout << "Enter y1: ";
    cin >> y1;
    
    cout << "Enter x2: ";
    cin >> x2;
    
    cout << "Enter y2: ";
    cin >> y2;
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    distance = sqrt(pow(dx, 2) + pow(dy, 2));
    
    cout << fixed << setprecision(3);
    cout << "dx = " << dx << "; ";
    cout << "dy = " << dy << "; ";
    cout << "Distance = " << distance << "; ";
    
    cout << "Rounded distance = " << round(distance) << endl;
    
    return 0;
}