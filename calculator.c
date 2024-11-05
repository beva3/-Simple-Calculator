#include "./calculator.h"

void run_calculator(){
    printf("run calculator ...\n");
}

void handle_error(const char *message){
    printf("Error: %s\n", message);
}

double add(double n1, double n2){
    return n1 + n2;
}

double subtract(double n1, double n2){
    return n1 - n2;
}

double multiply(double n1, double n2){
    return n1 * n2;
}

double divide(double n1, double n2){
    if(n2 == 0){
        handle_error("Division by zero! ");
        return 0;
    }
    return n1 / n2;
}

double square_root(double n){
    if(n < 0){
        handle_error("Square root of a negative number! ");
        return 0;
    }
    return sqrt(n);
}