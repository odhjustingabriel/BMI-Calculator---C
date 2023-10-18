#include <stdio.h>

int main() {
    float weight, height, bmi;
    char* status;

//input weight
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

//input height
    printf("Enter your height in meters: ");
    scanf("%f", &height);

//BMI descripion
    bmi = weight / (height * height);

    if (bmi < 18.5) {
        status = "underweight";
    } else if (bmi >= 18.5 && bmi < 25) {
        status = "healthy";
    } else if (bmi >= 25 && bmi < 30) {
        status = "overweight";
    } else {
        status = "obese";
    }

//BMI output
    printf("Your BMI is %.2f, which is %s\n", bmi, status);

    return 0;
}
