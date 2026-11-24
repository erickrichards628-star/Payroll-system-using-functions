#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Collects employee salary and overtime input
void getEmployeeDetails(string& name, double& basicSalary, double& overtimeHours) {
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours worked: ";
    cin >> overtimeHours;
}

// Computes overtime pay given hours and hourly rate
double calculateOvertimePay(double overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}

// Adds basic salary and overtime pay to get net salary
double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

// Prints a neat payslip breakdown
void displayPayslip(const string& name, double basicSalary, double overtimeHours,
                    double ratePerHour, double overtimePay, double netSalary) {
    cout << fixed << setprecision(2);
    cout << "\n========== EMPLOYEE PAYSLIP ==========\n";
    cout << "Employee Name  : " << name << "\n";
    cout << "Basic Salary   : " << basicSalary << "\n";
    cout << "Overtime Hours : " << overtimeHours << "\n";
    cout << "Hourly Rate    : " << ratePerHour << "\n";
    cout << "Overtime Pay   : " << overtimePay << "\n";
    cout << "Net Salary     : " << netSalary << "\n";
    cout << "======================================\n";
}

int main() {
    string employeeName;
    double basicSalary = 0.0;
    double overtimeHours = 0.0;
    const double RATE_PER_HOUR = 250.0; // Standard overtime rate per hour

    getEmployeeDetails(employeeName, basicSalary, overtimeHours);

    double overtimePay = calculateOvertimePay(overtimeHours, RATE_PER_HOUR);
    double netSalary = calculateNetSalary(basicSalary, overtimePay);

    displayPayslip(employeeName, basicSalary, overtimeHours, RATE_PER_HOUR, overtimePay, netSalary);

    return 0;
}