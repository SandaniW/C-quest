#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myInt;
    char myChar;
    float myFloat;
    double myDouble;
    printf("Memory Size of a diff var types, specifier is lu cuz the sizeof returns long unsigned int\n");
    printf("int %lu\n",myInt);
    printf("char %lu\n",myChar);
    printf("float %lu\n",myFloat);
    printf("double %lu\n",myDouble);
    printf("\n\n");
    printf("In type conversion when int 5/2 it gives 2 for int sum\n");
    printf("when int 5/2 then float sum gives 2.0\n");
    printf("since the var dividing itself are int the end result doesnt get the decimal\n");
    int a = 5;
    int b = 3;
    int sumInt = a/b;
    float sumTwo = a/b;
    printf("int sum %d and float sum %f\n",sumInt,sumTwo);
    float sumConvert = (float) a/b;
    printf("when the division itself is done as a converted float %f\n",sumConvert);
    return 0;
}
