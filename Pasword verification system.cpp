#include <iostream>
#include <string>
using namespace std;
int main () {
    string employeeName;
    double basicSalary, bonus, totalSalary;
    for (int i = 1; i<=5; i++) {
        cout<<"\nEmployee"<< i <<endl;
        cout<<"Enter employee name:";
        getline(cin, employeeName);
        
        cout<<"Enter basic salary:";
        cin>>basicSalary;
        cin.ignore();

        bonus= 0.05* basicSalary;
        totalSalary=basicSalary + bonus;

        cout<<"EMPLOYMENT REPORT--------------"<<endl;
        cout<<"Name:"<<employeeName<<endl;
        cout<<"Basic salary:"<<basicSalary<<endl;
        cout<<"Bonus:"<<bonus<<endl;
        cout<<"Total salary:"<<totalSalary<<endl;

    }
    return 0;
}