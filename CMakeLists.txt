cmake_minimum_required(VERSION 3.21)
project(ejercicio19)

set(CMAKE_CXX_STANDARD 14)

add_executable(ejercicio19 Employee.h Employee.cpp SalariedEmployee.h SalariedEmployee.cpp HourlyEmployee.h HourlyEmployee.cpp CommissionEmployee.h CommissionEmployee.cpp BasePlusCommissionEmployee.h BasePlusCommissionEmployee.cpp DailyEmployee.h DailyEmployee.cpp main.cpp)
