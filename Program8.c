#include <stdio.h>

int main(){
    char ch [] = {'z','i' , '0' , 's' , 'a' , 'u' ,'b'};
    int indicates[10] = {4,3,6,1,0,2,5};
    char a,b;
    int i =5;

    i = indicates[i];
    b= ch[i];
    i = i-indicates[i];
    i = indicates[4] + 1;
    a =ch[i];
    printf("%c  %c " , a , b);
    return 0 ;
}