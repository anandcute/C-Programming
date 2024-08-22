#include <stdio.h>

int q(int x , int y){
    x= x*y;
    return x < 50 ? (x) : (q(2,3));

}
int main(){
    int result = q(20,4);
    printf("%d\n" , result);
    return 0 ;
}
