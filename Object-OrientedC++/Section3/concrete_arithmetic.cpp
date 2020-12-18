//==============================================================================
//Author: James Anthony Ortiz
//File: concrete_arithmetic.cpp 
//Description: Example of a concrete type in C++11
//Compile: g++ -std=c++11 -Wall -Wextra concrete_artihmetic.cpp -o conc_arith
//=============================================================================


class complex{
  double re, im; //Representation of two doubles
public:
  //Construct complex obj. with two scalar values
  complex(double r, double i): re{r}, im{i}
  {}
  //Construct complex obj. with one scalar 
  complex(double r): re{r}, im{0}
  {}
  //Default constructor: (0, 0)
  complex(): re{0}, im{0}
  {}

  
  double real() const {return re;}
  void real(double d) {re = d;}
  double imag() const {return im;}
  void imag(double d){im = d;}

  //Add re and im, then return result:
  complex& operator+=(complex z){
    re+=z.re;
    im+=z.im;
    return *this;
  }

  //Substract re and im, and return result:
  complex& operator-=(complex z){
    re-=z.re;
    im-=z.im;
    return *this;
  }

  //Defined *= & /= operators:
  complex& operator*=(complex z){
    re*=z.re;
    im*=z.im;
    return *this;
  }
  complex& operator/=(complex z){
    re/=z.re;
    im/=z.im;
    return *this;
  }
};//End Class complex

//Addition Operator
complex operator+(complex a, complex b){
  return a+=b;
}

//Substraction operator:
complex operator-(complex a, complex b){
  return a-=b;
}

//Unary minus operator:
complex operator-(complex a){
  return {-a.real(), -a.imag()};
}

//Multiplication operator:
complex operator*(complex a, complex b){
  return a*=b;
}

//Divison operator:
complex operator/(complex a, complex b){
  return a/=b;
}

//Equality operator:
bool operator==(complex a, complex b){
  return (a.real() == b.real() && a.imag() == b.imag());
}

//Negation operator
bool operator!=(complex a, complex b){
  return !(a==b);
}


//Main driver for complex class
int main(void){

  complex a{2.3};
  complex b{1/a};
  complex c{a+a*complex{1, 2.3}};
  if(c != b){ c = -(b/a)+2*b;}
  
  return 0;
}
