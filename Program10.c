#include <stdio.h>

int main(){
    char a[] = {'a','o', 'o' ,'k' , 'u' ,'b'};
    int index[] = {1,2,3,3,2,4,5};
    char i,j,k,l;
    int n = 2;
    l = a[index[n]];
    n=index[n];
    k=a[n-1];
    n = n + index[n];
    i = a [n-1 ] ; 
    n=index[1]-1;
    j = a[n];
    printf("%c %c %c %c" , i , j , k , l);
    return 0;
    }