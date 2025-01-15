#include <stdio.h>

void
hello_world(int count)
{
	for (int i = 0; i < count; i++) {
		puts("Hello world in for loop in a function!");
	}
}

int
main(int argc, char *argv[])
{
	puts("World! Hello there!");

	for (int i = 0; i < 5; i++) {
		puts("Hello world in for loop!");
	}

	int x = 5;
	while (x > 0) {
		puts("Hello world in while loop!");
		x--;
	}

	hello_world(3);

	x = 5;
	do {
		puts("Hello world in do loop!");
		x--;
	} while (x < 0);

	x = 3;

	switch (x) {
		case 1:
			puts("X is 1!");
			break;

		case 2:
			puts("X is 2!");
			break;

		case 3:
			puts("X is 3!");

		case 4:
			puts("X is 4!");
			break;

		default:
			puts("X is not identified!");
			break;
	}

	/* Built-in data types
	 * int		2 or 4 bytes
	 * char		1 byte
	 * short	2 bytes
	 * long		4 bytes
	 * float	4 bytes
	 * double	8 bytes
	 * long double	10 bytes
	 * void
	 */

	/* Conditional operators
	 * >		greater than
	 * <		less than
	 * >=		greater than or equal to
	 * <=		less than or equal to
	 * ==		equal to
	 * !=		not equal
	 */

	/* Logical operators
	 * &&		AND
	 * ||		OR
	 * !		NOT
	 */

	/* Arithmetic operators
	 * +		add
	 * -		subtract
	 * *		multiply
	 * /		divide
	 * %		modulus
	 * ++		increment
	 * --		decrement
	 */

	return 0;
}
