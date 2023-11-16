/**
 * @file Employee.h
 * @author Jesse Doescher
 * @date 2023-11-16
 * @brief This file is the baseline file for all files
 * 
 * This file is the baseline for all files. It describes both the barebones parameters as well as general parameters.
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * This class defines Employee
 *
 * @class Employee Employee.h "Employees/Employee.h"
 * @brief Employee Class
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * This function prints the stuff related to Employee
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual void print();

/**
 * this function calculates the payment of the Employee
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * This function calculates the anniversery day of the employee
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void anniversary();

/**
 * This function initializes Employee
 *
 * @pre 
 * @post 
 * 
 */
  Employee();

/**
 * This function creates a new employee from conditions
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @pre 
 * @post 
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
