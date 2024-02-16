// AUTOR: Lucía Marina Vera
// FECHA: 15 / 02 / 24
// EMAIL: alu0101619248@ull.edu.es
// VERSIÓN: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#pragma once

#include <iostream>
#include <cassert>
#include <cmath>


# define EPSILON 1e-6

using namespace std;

class rational_t
{
  
public: //Elementos públicos
  // constructor de la clase rational_t
  rational_t(const int = 0, const int = 1); 
  // destructor de la clase rational_t
  ~rational_t() {}
  

  // getter de la variable num_
  int get_num() const;
  // getter de la variable den_
  int get_den() const;
  
  // setter de la variable num_
  void set_num(const int);
  //setter de la variable den_
  void set_den(const int);
  //calcula el valor
  double value(void) const;

  // FASE II
  bool is_equal(const rational_t&, const double precision = EPSILON) const;
  bool is_greater(const rational_t&, const double precision = EPSILON) const;
  bool is_less(const rational_t&, const double precision = EPSILON) const;

  
  // FASE III
  rational_t add(const rational_t&);
  rational_t substract(const rational_t&);
  rational_t multiply(const rational_t&);
  rational_t divide(const rational_t&);
  rational_t inverso(const rational_t&);

  //métodos de escritura
  void write(ostream& = cout) const;
  void write_sin_value(ostream& = cout) const;

  //métodos de lectura
  void read(istream& = cin);
  
private: //Elementos privado
  //nombre de los atributos seguido de "_"
  int num_, den_;
};
