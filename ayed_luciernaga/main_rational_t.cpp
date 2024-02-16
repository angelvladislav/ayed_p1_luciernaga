// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html
// COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include <iostream>
#include <cmath>

// pauta de estilo [41]: ficheros de cabecera agrupados y separados

#include "rational_t.hpp"

using namespace std;

int main() {
  
  rational_t a(1, 2), b(3), c;

  cout << "a.value()= " << a.value() << endl;
  cout << "b.value()= " << b.value() << endl;
  cout << "c.value()= " << c.value() << endl;

//escribe a
  cout << "a: ";
  a.write();

//escribe b bool is_zero(const rational_t&, const double precision = EPSILON) const;
  cout << "b: ";
  b.write();

// escribe c
  c.read();
  cout << "c: ";
  c.write();

  // FASE II
  rational_t x(1, 3), y(2, 3); //declaración de dos racionales
  x.write();
  y.write();
  cout << "x == y? " << (x.is_equal(y) ? "true" : "false") << endl;
  cout << "x > y? " << (x.is_greater(y) ? "true" : "false") << endl;
  cout << "x < y? " << (x.is_less(y) ? "true" : "false") << endl;
  
  // FASE III
  cout << "a + b: "; //realiza la salida de la suma de a y b
  a.add(b).write();
  
  cout << "b - a: ";     //realiza la salida de la resta de a y b
  b.substract(a).write();

  cout << "a * b: ";      //realiza la salida de la producto de a y b
  a.multiply(b).write();
  
  cout << "a / b: ";      //realiza la salida de la suma de a y b
  a.divide(b).write();
  
  cout << "El inverso de a: ";
  a.inverso(a).write_sin_value(); //realiza salida de b entre a

  return 0;
}