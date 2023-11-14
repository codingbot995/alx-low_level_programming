#include "main.h"
/**
 *add - adds numbers duuh!
 *@a:first number
 *@b:second number
 * Return:addtion
 *
 */
int add(int a, int b) {
    return a + b;
}
/**
 *sub - subtracts
 *@a:number1
 *@b:number2
 *Return:subtraction
 */
int sub(int a, int b) {
    return a - b;
}
/**
 *mul - multiplies
 *@a:number1
 *@b:number2
 *Return:multiplication
 */
int mul(int a, int b) {
    return a * b;
}
/**
 *div - divides
 *@a:number1
 *@b:number2
 *Return:division
 */
int div(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
    return a / b;
}
/**
 *mod - performs modulus
 *@a:number1
 *@b:number2
 *Return:modulus
 */
int mod(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Modulo by zero\n");
        return 0;
    }
    return a % b;
}
