# include<stdio.h>

int main(void) {
		const int NUM_ELEMENTS = 10;
		int userVals[10];
		int i;
		int maxVal;

		printf("Please enter the %d integer values: \n", NUM_ELEMENTS);
		/* iterate through each indices as long as the index is
		less than the number of elements the user wants to input (10)*/
		for (i = 0; i < NUM_ELEMENTS; ++i) {
			printf("Value: ");
			scanf_s("%d", &userVals[i]);
		}
		/* This is the largest indices thus far, which makes sense since
		we will start our iteration with [0]*/
		maxVal = userVals[0];

		/* note that this for loop is exactly the same as our first for
		loop. We initialize variable i with 0, then as long as variable i
		is less than the input we recieved initially from the user, we will
		execute the for loop's clause*/
		for (i = 0; i < NUM_ELEMENTS; ++i) {
			if (userVals[i] > maxVal) {
				maxVal = userVals[i];
			}
		}

		printf("Max: %d\n", maxVal);

		return 0;

}