#include "main.h"
int squareroof(int n, int i)
/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else 
		return (squareroof(n, (n + 1) / 2));
}
/**
 * squareroof - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int squareroof(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else 
		return (squareroof(n, i - 1));
}
