#include <stdio.h>
#include <stdlib.h>

int main()
{   printf("Assignment 2\n");
    printf("1)\n");
    char revOrder[30];
    printf("Enter a word(no of char<30): ");
    scanf("%s",revOrder);
    //int length = sizeof(revOrder) / sizeof(revOrder[0]); //sizeof gives the byte size of any datatype
    int length = strlen(revOrder); //strlen counts the memory locations till null
    for(int i=length-1;i>=0;i--){
        printf("%c",revOrder[i]);
    }
    printf("\n2)\n");
    int a =125,b = 12345;
    long ax = 123456790; //4 bytes(int) , 32 bit signed int
    short s = 4043;  //2 bytes less than int
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890; //32 bit unsigned int, doesnt use bits to store signs
    printf("a =125 \n b = 12345 \n ax = 123456790 \n s = 4043\n x = 2.13459 dx = 1.1415927 \n c = 'W' \n ux = 2541567890");
    printf("a + c = %d\n",a+c);
    printf("x + c = %d\n",x+c);
    printf("dx + x = %df\n",dx+x);
    printf("a + x = %f\n",(float)a+x);
    printf("s + b = %d\n",s+b);
    printf("ax + b = %d\n",ax+b);
    printf("s + c = %d\n",s+c);
    printf("ax + c = %d\n",ax+c);
    printf("ax + ux = %d\n",ax+ux);
    printf("\n3)\n");
    float celsius;
    printf("Eneter temparature(C): ");
    scanf("%f",&celsius);
    void Convert(float celsius){
        float faren = celsius*9.0/5.0+32.0;
        printf("%.2f C converted to Fahrenheit = %.2f F",celsius,faren);
    }
    Convert(celsius);
    printf("\n4)\n");
    float distance;
    float fuel;
    printf("Enter distance(km): ");
    scanf("%f",&distance);
    printf("Enter fuel(L): ");
    scanf("%f",&fuel);
    void Consumption(float distance,float fuel){
        float AvgConsumption = distance/fuel;
        printf("Average consumption = %.3f Km/lt",AvgConsumption);
    }
    Consumption(distance,fuel);
    printf("\n5)\n");
    float side;
    printf("Enter length of a side: ");
    scanf("%f",&side);
    void VolCube(float side){
        float cubeVolume = side*side*side;
        printf("Volume of the cube = %.2f",cubeVolume);
    }
    VolCube(side);
    printf("\n6)\n");
    float radius;
    float height;
    float pi = 3.14159;
    printf("Enter radius: ");
    scanf("%f",&radius);
    printf("Enter height: ");
    scanf("%f",&height);
    void volCylinder (float radius,float height){
        float cylinderVolume = pi*radius*radius*height;
        printf("Volume of the cylinder = %.3f",cylinderVolume);
    }
    volCylinder(radius,height);







    return 0;
}
