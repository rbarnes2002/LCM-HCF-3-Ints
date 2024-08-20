//Riley Barnes CS 12600
//Assignment 1 Problem 4
//C Program that calculates the HCF and LCM of 3 integers
//referenced site is in the READ ME.txt file in case the link is what was cuasing the issue
#include <stdio.h>

//calculates the greatest common divisor
int calculateHighestCommonFactor(int num1, int num2) { //takes the two integers num1 and num2
	while (num1 != num2) {
		//keeps subtracting the smaller number from the larger number until they are equal thus creating the HCF
		if (num1 > num2)
			num1 -= num2;
		else
			num2 -= num1;
	}
return num1; //returns the HCF after it is done
}

//calculates the least common multiple
int calculateLeastCommonMultiple(int num1, int num2) { //takes the two integers again num1 and num2
	return (num1 * num2) / calculateHighestCommonFactor(num1, num2); //LCM is calculated by the product of num1 and num2 divided by thier highest common factor
}

int main() {
	int x, y, z;

	//take user input for the first integer
	printf("Please input the first integer value: ");
	scanf("%d", &x);

	//take user input for the second integer
	printf("Please input the second integer value: ");
	scanf("%d", &y);

	//take user input for the third integer
	printf("Please input the third integer value: ");
	scanf("%d", &z);

	//call the functions to calculate the LCM and HCF
	int highestCommonFactor = calculateHighestCommonFactor(x, calculateHighestCommonFactor(y, z));
	int leastCommonMultiple = calculateLeastCommonMultiple(x, calculateLeastCommonMultiple(y, z));

	//print the results
	printf("The Highest Common Factor of the 3 integers you inputted: %d\n", highestCommonFactor);
	printf("The Least Common Multiple of the 3 integers you inputted: %d\n", leastCommonMultiple);

	return 0; //exit
}