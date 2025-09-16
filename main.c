#include<stdio.h>
#define N 12

int main(){
    printf("Enter a Year: ");
    unsigned int year;
    scanf("%u", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("%u is a Leap Year\n", year);
        for(int i = 1; i <= N; i++){
             if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
                printf("Month %d has 31 days\n", i);
            } else if(i == 4 || i == 6 || i == 9 || i == 11){
                printf("Month %d has 30 days\n", i);
            } else {
                printf("Month %d has 29 days\n", i);
             }
        }  
    } else {
        printf("%u is not a Leap Year\n", year);
        for(int i = 1; i <= N; i++){
             if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
                printf("Month %d has 31 days\n", i);
            } else if(i == 4 || i == 6 || i == 9 || i == 11){
                printf("Month %d has 30 days\n", i);
            } else {
                printf("Month %d has 28 days\n", i);
             }
        } 
    }
    return 0;
}