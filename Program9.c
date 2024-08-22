#include <stdio.h>

int fun(int val){
    int i;
    int ans = val;
    for(i = 0 ; i < val ; i++){
        ans = ans + (val*val);
    }
    return ans;
}

int main(){
    int i [5] = {0,1,2,3,4};
    int n = 0;
    do{
        printf("%d " , fun(i[n]));
    }while(++n < 5);

    return 0;
}