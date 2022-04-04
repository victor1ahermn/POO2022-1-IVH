//
// Created by isabe on 3/30/2022.
//

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee
{
   public:
      SalariedEmployee( const string &, const string &, const string &, double = 0.0 );

      void setWeeklySalary( double );
      double getWeeklySalary() const;

      virtual double earnings() const;
      virtual void print() const;

   private:
      double weeklySalary;
};


#endif //EJERCICIO19_SALARIEDEMPLOYEE_H
