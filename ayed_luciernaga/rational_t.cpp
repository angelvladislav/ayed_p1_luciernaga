// AUTOR: Lucía Marina Vera
// FECHA: 15 / 02 / 24
// EMAIL: alu0101619248@ull.edu.es
// VERSIÓN: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html



#include "rational_t.hpp"

// constructor de la clase rational_t
rational_t::rational_t(const int n, const int d)
{
  assert(d != 0);
  num_ = n, den_ = d;
}

// getter de la variable num_
int
rational_t::get_num() const
{
  return num_;
}


// getter de la variable den_
int
rational_t::get_den() const
{
  return den_;
}


// setter de la variable num_  
void
rational_t::set_num(const int n)
{
  num_ = n;
}


//setter de la variable den_ 
void
rational_t::set_den(const int d)
{
  assert(d != 0);
  den_ = d;
}


//calcula el valor
double
rational_t::value() const
{ 
  return double(get_num()) / get_den();
}


//comparaciones
bool
rational_t::is_equal(const rational_t& r, const double precision) const
{ return(fabs(value() - r.value()) < precision);

}


bool
rational_t::is_greater(const rational_t& r, const double precision) const
{ return((value() - r.value()) > precision); 

}


bool
rational_t::is_less(const rational_t& r, const double precision) const
{ return((r.value() - value()) > precision);
}

// operaciones
rational_t rational_t::add(const rational_t& r)
{
  int a = num_ , b = den_, c = r.num_, d = r.den_;
  return rational_t(a*d + b*c, b*d);
}


rational_t
rational_t::substract(const rational_t& r)
{
  int a = num_ , b = den_, c = r.num_, d = r.den_;
  return rational_t(a*d - b*c, b*d);
}



rational_t
rational_t::multiply(const rational_t& r)//métodos de lectura
{
  int a = num_ , b = den_, c = r.num_, d = r.den_;
  return rational_t(a*c, b*d);
}



rational_t
rational_t::divide(const rational_t& r)
{
  int a = num_ , b = den_, c = r.num_, d = r.den_;
  return rational_t(a*d, b*c);
}

rational_t
rational_t::inverso(const rational_t& r)
{
  int a = num_ , b = den_;
  return rational_t(b, a);
}

//métodos de escritura
void
rational_t::write(ostream& os) const
{
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}

void
rational_t::write_sin_value(ostream& os) const
{
  os << get_num() << "/" << get_den() << endl;
}


//métodos de lectura
void 
rational_t::read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}