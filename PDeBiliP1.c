//Paul DeBili CSCI 2212 Program 1
//GPA Calculations


#include <stdio.h>
#include <stdlib.h>

void header();
void array_add(double gpa[], double *total, int counter);
void gpa_output(double gpa[], double total, int counter, int arraySize);

int main()
{
    header();
    double gpa[] = {3.0, 4.0, 2.5, 3.7, 2.5, 0, 1.2, 3.3, 4.0};
    int counter = 0;
    double gpaTotal = 0;
    int arraySize = 0;

    counter = sizeof(gpa)/sizeof(double);
    array_add(gpa, &gpaTotal, counter);
    //printf("%.2f\n", gpaTotal);
    arraySize = sizeof(gpa);

    gpa_output(gpa, gpaTotal, counter, arraySize);
    //printf("%i", counter);

    return 0;
}

void array_add(double gpa[], double *total, int counter)
{
    int loopCounter = 0;
    double gpaTotal = 0;
    for(;;){
        gpaTotal = gpa[loopCounter] + gpaTotal;
        //printf("%.2f\n", gpaTotal);//gpa[loopCounter]);
        loopCounter++;
        if(loopCounter==counter){break;}
    }
    *total = gpaTotal;

}

void gpa_output(double gpa[], double total, int counter, int arraySize)
{
    double gpaAvg = 0;
    int arrayCounter = 0;
    //int arraySize= sizeof(gpa);
    printf("The GPAs for my grades are:");
    for(;;){
            if(arrayCounter == counter){
                    printf("\n");
                    break;}
                printf(" %.2f", gpa[arrayCounter]);
                arrayCounter++;
    }
    gpaAvg=total/counter;
    printf("My average GPA is: %.2f\n", gpaAvg);
    printf("My array length is: %i\n", counter);
    printf("My array size is: %i\n\n", arraySize);

    //printf("%.2f",total);

}

void header()
{
    printf("Paul DeBili Program 1 CSCI 2212\n\n");
}

/*Paul DeBili Program 1 CSCI 2212

The GPAs for my grades are: 3.00 4.00 2.50 3.70 2.50 0.00 1.20 3.30 4.00
My average GPA is: 2.69
My array length is: 9
My array size is: 72


Process returned 0 (0x0)   execution time : 0.027 s
Press any key to continue.
*/

