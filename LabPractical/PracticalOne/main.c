#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Practical 01");
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
        printf("#");
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
    return 0;
}
