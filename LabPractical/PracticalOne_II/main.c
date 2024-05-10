#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("6)\n");
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
    printf("oval\n");
    printf("   ***   \n");
    printf(" *     * \n");
    for(int i=0;i<5;i++){
        printf("*       *\n");
    }
    printf(" *     * \n");
    printf("   ***   \n");
    printf("arrow\n");
    printf("  *  \n");
    printf(" *** \n");
    printf("*****\n");
    for(int i=0;i<6;i++){
        printf("  *  \n");
    }
    printf("diamond\n");
    printf("    *    \n");
    printf("   * *   \n");
    printf("  *   *  \n");
    printf(" *     * \n");
    printf("*       *\n");
    printf(" *     * \n");
    printf("  *   *  \n");
    printf("   * *   \n");
    printf("    *    \n");
    printf("7)\n");
        printf("  S   SSS\n");
        printf(" S   S    S\n");
        printf("S    S     S\n");
        printf(" S   S    S\n");
        printf("  SSS    S\n");
        printf("NNNNNNNNNN\n");
        printf("        N \n");
        printf("      N\n");
        printf("    N\n");
        printf("  N\n");
        printf("NNNNNNNNNN\n");
        printf("DDDDDDDDDD\n");
        printf("D        D\n");
        printf("DD      DD\n");
        printf("  DDDDD\n");
        printf("8)\n");
        printf("8 printf lines\n");
        printf("********\n");
        printf(" ********\n");
        printf("********\n");
        printf(" ********\n");
        printf("********\n");
        printf(" ********\n");
        printf("********\n");
        printf(" ********\n");
        printf("\nfor loop\n");
        for(int i=0;i<4;i++){
            printf("********\n");
        printf(" ********\n");
        }
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
        printf("Perimeter of the circle with radius %lf inches: %lf inches\n",circleR,getCirclePerimeter(circleR));
        printf("Area of the circle with radius %lf inches: %lf inches squared\n",circleR,getCircleArea(circleR));
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
        printf("\n14\n");
        printf("Sum of 64/8: %d",64/8);





    return 0;
}
