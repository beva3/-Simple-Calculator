#ifndef __CALCULATOR__
#define __CALCULATOR__

#include <stdio.h>
#include <math.h>

// function to handle error
void handle_error(const char *message);
//main qui gere l'interaction avec l'utilisateur
void run_calculator();
// additional functions
double add(double n1, double n2);
// subtract fucntin
double subtract(double n1, double n2);
// multiply function
double multiply(double n1, double n2);
// divide function with error gestions
double divide(double n1, double n2);
// square root function
double square_root(double n);
// exponent function
double exponent(double base, double exponent);

#endif // !__CALCULATOR__