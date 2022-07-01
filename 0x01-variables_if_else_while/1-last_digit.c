#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succeess)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

