#include <iostream>
using namespace std;
int main() {

    //Question1
    string name;
    int studentId;
    cout<<"What is your name : \n";
    cin >> name;
    cout <<"Hello  " << name << endl;
    cout << "What is your student ID : \n ";
    cin >> studentId;
    cout <<"Your ID is " << studentId << endl;

    cout << "-------"<<endl ;

    //Question2
    int var1, var2;
    cout << "Enter the value of var1: ";
    cin >> var1;
    cout << "Enter the value of var2: ";
    cin >> var2;

    int sum = var1 + var2;
    int diff = var1 - var2;
    int prod = var1 * var2;

    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
    cout << "sum: " << sum << endl;
    cout << "diff: " << diff << endl;
    cout << "prod: " << prod << endl;

    cout << "-------"<<endl ;

    // Question 3
    string name2;
    int labGrade , midtermGrade , finalGrade;
    double lastScore;
    cout << "Enter your name : \n";
    cin >> name2;
    cout << "Enter your lab grade : \n";
    cin >> labGrade;

    cout << "Enter your midterm grade : \n";
    cin >> midtermGrade;

    cout << "Enter your final grade : \n";
    cin >> finalGrade;

    lastScore = (labGrade * 0.25) + (midtermGrade * 0.35) + (finalGrade * 0.4);

    cout << "Name : " << name2 << endl;
    cout << "Lab : " << labGrade << endl;
    cout << "Midterm : " << midtermGrade << endl;
    cout << "Final : " << finalGrade << endl;
    cout << "Last Score : " << lastScore << endl;

    cout << "-------"<<endl ;

    //Question4
    string pattern = "*\n**\n***\n**\n";
    cout << pattern;


    return 0;
}
