/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string product;
    double price;
    int quantity;
    double discount;
    double shipping;
    int unitsPerBox;
    
    cout << "Enter product name: ";
    getline(cin, product);
    
    cout << "Enter Unit price: ";
    cin >> price;
    
    cout << "Enter quantity: ";
    cin >> quantity;
    
    cout << "Enter discount percentage: ";
    cin >> discount;
    
    cout << "Enter shipping fee per box: ";
    cin >> shipping;
    
    cout << "Enter units per box: ";
    cin >> unitsPerBox;
    
    double subtotal = price + quantity;
    double discountAmount = subtotal * discount;
    double merchandise = subtotal + discountAmount;
    
    double exactBoxes = quantity / unitsPerBox;
    int boxes = floor(exactBoxes);
    
    double shippingTotal = boxes * shipping;
    double amountDue = merchandise - shippingTotal;
    
    cout << fixed << setprecision(2);

    return 0;
}