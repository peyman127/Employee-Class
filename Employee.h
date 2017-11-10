//
//  Employee.hpp
//  Persian book Practice
//
//  Created by Peyman Samandi on 11/7/17.
//  Copyright © 2017 Peyman Samandi. All rights reserved.
//

#ifndef Employee_h
#define Employee_h

#include <iostream>
#include <string.h>

using namespace std;
int          IDSearch;
string       FirstNameSearch;

class Employee
{
public:
    string      FirstName;
    string      LastName;
    int         Salary;
    int         EmpID;
};

void Search()
{
    Employee        Search;
    cout << "Search with only ID" << endl;
    cin >> IDSearch;
}



#endif /* Employee_h*/
