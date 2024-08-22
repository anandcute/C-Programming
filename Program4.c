#include <stdio.h>
static int i ; 
static int i = 25;
static int i ; 
void fun(){
    printf("%d " , i);
    return ;
}
int main(){
    static int i ;
    printf("%d ", i);
    fun();
    return 0 ;
}