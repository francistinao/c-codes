/*A C++ Program that commands the user to input a kilometers value  
to convert into miles */

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int kmPerHour; //value for kilometers
    float milesPerHour = 0.6124; //value for miles
    float convertion; //The actual conversion from km to m

    printf("Enter value for km: ");
    scanf("%d",&kmPerHour); //The program will ask the user to input the data he/she wanted

    convertion = kmPerHour * milesPerHour; //The formula for the conversion

    printf("The value of the conversion from km to m is: %f",convertion);

    return 0;
}