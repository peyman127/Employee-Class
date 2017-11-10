//  main.cpp
//  Persian book Practice
//
//  Created by Peyman Samandi on 11/4/17.
//  Copyright © 2017 Peyman Samandi. All rights reserved.
//

#include <iostream>
#include "Employee.h"

using namespace std;



int main()
{
    Employee    Emp[5];
    
    cout << "Enter the 1st employee First Name: ";
    cin >> Emp[0].FirstName;
    cout << "Enter the 1st employee Last Name: ";
    cin >> Emp[0].LastName;
    cout << "Enter the 1st employee Salary: ";
    cin >> Emp[0].Salary;
    cout << "Enter the 1st employee ID#: ";
    cin >> Emp[0].EmpID;
    
    cout << "\nEnter the 2nd employee First Name: ";
    cin >> Emp[1].FirstName;
    cout << "Enter the 2nd employee Last Name: ";
    cin >> Emp[1].LastName;
    cout << "Enter the 2nd employee Salary: ";
    cin >> Emp[1].Salary;
    cout << "Enter the 2nd employee ID#: ";
    cin >> Emp[1].EmpID;
    
    cout << "\nEnter the 3rd employee First Name: ";
    cin >> Emp[2].FirstName;
    cout << "Enter the 3rd employee Last Name: ";
    cin >> Emp[2].LastName;
    cout << "Enter the 3rd employee Salary: ";
    cin >> Emp[2].Salary;
    cout << "Enter the 3rd employee ID#: ";
    cin >> Emp[2].EmpID;
    
    cout << "\nEnter the 4th employee First Name: ";
    cin >> Emp[3].FirstName;
    cout << "Enter the 4th employee Last Name: ";
    cin >> Emp[3].LastName;
    cout << "Enter the 4th employee Salary: ";
    cin >> Emp[3].Salary;
    cout << "Enter the 4th employee ID#: ";
    cin >> Emp[3].EmpID;
    
    cout << "\nEnter the 5th employee First Name: ";
    cin >> Emp[4].FirstName;
    cout << "Enter the 5th employee Last Name: ";
    cin >> Emp[4].LastName;
    cout << "Enter the 5th employee Salary: ";
    cin >> Emp[4].Salary;
    cout << "Enter the 5th employee ID#: ";
    cin >> Emp[4].EmpID;
    
    Search();
    
    if (IDSearch == Emp[0].EmpID)
        cout << "The Employee Information is: " << Emp[0].FirstName << " " << Emp[0].LastName << " Salary is: " << Emp[0].Salary;
    else
        if (IDSearch == Emp[1].EmpID)
            cout << "The Employee Information is: " << Emp[1].FirstName << " " << Emp[1].LastName << " Salary is: " << Emp[1].Salary << endl;
           else
                if (IDSearch == Emp[2].EmpID)
                    cout << "The Employee Information is: " << Emp[2].FirstName << " " << Emp[2].LastName << " Salary is: " << Emp[2].Salary << endl;
                else
                    if (IDSearch == Emp[3].EmpID)
                        cout << "The Employee Information is: " << Emp[3].FirstName << " " << Emp[3].LastName << " Salary is: " << Emp[3].Salary << endl;
                    else
                        if (IDSearch == Emp[4].EmpID)
                            cout << "The Employee Information is: " << Emp[4].FirstName << " " << Emp[4].LastName << " Salary is: " << Emp[4].Salary << endl;
    else
        cout << "The ID you entered is wrong. " << endl;
}
