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
    long bytes;
    
    cout << "Enter file size in bytes: ";
    cin >> bytes;
    
    double KB = bytes / 1024.0;
    double MB = bytes / (1024.0 * 1024.0);
    double GB = bytes / (1024.0 * 1024.0 * 1024.0);
    
    long wholeMB = (long)MB;
    
    cout << fixed << setprecision(2);
    cout << "KB = " << KB << "; ";
    cout << "MB = " << MB << "; ";
    
    cout << fixed << setprecision(4);
    cout << "GB = " << GB << "; ";
    
    cout << "Whole MB = " << wholeMB << endl;

    return 0;
}