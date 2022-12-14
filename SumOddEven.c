/*
 * Sum the odd and even numbers from 1 to an upperbound
 * (SumOddEven.c)
 */
#include <stdio.h>

int main() {
	int sumOdd = 0;		// For accumulating odd numbers, init to 0
	int sumEven = 0;	// For accumulating even numbers, init to 0
	int upperbound;		// Sum from 1 to this uperbound

	printf("Enter the upperbound: ");	// Prompt user for an upperbound
	scanf("%d", &upperbound);			// Use %d to read an int

	// Use a loop to repeatedly add 1, 2, 3, ..., up to upperbound
	int number = 1;
	while (number <= upperbound) {
		if (number % 2 == 0) {	// Even numbers
			sumEven = sumEven + number;
		} else {				// Odd numbers
			sumOdd = sumOdd + number;
		}
		++number;				// Increment number by 1
	}

	// Print the results
	printf("The sum of odd numbers is %d.\n", sumOdd);
	printf("The sum of even numbers is %d.\n", sumEven);
	printf("The difference is %d.\n", (sumOdd - sumEven));

	return 0;
}
