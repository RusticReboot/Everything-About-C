#include <stdio.h>
int main()
{
    // Integer data types

    short s = 350; // smallest brother

    int i = 5000; // bigger brother of short-- can store numbers larger than what short can store

    long l = 10000;       // twin of int-- both have same range
    long long ll = 20000; // biggest brother

    // Decimal data types
    float f = 534;
    double dl = 100;

    long double dll = 54.76765545564353;

    // Addition +  ----  adding two numbers; operand on the right of the operator is added to the operand on the left of the operator

    int result_addition = s + i;
    printf("\nAddtion: %d", result_addition);

    // Subtraction -   ----- subtraction of two numbers; order is necessary here

    int result_subtraction = f / ll;
    printf("\nSubtraction: %d", result_subtraction);

    // Multiplication * ----- multiplying two numbers; order is not necessary
    float result_multiplication = f * ll;
    printf("\nMultiplication: %.2f", result_multiplication);

    // Division /  ---- dividing one number by another; order is necessary

    // Datatype conversion is required---- one of the operands datatype should be of a decimal data type as well as the result variable

    float result_division = ll / l;
    printf("\nDivision: %f", result_division);

    // Run this code separately

    // float ll= 22522;
    // long l= 10000;
    // float result_division= ll/l;
    // printf("\nDivision: %f",result_division);

    // Remainder % ---- divides one number by another and returns the remainder; order is important
    // Datatype conversion is required-- all of the variables should be of integer data type

    short result_remainder = l % i;
    printf("\nRemainder: %hd", result_remainder);

    // Run this code separately in another file

    // int dl= 100;
    // long f= 534;
    // short result_remainder= f%dl;
    // printf("\nRemainder: %hd",result_remainder);

    return 0;
}