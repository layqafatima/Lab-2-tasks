#include <iostream>
#include <cstring> // For strlen to calculate size of the structure

using namespace std;

// Employee structure (nested inside Organisation)
struct Employee {
    int employee_id;
    char name[50];
    double salary;
};

// Organisation structure (contains Employee structure)
struct Organisation {
    char organisation_name[50];
    char organisation_number[20];
    Employee emp; // Employee structure is nested here
};

int main() {
    // Creating a variable of Organisation structure
    Organisation org;

    // Assigning values to the Organisation and Employee structure variables
    strcpy(org.organisation_name, "NU-Fast");
    strcpy(org.organisation_number, "NUFAST123ABC");
    org.emp.employee_id = 127;
    strcpy(org.emp.name, "Linus Sebastian");
    org.emp.salary = 400000.00;

    // Output the size of the structure
    cout << "The size of structure organisation: " << sizeof(org) << endl;

    // Output the details of the organisation and employee
    cout << "Organisation Name: " << org.organisation_name << endl;
    cout << "Organisation Number: " << org.organisation_number << endl;
    cout << "Employee id: " << org.emp.employee_id << endl;
    cout << "Employee name: " << org.emp.name << endl;
    cout << "Employee Salary: " << org.emp.salary << endl;

    return 0;
}
