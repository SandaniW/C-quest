#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int CONSTNUMBER = 12;
    //can't reassign
    //can't be declared without a value;
    //common practice to name it in capital
    printf("arithmetic op->\n");
    int x = 5;
    int y = 2;
    printf("x = %d and y = %d\n",x,y);
    printf("addition: %d\n",x+y);
    printf("substraction: %d\n",x-y);
    printf("multi: %d\n",x*y);
    printf("div: %d\n",x/y);
    printf("mod: %d\n",x%y);
    printf("increment: %d\n",++x);
    printf("decrement: %d\n",--x);
    printf("assignment op->\n");
    printf("x= %d\n",x);
    printf("x+=3 %d\n",x+=3);
    printf("same for -,*,/,%\n");
    x=5;
    printf("x = %d",x);
    x=5;
    printf("& ->bitwise and -> x&=3 => %d\n",x &= 3);
    x=5;
    printf("| ->bitwise or -> x|=3 => %d\n",x|=3);
    x=5;
    printf("^ -> bitwise xor -> x^=3 => %d\n",x^=3);
    x=5;
    printf("bitwise shift to right-> x>>=3 => %d\n",x>>=3);
    x=5;
    printf("bitwise shift to left-> x<<=3 => %d\n",x<<=3);
    return 0;
}
