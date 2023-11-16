
/**
 * This class is for SUPERVISORS
 *
 * @class Supervisor
 */



/**
 * @file Supervisor.h
 * @author Jesse Doescher
 * @date 2023-11-16
 * @brief This is the file for supervisors
 * 
 * This file is the header for supervisors
 */


#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * This class is the Supervisor class, using Employee as a base
 *
 * @class Supervisor Supervisor.h "Employees/Supervisor.h"
 * @brief For Supervisor Stuff
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * This prints things
 * @pre 
 * @return void 
 * @post 
 */
  void print(); 

/**
 * This function calculates the pay
 * @pre 
 * @return double 
 * @post 
 */
  double calculatePay();

/**
 * initializer
 *
 * @pre 
 * @post 
 */
  Supervisor();
  

/**
 * This actually creates the stuff for supervisor
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param int numSupervised 
 * @pre 
 * @post 
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
