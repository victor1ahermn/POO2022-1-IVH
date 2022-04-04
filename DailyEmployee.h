//
// Created by isabe on 3/30/2022.
//

#ifndef DAILYEMPLOYEE_H
#define DAILYEMPLOYEE_H

#include "Employee.h"

class DailyEmployee : public Employee
{
   public:

      DailyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );

      void setDailyWage( double );
      double getDailyWage() const;

      void setWorkedDays( double );
      double getWorkedDays() const;

      virtual double earnings() const;
      virtual void print() const;

   private:
      double dailyWage;
      double workedDays;
};


#endif //DAILYEMPLOYEE_H
