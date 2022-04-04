#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "DailyEmployee.h"
using namespace std;

int main()
{
   // Determina el formato en el que se imprimen los flotantes
   cout << fixed << setprecision( 2 );

   // Crea un vector de tamaño 5 en el que se agragan apuntadores a objetos de clase Employee
   vector < Employee * > employees( 5 );

   // Inicialización del vector
   employees[ 0 ] = new SalariedEmployee( "John", "Smith", "111-11-1111", 800 );
   employees[ 1 ] = new HourlyEmployee( "Karen", "Price", "222-22-2222", 16.75, 40 );
   employees[ 2 ] = new CommissionEmployee( "Sue", "Jones", "333-33-3333", 10000, .06 );
   employees[ 3 ] = new BasePlusCommissionEmployee( "Bob", "Lewis", "444-44-4444", 5000, .04, 300 );
   employees[ 4 ] = new DailyEmployee( "Isabella", "Victoria", "555-55-5555", 3000, 25 );

   // Ciclo polimórfico para imprimir información de cada tipo de empleado
   for ( size_t i = 0; i < employees.size(); i++ )
   {
      employees[ i ]->print();
      cout << endl;

      // Downcast de puntero
      BasePlusCommissionEmployee *derivedPtr = dynamic_cast < BasePlusCommissionEmployee * > ( employees[ i ] );
      // Condicional para determinar si apunta a un empleado de tipo base-salary commission
      if ( derivedPtr != 0 )
      {
         double oldBaseSalary = derivedPtr->getBaseSalary();
         cout << "Old base salary: $" << oldBaseSalary << endl;
         derivedPtr->setBaseSalary( 1.10 * oldBaseSalary );
         cout << "New base salary with 10% increase is: $" << derivedPtr->getBaseSalary() << endl;
      }

      cout << "Earned $" << employees[ i ]->earnings() << "\n\n";

   } //finaliza for

   // Elimina el objeto creado para almacenar los elementos del vector
   for ( size_t j = 0; j < employees.size(); j++ )
   {
      cout << "Deleting object of " << typeid( *employees[ j ] ).name() << endl;

      delete employees[ j ];
   } //finaliza for

} //finaliza main
