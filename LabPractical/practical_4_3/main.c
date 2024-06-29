#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float totalCridits(float ict107,float ict105,float ict108){
    float TC = ((ict107*1.0)+(ict105*1.5)+(ict108*2.0))/(1.0+1.5+2.0);
    return TC;
}
void getResult(float credits){
     char grade[20];
     if ((credits<=4.5) && (credits>=3.5)){
        strcpy(grade,"1st class");
     }else if((credits>=3.0)&&(credits<3.5)){
        strcpy(grade,"2nd upper");
     }else if((credits>=2.5)&&(credits<3.0)){
        strcpy(grade,"2nd lower");
     }else if((credits>=2.0)&&(credits<2.5)){
        strcpy(grade,"pass");
     }else if((credits>=0)&&(credits<2.0)){
        strcpy(grade,"fail");
     }else{
        strcpy(grade,"Not valid");
     }
     printf("%s",grade);
}

int main()
{
    float ict107;
    float ict105;
    float ict108;

    printf("Enter credits obtained for ICT 107 1.0: ");
    scanf("%f",&ict107);
    printf("Enter credits obtained for ICT 105 1.5: ");
    scanf("%f",&ict105);
    printf("Enter credits obtained for ICT 108 2.0: ");
    scanf("%f",&ict108);
    float totalcredits = totalCridits(ict107,ict105,ict108);
    getResult(totalcredits);

    return 0;
}
