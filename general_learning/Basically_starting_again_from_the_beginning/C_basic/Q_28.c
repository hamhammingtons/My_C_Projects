#include <stdio.h>
int main() {
    float numbers[5], total=0, avg; // Declare an array to store 5 numbers, and variables for total and average
    int j, pctr=0; // Declare variables for loop counter and positive count

    // Prompt user for five numbers and store them in the array
    printf("\nInput the first number: "); 
    scanf("%f", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%f", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%f", &numbers[2]);
    printf("\nInput the fourth number: "); 
    scanf("%f", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%f", &numbers[4]);

    for(j = 0; j < 5; j++) {
        if(numbers[j] > 0) // Check if the number is positive
        {
            pctr++; // Increment positive count
            total += numbers[j]; // Add positive number to total
        }   
    }

    avg = total/pctr; // Calculate average of positive numbers

    // Print the counts of positive numbers and the average
    printf("\nNumber of positive numbers: %d", pctr);
    printf("\nAverage value of the said positive numbers: %.2f", avg);
    printf("\n");

    return 0;
}
