#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point for the calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description:
 * This function performs basic arithmetic operations on two integers based on
 * the operator provided as a command-line argument. It checks for the correct
 * number of arguments, validates the operator, and prints the result.
 *
 * Return:
 * - 0: If the program runs successfully.
 * - 98: If the number of arguments is incorrect.
 * - 99: If an invalid operator is provided.
 */
int main(int argc, char *argv[])
{
char *operator;
int num1, num2;
int result;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];

operation = get_op_func(operator);

if (operation == NULL)
{
printf("Error\n");
exit(99);
}
result = operation(num1, num2);

printf("%d\n", result);
return (0);

}
