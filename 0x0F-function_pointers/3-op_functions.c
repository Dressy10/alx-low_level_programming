#include "3-calc.h"
/**
 * op_add - adds two numbers.
 * @a: firsf number.
 * @b: second number.
 *
 * Return: add.
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: substract.
 **/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: Multiply.
 **/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: division.
 **/
int op_div(int a, int b)
{
	if (a == b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates the modules of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: module.
 **/
int op_mod(int a, int b)
{
	if (a == b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
