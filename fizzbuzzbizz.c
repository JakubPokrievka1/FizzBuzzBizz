#include <stdio.h>

void fizzBuzzBizz(void) {
	char fizzBuzzBizz[3][12] = {"Fizz", "Buzz", "Bizz"};
	int divisionalValues[3] = {3, 5, 7};
	int lengthfizzBuzzBizz = sizeof(fizzBuzzBizz) / sizeof(fizzBuzzBizz[0]);

	for (int i = 0; i <= userValue; i++) {
		int is_divisible = 1;

		for (int f = 0; f < lengthfizzBuzzBizz; f++) {
			int mod = i % divisionalValues[f];
			
			switch (mod) {
				case 0:
					printf("%s", fizzBuzzBizz[f]);
					is_divisible = 0;
					break;
			}
		}
		
		switch (is_divisible) {
			case 0:
				printf("\n");
				break;
			
			case 1:
				printf("%i\n", i);
				break;
		}
	}
}



void valueValidation(int *userValue) {
	if (*userValue >= 0) {
		fizzBuzzBizz(&*userValue);
	} else {
		printf("ERROR: INVALID INPUT ENTERED!\n");
	}
}



void userInput(void) {
	int userValue = 0;

	printf("Enter your integer value.\n>> ");
	scanf("%i", &userValue);

	valueValidation(&userValue);
}



int main(void) {
	userInput();

	return 0;
}
