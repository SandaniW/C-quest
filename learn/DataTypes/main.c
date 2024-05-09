#include <stdio.h>

int main()
{
    printf("Data Types\n");
    char character = 'a';
    printf("Single quote char %c\n",character);
    char valOne = 65,valTwo = 66, valThree = 67;
    printf("ASCII values %c %c %c\n",valOne,valTwo,valThree);
    char myText[] = "HelloWorld";
    printf("Its a array of char i guess %s\n",myText); //%s for string
    double doubleInt = 7.333;
    printf("Double has 15 digits and float only 6 or 7, %lf\n",doubleInt);
    float floatNum = 7e2;
    printf("Scientific e in float  for the 10th power %f\n",floatNum);
    float precisionFloat = 5.3;
    printf("Can use a dot in the specifier before the f and specify the number of digits to be displayed like\n");
    printf("without specifying %f\n",precisionFloat);
    printf("with specifying 2 digits %.2f\n",precisionFloat);

    return 0;
}
