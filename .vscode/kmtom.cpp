//C++ program that converts km (Kilometers) to m (miles)

#include <stdio.h>

using namespace std;

int main (){
    int kilometers; //datatype for kilometers
    float miles = 0.6124; //datatype for miles
    float convertion; //datatype for storing the actual value of the convertion to miles

    printf("Enter kilometers: "); 
    scanf("%d",&kilometers); //Inputs the data from the user 

    convertion = kilometers*miles;//Formula used for the convertion from km to miles
    printf("The conversion will be: %f",convertion);

    return 0;
}