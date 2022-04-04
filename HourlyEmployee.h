//
// Created by isabe on 3/30/2022.
//

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee
{
   public:
      static const int hoursPerWeek = 168; //Num. horas en una semana

      HourlyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );

      void setWage( double );
      double getWage() const;

      void setHours( double );
      double getHours() const;

      virtual double earnings() const;
      virtual void print() const;

   private:
      double wage;
      double hours;
};


#endif //HOURLYEMPLOYEE_H
