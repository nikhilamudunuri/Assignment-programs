#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Read weight in kg and height in meters[span_2](start_span)[span_2](end_span)
    printf("Enter weight in kg: 62");
    scanf("%f", &weight);
    printf("Enter height in meters: 5.9");
    scanf("%f", &height);

    // Calculate BMI as weight divided by (height * height)[span_3](start_span)[span_3](end_span)
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);

    // Classify based on the BMI ranges[span_4](start_span)[span_4](end_span)
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Category: Normal\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }

    return 0;
}