#ifndef BIBLIOTHEQUE_H_INCLUDED
#define BIBLIOTHEQUE_H_INCLUDED

typedef struct Fraction Fraction
  struct Fraction 
  {
     int numerator;
     int denominator;
  }

void read ();
void divide (Fraction first, Fraction second);
void multiply (Fraction first, Fraction second);
void add (Fraction first, Fraction second);
void substract (Fraction first, Fraction second);
void simplify (Fraction first, Fraction second);


#endif // BIBLIOTHEQUE_H_INCLUDED
