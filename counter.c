#include <stdio.h>
int main(){
int a=122334;
int counter=0;
while(a !=0){
    int digit=a%10;

    counter++;

    a=a/10;
}
printf("%d",counter);
}
