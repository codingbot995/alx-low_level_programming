#include <stdio.h>

/**
 * @brief Adds two numbers.
 *
 *
 * @param a The first number.
 * @param b The second number.
 * @return The sum of the two numbers.
 */
int sum(int a, int b)
{
    return (a + b);
}

/**
 * @brief Subtracts two numbers.
 *
 * @param b The second number.
 * @return The difference of the two numbers.
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * @brief Computes the remainder of the division of two numbers.
 *
 *
 * @param a The dividend.
 * @param b The divisor.
 * @return The remainder of the division.
 */
int mod(int a, int b)
{
   if (b == 0)
   {
   	printf("Error:Division by zero\n");
	return 0;
   }
   return (a % b);
}

/**
 * @brief Divides two numbers.
 *
 *
 * @param a The dividend.
 * @param b The divisor (should not be zero).
 * @return The result of the division.
 */
int div(int a, int b)
{
    if (b == 0)
    {
    	printf("Error:Division by zero\n");
	return 0;
    }
    return (a / b);
}

/**
 * @brief Multiplies two numbers.
 *
 *
 * @param a The first number.
 * @param b The second number.
 * @return The product of the two numbers.
 */
int mul(int a, int b)
{
    return (a * b);
}
