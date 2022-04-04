//
// Created by isabe on 3/30/2022.
//

#include <iostream>
#include "DailyEmployee.h"
using namespace std;

DailyEmployee::DailyEmployee( const string &first, const string &last, const string &ssn, double dailyWage, double workedDays ) : Employee( first, last, ssn)
{
   setDailyWage( dailyWage );
   setWorkedDays( workedDays );
}

void DailyEmployee::setDailyWage( double dailyWage )
{
   this-> dailyWage = (dailyWage < 0.0 ? 0.0 : dailyWage );
}

double DailyEmployee::getDailyWage() const
{
   return dailyWage;
}

void DailyEmployee::setWorkedDays( double workedDays )
{
   this-> workedDays = (workedDays < 0.0 ? 0.0 : workedDays );
}

double DailyEmployee::getWorkedDays() const
{
   return workedDays;
}

double DailyEmployee::earnings() const
{
   if( getWorkedDays() > 0 )
      return getDailyWage() * getWorkedDays();
}

void DailyEmployee::print() const
{
   cout << "daily employee: ";
   Employee::print();
   cout << "\ndaily wage: " << getDailyWage() << "; days worked: " << getWorkedDays();

}