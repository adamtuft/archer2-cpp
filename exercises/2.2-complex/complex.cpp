#include "complex.hpp"
#include <cmath>



double const& Complex::real() const {
  return re;
}

double const& Complex::imag() const {
  return im;
}

Complex Complex::conj() const {
  return Complex{re, -im};
}

double Complex::norm() const {
  return std::sqrt(norm2());
}

double Complex::norm2() const {
  return re*re + im*im;
}

bool operator==(Complex const& a, Complex const& b) {
  return (a.re == b.re) && (a.im == b.im);
}
bool operator!=(Complex const& a, Complex const& b) {
  return !(a == b);
}

Complex operator+(Complex const& a, Complex const& b) {
  return Complex{a.re + b.re, a.im + b.im};
}


Complex operator*(Complex const& a, Complex const& b) {
  // (a + ib)*(c + id) == (a*c - b*d) + i(b*c + a*d)
  return Complex{a.re*b.re - a.im*b.im, a.im*b.re + a.re*b.im};
}

Complex operator-(Complex const& a) {
  return Complex{-a.re, -a.im};
}

Complex operator-(Complex const& a, Complex const& b) {
  return Complex{a.re-b.re, a.im-b.im};
}