#include <stdio.h>
#include <stdlib.h>


void heading(char name[]){
    for(int i=0;i<9;i++){
        printf("*");
    }
    printf("%s",name);
    for(int j=0;j<15;j++){
        printf("*");
    }
    printf("\n");
}
void preparing(char prepare[]){
    for(int i=0;i<18;i++){
        printf("*");
    }
    printf("Prepare %s",prepare);
    for(int j=0;j<25;j++){
        printf("*");
    }
    printf("\n");
}
void instructions(char instruction[]){
    printf("***%s\n",instruction);
}
void breakLine(){
    for(int i=0;i<63;i++){
        printf("*");
    }
    printf("\n");
}
void addSpiceLine(){
    for(int i=0;i<24;i++){
        printf("*");
    }
    printf("Add Spices\n");
}
void addingredient(char spice[]){
    printf("***Add %s\n",spice);
}
void addingredientAmount(char spice[],float amount){
    printf("***Add %s = %.1ftsp\n",spice,amount);
}
void addTomatoeLine(char tomatoe[]){
    for(int i=0;i<33;i++){printf("*");}
    printf("%s\n",tomatoe);
}
void makeCoconutMilk(){
    preparing("Cocunut Milk");
    instructions("Scrape coconut");
    instructions("Mix with hot water");
}
void addition(float numOne,float numTwo){
    float sum = numOne + numTwo;
    printf("%.1f + %.1f = %.1f\n",numOne,numTwo,sum);
}
void substract(float numOne,float numTwo){
    float sum = numOne - numTwo;
    printf("%.1f - %.1f = %.1f\n",numOne,numTwo,sum);
}
void division(float numOne,float numTwo){
    float sum = numOne / numTwo;
    printf("%.1f / %.1f = %f\n",numOne,numTwo,sum);
}
void getPerimeter(float length,float width){
    if (length==width){
        float perimeter = length*4;
        printf("Perimeter of the square = %.2f\n",perimeter);
    }else{
        float perimeter = (length*2) + (width*2);
        printf("Perimeter of the rectangle = %.2f\n",perimeter);
    }
}
void getOddEven(int oddEven){
    if( oddEven%2 == 0){
        printf("The number %d is \"Even\"\n",oddEven);
    }else{
        printf("The number %d is \"Odd\"\n",oddEven);
    }
}
void calculation(float floatOne,float floatTwo){
    float sum = floatOne + floatTwo;
    printf("Sum is %.2f\n",sum);
    float average = sum/2;
    printf("Average is %.2f\n",average);
}
void getSquare(int sqNum){
    int getSq = sqNum*sqNum;
    printf("Square of %d is %d",sqNum,getSq);
}
void findLargeNum(int firstNum,int secondNum){
    if (firstNum ==secondNum){
        printf("numbers are equal\n");
    }else if(firstNum>secondNum){
        printf("%d is the larger number\n",firstNum);
    }else{
        printf("%d is the larger number\n",secondNum);
    }
}
void findLargestNum(int num1,int num2,int num3){
    char largeNumber[] = "%d is the largest number";
    if(num1==num2&&num2==num3){
        printf("Numbers are equal");
    }else if(num1==num2){
        if(num1>num3){
            printf(largeNumber,num1);
        }else{
            printf(largeNumber,num3);
        }
    }else if(num1==num3){
        if(num1>num2){
            printf(largeNumber,num1);
        }else{
            printf(largeNumber,num2);
        }
    }else if(num2==num3){
        if(num2>num1){
            printf(largeNumber,num2);
        }else{
            printf(largeNumber,num1);
        }
    }else if(num1>num2 && num1>num3){
        printf(largeNumber,num1);
    }else if(num2>num1 && num2>num3){
        printf(largeNumber,num2);
    }else{
        printf(largeNumber,num3);
    }
}
int main()
{
    printf("1)\n");

    heading("Dhal Curry");
    makeCoconutMilk();
    breakLine();
    instructions("Wash and Drain dhal");
    addSpiceLine();
    addingredientAmount("turmeric",0.1);
    addingredientAmount("pepper",1);
    addingredient("lemon grass");
    addingredientAmount("salt",1);
    addingredient("water");
    instructions("Cook");
    addingredient("coconut milk");
    printf("\n\n");
    heading("Potato Curry");
    makeCoconutMilk();
    breakLine();
    instructions("Wash and peel potato = 1Kg");
    addSpiceLine();
    addingredientAmount("tumeric",0.5);
    addingredientAmount("pepper",2);
    addingredient("lemon grass");
    addTomatoeLine("Add Tomatoe");
    addingredientAmount("salt",1);
    addingredient("water");
    instructions("Cook");
    addingredient("coconut milk");
    printf("\n\n");
    heading("Fish Curry");
    makeCoconutMilk();
    breakLine();
    instructions("wash the fish");
    addSpiceLine();
    addingredientAmount("turmeric",0.5);
    addingredientAmount("pepper",3);
    addingredient("lemon grass");
    addTomatoeLine("");
    addingredientAmount("salt",1);
    addingredient("water");
    instructions("Cook");
    instructions("Add coconut milk");
    printf("\n2)\n");
    printf("Sandani\tWickramanayake\n");
    printf("283/37,\nOld Kottawa Road,\nEmbuldeniya,Nugegode\n");
    printf("0\a7\a0\a6\a4\a5\a5\a8\a8\a6\a\n");
    printf("\n3)\n");
    for (int i=0;i<33;i++){
        printf("*");
    }
    printf("\n|\tSandani            \t|\n");
    printf("|\tNulanga            \t|\n");
    printf("|\tDias Wickramanayake\t|\n");
    for (int i=0;i<33;i++){
        printf("*");
    }
    printf("\n4)Add Substract Divide\n");
    float numOne;
    float numTwo;
    printf("Enter first number: ");
    scanf("%f",&numOne);
    printf("Enter second number: ");
    scanf("%f",&numTwo);
    addition(numOne,numTwo);
    substract(numOne,numTwo);
    division(numOne,numTwo);
    printf("\n5)Perimeter\n");
    float length;
    float width;
    printf("Enter length: ");
    scanf("%f",&length);
    printf("Enter width: ");
    scanf("%f",&width);
    getPerimeter(length,width);
    printf("\n6)Odd Even\n");
    int oddEven;
    printf("Enter a number: ");
    scanf("%d",&oddEven);
    getOddEven(oddEven);
    printf("\n7)Sum and Avg\n");
    float floatOne;
    float floatTwo;
    printf("Enter number one: ");
    scanf("%f",&floatOne);
    printf("Enter number two: ");
    scanf("%f",&floatTwo);
    calculation(floatOne,floatTwo);
    printf("\n8)square\n");
    int sqNum;
    printf("Enter a number: ");
    scanf("%d",&sqNum);
    getSquare(sqNum);
    printf("\n9)larger num\n");
    int firstNum;
    int secondNum;
    printf("Enter first number: ");
    scanf("%d",&firstNum);
    printf("Enter second number: ");
    scanf("%d",&secondNum);
    findLargeNum(firstNum,secondNum);
    printf("\n10)Largest num\n");
    int num1;
    int num2;
    int num3;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third numver: ");
    scanf("%d",&num3);
    findLargestNum(num1,num2,num3);



}
