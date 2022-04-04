//
// Created by isabe on 3/30/2022.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
   public:

   // Constructor
      Employee(const string &, const string &, const string &);

   /** Sets y gets con "const": las variables string no podrán ser
    * modificadas después de haberse inicializado.
    */
      void setFirstName( const string & );
      string getFirstName() const;

      void setLastName( const string & );
      string getLastName() const;

      void setSocialSecurityNumber( const string & );
      string getSocialSecurityNumber() const;

      /** Metodos virtual: earnings es puro, no está implementado en el cpp
       * de EMPLOYEE, mas debe de aparecer en todas las demás clases. Ambas funciones
       * solo son de lectura y no pueden modificar atributos del objeto.
       */
      virtual double earnings() const= 0;
      virtual void print() const;

   private:
      string firstName;
      string lastName;
      string socialSecurityNumber;
};

#endif //EMPLOYEE_H
