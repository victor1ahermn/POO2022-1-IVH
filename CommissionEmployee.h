//
// Created by isabe on 3/30/2022.
//

#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include "Employee.h"

class CommissionEmployee : public Employee
{
   public:
      CommissionEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );

      void setCommissionRate( double );
      double getCommissionRate() const;

      void setGrossSales( double );
      double getGrossSales() const;

      virtual double earnings() const;
      virtual void print() const;

   private:
      double grossSales;
      double commissionRate;
};

#endif //COMMISSIONEMPLOYEE_H
