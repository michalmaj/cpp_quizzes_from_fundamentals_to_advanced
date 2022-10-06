/*
 * To understand polymorphism, we need to take a deeper look at Inheritance.
 *
 * Let's begin with an example of inheritance that will highlight the need for polymorphism.
 * In the program below we have two classes; Employee and Manager.
 * A manager is an employee, so we can use inheritance to derive the Manager class from the Employee
 * class. The difference between the two classes lies in the payRate. Employees are paid an hourly
 * wage, managers are paid a salary.
 *
 * The weekly pay for an employee is calculated as:
 *	pay = PayRate * HoursWorked
 * For the manager weekly pay is calculated as:
 *	pay = Salary / 52
 */

#include "main.hpp"

int main()
{
    Employee e1;
    e1.setPayRate(10.00);
    Manager m1;
    m1.setPayRate(12000.00);
    std::cout << "e1 pay: $" << e1.calcWeeklyPay();
    std::cout << "\nm1 pay: $" << m1.calcWeeklyPay();

    return 0;
}