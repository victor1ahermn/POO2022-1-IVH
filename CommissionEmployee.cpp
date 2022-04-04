//
// Created by isabe on 3/30/2022.
//

#include <iostream>
#include "CommissionEmployee.h"

using namespace std;

// Constructor
CommissionEmployee::CommissionEmployee( const string &first, const string &last, const string &ssn, double sales, double rate ) : Employee( first, last, ssn )
{
   setGrossSales( sales );
   setCommissionRate( rate );
}

void CommissionEmployee::setCommissionRate( double rate )
{
   commissionRate = ( ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0 );
}

double CommissionEmployee::getCommissionRate() const
{
   return commissionRate;
}

void CommissionEmployee::setGrossSales( double sales )
{
   grossSales = ( ( sales < 0.0 ) ? 0.0 : sales );
}

double CommissionEmployee::getGrossSales() const
{
   return grossSales;
}

// override función earnings para calcular el salario
double CommissionEmployee::earnings() const
{
   return getCommissionRate() * getGrossSales();
}

void CommissionEmployee::print() const
{
   cout << "commission employee: ";
   Employee::print();
   cout << "\ngross sales: " << getGrossSales() << "; commission rate: " << getCommissionRate();
}