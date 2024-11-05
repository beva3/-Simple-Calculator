#include "./calculator.h"

void run_calculator(){
    printf("run calculator ...\n");
    double n1 = 0, n2 = 0, return_value = 0;
    char operator = ' ';

    while(1){
        printf("Enter a number (or <q> to exit) : ");
        if(scanf("%lf", &n1) != 1){
            break;// exit if the input_user is 'q
        }
        printf("Enter an operator (+,-,*,/,^,r) : ");
        if(scanf(" %c", &operator) != 1){
            handle_error("Invalid operator! ");
            // continue;
        }else{
            if(operator == 'r'){
                return_value = square_root(n1);
                printf("the square root of %.2f is %.2f\n",n1,return_value);
            }else{
                printf("Enter another number : ");
                if(scanf("%lf", &n2) != 1){
                    handle_error("Invalid number! ");
                    // continue;
                }
                return_value = perform_operation(n1, n2, operator);
                printf("Result : %.2f\n", return_value);
            }
        }
    }
}

void handle_error(const char *message){
    printf("Error: %s\n", message);
}

double perform_operation(double n1, double n2,char operator){
    switch (operator){
        case '+':
            return add(n1, n2);
        case '-':
            return subtract(n1, n2);
        case '*':
            return multiply(n1, n2);
        case '/':
            return divide(n1, n2);
        case '^':
            return exponent(n1, n2);
        default:
            handle_error("Invalid operator! ");
            return 0.0;
    }
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

double exponent(double base, double exponent){
    return pow(base, exponent);
}