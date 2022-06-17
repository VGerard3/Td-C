#include "module.h"
int addone(int n)
{
    return n+1;
}

int fibonacci(int n){
    int a = 1;
    int b = 1;
    int c = 0;
    for(int i=0 ; i<n ; i++){
        c = a + b;
        a = b;
        b = c;
    }
return c;
}