#include <iostream>
#include <string>

const int NUM_MONTHS = 6;
const int NUM_EMPLOYEES = 5;

struct Employee {
    std::string name;
    int employeeID;
    double salaryLastSixMonths[NUM_MONTHS];
};

int main() {
    Employee employees[NUM_EMPLOYEES];

    // Input details for five employees
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        std::cout << "Enter details for Employee " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::getline(std::cin >> std::ws, employees[i].name);
        std::cout << "Employee ID: ";
        std::cin >> employees[i].employeeID;
        std::cout << "Enter the salary for the last six months:\n";
        for (int j = 0; j < NUM_MONTHS; j++) {
            std::cout << "Month " << j + 1 << ": ";
            std::cin >> employees[i].salaryLastSixMonths[j];
        }
    }

    // Display details of each employee and calculate total salary
    double totalSalary = 0.0;
    std::cout << "\nEmployee Records:\n";
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        std::cout << "Employee " << i + 1 << " - Name: " << employees[i].name << ", ID: " << employees[i].employeeID << "\n";
        double totalSalaryForEmployee = 0.0;
        for (int j = 0; j < NUM_MONTHS; j++) {
            totalSalaryForEmployee += employees[i].salaryLastSixMonths[j];
        }
        totalSalary += totalSalaryForEmployee;
        std::cout << "Total Salary for the last six months: $" << totalSalaryForEmployee << "\n\n";
    }

    // Display the total salary for all employees
    std::cout << "Total Salary for all employees for the last six months: $" << totalSalary << "\n";

    return 0;
}

