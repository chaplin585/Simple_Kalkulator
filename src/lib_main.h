#include <iostream>
#include<math.h>
using namespace std;
int oper1(char operation, int a){
    int z = 0;
    switch(operation){
        case('!'):
            for (int i = 1;i<=a;i++){
            z = z*i;
            }
            break;
        case('s'):
            z = sqrt(a);
            break;
    }
    printf("%d %c  = %d\n", a, operation, z);
    return z;

}
