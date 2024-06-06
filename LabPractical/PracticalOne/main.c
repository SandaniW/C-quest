#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Practical 01\n");
    printf("1)\n");
    printf("Name  :Sandani Wickramanyake\n");
    printf("DOB   :June 04,2003\n");
    printf("Mobile:070-6455886\n");
    printf("\n");
    printf("2)");
    printf("You are 10 years old. You are too young to play the game.\n");
    printf("\n");
    printf("3)\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<4;i++){
        printf("*");
    }
    printf("\n\n");
    printf("4)\n");
    int i=0;
    while(i<7){
        printf("#");
        if(i==0){
            for(int j=0;j<5;j++){
                printf("#");
            }

        }
        if(i==3){
            for(int k=0;k<4;k++){
                printf("#");
            }
        }

        printf("\n");
        i++;
    }
    printf("\n5)\n");
    i=0;
    while(i<9){
        if((i==0)||(i==8)){
            printf("  ");
            for(int j=0;j<6;j++){
                printf("#");
            }
// || is logical or
        }
        if((i==1)||(i==7)){
            printf(" ");
            for(int j=0;j<2;j++){
                printf("#");
            }
            printf("    ");
            for(int j=0;j<1;j++){
                printf("#");
            }

        }
        printf("#");
        printf("\n");
        i++;
    }
    printf("\n6)\n");
    printf("rec\n");
    for(int i=0;i<10;i++){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<7;i++){
        printf("*        *\n");
    }
    for(int i=0;i<10;i++){
        printf("*");
    }
    printf("\n");
    printf("oval->\n\n");
    printf("   ***   \n");
    printf(" *     * \n");
    for(int i=0;i<5;i++){
        printf("*       *\n");
    }
    printf(" *     * \n");
    printf("   ***   \n");
    printf("arrow->\n\n");
    printf("  *  \n");
    printf(" *** \n");
    printf("*****\n");
    for(int i=0;i<6;i++){
        printf("  *  \n");
    }
    printf("diamond->\n\n");
    printf("    *    \n");
    printf("   * *   \n");
    printf("  *   *  \n");
    printf(" *     * \n");
    printf("*       *\n");
    printf(" *     * \n");
    printf("  *   *  \n");
    printf("   * *   \n");
    printf("    *    \n");
    printf("\n7)\n");
        printf("  S   SSS\n");
        printf(" S   S    S\n");
        printf("S    S     S\n");
        printf(" S   S    S\n");
        printf("  SSS    S\n\n");
        printf("NNNNNNNNNN\n");
        printf("        N \n");
        printf("      N\n");
        printf("    N\n");
        printf("  N\n");
        printf("NNNNNNNNNN\n\n");
        printf("DDDDDDDDDD\n");
        printf("D        D\n");
        printf("DD      DD\n");
        printf("  DDDDD\n\n");
        printf("\n8)\n");
        printf("********\n");
        printf(" ********\n");
        printf("********\n");
        printf(" ********\n");
        printf("********\n");
        printf(" ********\n");
        printf("********\n");
        printf(" ********\n");
        printf("\n9)\n");
        int getArea(int h,int w){
            int area = h*w;
            return area;
        }
        int height =7;
        int width = 5;
        printf("Area of the rectangle: %d\n",getArea(height,width));
        printf("\n10)\n");
        double getCirclePerimeter(double r){
            double peri = 2*M_PI*r;
            return peri;
        }
        double getCircleArea(double r){
            double circleArea = M_PI*(r*r);
            return circleArea;
        }
        double circleR = 6;
        printf("Perimeter of the circle with radius %.2lf inches: %.3lf inches\n",circleR,getCirclePerimeter(circleR));
        printf("Area of the circle with radius %.2lf inches: %.3lf inches squared\n",circleR,getCircleArea(circleR));
        printf("11)\n");
        int n1 = 2;
        int n2 = 5;
        int n3 = 6;
        int sum = n1+n2+n3;
        printf("%d + %d + %d = %d \n",n1,n2,n3,sum);
        printf("\n12)\n");
        int n4 = 10;
        int n5 = 4;
        printf("Difference is: %d\n",n4-n5);
        printf("\n13)\n");
        int n6 = 20;
        int n7 = 15;
        printf("Product of %d and %d : %d\n",n6,n7,n6*n7);
        printf("\n14)\n");
        printf("Sum of 64/8: %d",64/8);
    return 0;
}
