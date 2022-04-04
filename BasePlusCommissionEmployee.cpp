//
// Created by isabe on 3/30/2022.
//

#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// Constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate, double salary ) : CommissionEmployee( first, last, ssn, sales, rate )
{
   setBaseSalary( salary );
}

void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
   baseSalary = ( ( salary < 0.0 ) ? 0.0 : salary );
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
   return baseSalary;
}

// override función earnings para calcular salario
double BasePlusCommissionEmployee::earnings() const
{
   return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const{
   cout << "base-salaried ";
   CommissionEmployee::print();
   cout << "; base salary: " << getBaseSalary();
}