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
    // Variables for input scores
    double quizScore, labScore, projectScore, examScore;
    
    // Prompt user for input
    cout << "Enter Quiz Score: ";
    cin >> quizScore;
    
    cout << "Enter Laboratory score: ";
    cin >> labScore;
    
    cout << "Enter Project score: ";
    cin >> projectScore;
    
    cout << "Enter Examination score: ";
    cin >> examScore;
    
    // Compute the weighed grade using the given percentages:
    // Quizzes 20%, Laboratory 25%, Project 25%, Examination 30%
    double WeightedGrade = (quizScore * 0.20) +
                           (labScore * 0.25) +
                           (projectScore * 0.25) + 
                           (examScore * 0.30);
                           
    // Rounded whole number value using round()
    double roundedGrade = round(WeightedGrade);
    
    // Truncated version using explicit integer cast 
    int truncatedGrade = (int)WeightedGrade;
    
    // Output formatted results
    cout << fixed << setprecision(2);
    cout << " \nWeighted grade = " << WeightedGrade
         << "; Rounded = " << roundedGrade
         << "; Cast to int = " << truncatedGrade << endl;
         
    return 0;
}