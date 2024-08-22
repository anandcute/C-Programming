#include <stdio.h>

void fun(char st[] , int len){
    for(int i = 0 ; i < len / 2 ; i++){
        char temp = st[i];
        st[i] = st[len - 1 - i];
        st[len- 1 - i ] = temp;
    }
}

int main(){
    char st[] = "zohoCorporation";
    int len = 7;
    fun(st , len);
    printf("%s\n" , st);
    return 0;

}
