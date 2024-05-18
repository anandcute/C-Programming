# include <stdio.h>
int main(){
    printf("Hello world  \n");
    int a = 10 ;
    printf("a is the %d",a);
    char b='a';
    printf("%c", b);
    float f = 3.24;
    printf("\n%f",f);
    double d = 23.3333333333;
    printf("\n%lf",d);
    char ch[] ="anand";
    
    printf("\n%s",ch);
    myFuc(ch);
}
void myFuc(char ch[]){
    for(int i=0; i<50; i++){
        printf("%s", ch[i]);
    }
}