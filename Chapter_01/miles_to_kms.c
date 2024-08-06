/*
Converts distance in miles to kilometers
*/
#include <stdio.h>
#define KMS_PER_MILE 1.609

int main(void) {

    double miles, kms;

    // get the distance in miles
    printf("Enter the distance in (miles): ");
    scanf("%lf", &miles);

    // calculate kms
    kms = KMS_PER_MILE * miles;
    printf("Distance in KMS = %lf\n", kms);

    return 0;
}