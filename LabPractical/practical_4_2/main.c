#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void itemQty(char item[],int i,int qty[]){
    printf("Enter the quantity of the %s purchased : ",item);
    scanf("%d",&qty[i]);

}

void headFoot(char msg[]){
    printf("\n");
    for(int i=0;i<40;i++){
        printf("-");
    }
    printf("%s",msg);
    for(int i=0;i<40;i++){
        printf("-");
    }
    printf("\n\n");
}
void lineBreak(){
    for(int i=0;i<92;i++){
        printf("_");
    }
    printf("\n");
}
void bill(float total){
    printf("TOTAL BILL AMOUNT = %.2f\n",total);
}

int main()
{
    char items[5][7] = {"bread","eggs","butter","milk","jam"};
    int price[5] = {150,100,800,500,500};
    int aSize = 5;
    int qty[aSize];
    float total = 0;



    for (int i=0;i<41;i++){
        printf("-");
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("|\t  %s",items[i]);
        int itemLength = strlen(items[i]);
        int balance = 10 - itemLength;
        for(int j=balance;j>=0;j--){
            printf(" ");

        }
        printf("- %d\t \t|\n",price[i]);

    }
    for (int i=0;i<41;i++){
        printf("-");
    }
    printf("\n\n");
    for(int i=0;i<aSize;i++){
        itemQty(items[i],i,qty); //sending entire qty array-> is the pointer to the first element
    }
    headFoot("BILL SUMMARY");
    lineBreak();
    printf("SL NO\t\t  ITEM NAME\t\t   QTY\t\t\t  PRICE\n");//13,14,21
    for(int i=0;i<aSize;i++){
        int itemLength = strlen(items[i]);
        int balance2 = 23 - itemLength;
        float itemsPrice = (float)price[i]*qty[i];


        printf("%d.\t\t     %s",i+1,items[i]);
        for(int j=0;j<balance2;j++){
            printf(" ");
        }
        printf("%d",qty[i]);
        printf("%*.2f\n",27,itemsPrice);
        total = total+itemsPrice;

    }
    lineBreak();
    bill(total);
    lineBreak();
    headFoot("HAPPY SHOPPING");

    return 0;
}
