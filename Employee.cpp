//
// Created by isabe on 3/30/2022.
//

#include <iostream>
#include "Employee.h"
using namespace std;

//Constructor. Asigna pseudonimos para las variables firstName, lastName y socialSecurityNumber.

Employee::Employee( const string &first, const string &last, const string &ssn): firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{
   //empty
}

void Employee::setFirstName(const string &first)
{
   firstName = first;
}

string Employee::getFirstName() const
{
   return firstName;
}

void Employee::setLastName(const string &last)
{
   lastName = last;
}

string Employee::getLastName() const
{
   return lastName;
}

void Employee::setSocialSecurityNumber(const string &ssn)
{
   socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;
}

//Imprime el nombre, apellido y ssn del empleado a través de los returns de las funciones get.
void Employee::print() const
{
   cout << getFirstName() << ' ' << getLastName()
      <<"\nsocial security number: " << getSocialSecurityNumber();
}
