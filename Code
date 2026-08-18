#include <stdio.h>

void fizzBuzzBizz(void) {
	char fizzBuzzBizz[3][12] = {"Fizz", "Buzz", "Bizz"};
	int divisionalValues[3] = {3, 5, 7};
	float userValue = 0;
	int lengthfizzBuzzBizz = sizeof(fizzBuzzBizz) / sizeof(fizzBuzzBizz[0]);

	printf("Enter your integer value.\n>> ");
	scanf("%f", &userValue);

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



int main(void) {
	fizzBuzzBizz();

	return 0;
}
