#include <stdio.h>
#include <stdlib.h>


int fahToCel(int fahr); // fahrenheit function to Celcius

main()
{

    int fahr, user; 

    //This is going to the outcome of the function 

    //Get user input:
    printf("Please enter the degree in Fahrenheit converted to Celcius: \n");
    scanf("%d", &user);

    //Clearing the screen before providing the program output 
    system("clear"); 

    
    printf("Celcius\t\tFahrenheit\n");
    printf("--------\t-----------\n");
    printf("\t%14d\n", fahToCel(user)); 



    return 0; 
}


int fahToCel(int fahr)
{
    float celcius; 

     celcius = ((5.0 / 9.0) * ( fahr - 32));
     printf("%6.1f", celcius);

    return fahr; 
}