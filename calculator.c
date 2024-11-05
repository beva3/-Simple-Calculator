#include "./calculator.h"

void run_calculator(){
    printf("run calculator ...\n");
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
        printf("Error: Division by zero!\n");
        return 0;
    }
    return n1 / n2;
}