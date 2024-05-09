#include <stdio.h>

int main(){
    int myNum = 15;
    int myNewNum;
    myNewNum = myNum;
    printf("My new num is my old num now: %d\n",myNewNum);
    int a = 5;
    int b = 10;
    int sum = a + b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("added in printf itself %d\n",a+b);
    int x,y,z;
    x=y=z=40;
    printf("Same value taken by multi var of same type added here %d\n",x+y+z);
    return 0;
}
