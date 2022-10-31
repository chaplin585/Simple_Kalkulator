#include<iostream>
#include<math.h>
using namespace std;

int oper(char operation,int a, int b){
    int z = 0;
    switch(operation){
        case('+'):
            z = a+b;
            break;
        case('-'):
            z = a-b;
            break;
        case('*'):
            z = a*b;
            break;
        case('/'):
            z = a/b;
            break;
        case('^'):
            z = pow(a,b);
            break;

    }
    printf("%d %c %d = %d\n", a, operation, b, z);
    return z;
}