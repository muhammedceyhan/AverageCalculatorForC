#include<stdio.h>
#include<stdlib.h>

int main(){
    int num = 0;
    double sum = 0;
    int count = 0;
    char choise = '1';

    while(1){
        printf("Type a number for calculate the average: \n");
        scanf("%d", &num);
        sum += num;
        count++;
        printf("%d added to sum, The new average is: %.2f \n",num,(sum / count)); 
    }

}