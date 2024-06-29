#include <stdio.h>
#include <stdlib.h>

void add(float numOne,float numTwo){
    float total = numOne + numTwo;
    printf("%.2f + %.2f = %.2f\n",numOne,numTwo,total);
}
void substract(float numOne,float numTwo){
    float total = numOne - numTwo;
    printf("%.2f - %.2f = %.2f\n",numOne,numTwo,total);
}
void mul(float numOne,float numTwo){
    float total = numOne * numTwo;
    printf("%.2f * %.2f = %.2f\n",numOne,numTwo,total);
}
void divide(float numOne,float numTwo){
    float total = numOne / numTwo;
    printf("%.2f / %.2f = %.2f\n",numOne,numTwo,total);
}
void mod(float numOne,float numTwo){
    int total = (int)numOne % (int)numTwo; //fmod from math to get mod of floats
    printf("%d mod %d = %d\n",(int)numOne,(int)numTwo,total);
}
int main()
{
    float numOne;
    float numTwo;
    printf("Enter first number: ");
    scanf("%f",&numOne);
    printf("Enter second number: ");
    scanf("%f",&numTwo);
    add(numOne,numTwo);
    substract(numOne,numTwo);
    mul(numOne,numTwo);
    divide(numOne,numTwo);
    mod(numOne,numTwo);
    return 0;
}
