#include <stdio.h>
#include <stdlib.h>

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
        printf("8 printf\n");
        printf("********\n");
        printf(" ********\n");
        printf("********\n");
        printf(" ********\n");
        printf("********\n");
        printf(" ********\n");
        printf("********\n");
        printf(" ********\n");
        printf("for\n");
        for(int i=0;i<4;i++){
            printf("********\n");
        printf(" ********\n");
        }
        printf("9)\n");
        int getArea(int h,int w){
            int area = h*w;
            return area;
        }
        int height =7;
        int width = 5;
        printf("Area of the rectangle: %d",getArea(height,width));


    return 0;
}
