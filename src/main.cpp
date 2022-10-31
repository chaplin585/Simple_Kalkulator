#include<stdio.h>
#include<iostream>
#include"lib_main.h"
#include"lib_oper1.h"
using namespace std;

int main(){
    int a = 0,b = 0;
    char operation;
    printf("%s","Hello! I am Simple- Calculator\n");
    cout<<"I can 1)|A+B|A-B|A*B|A/B|A^B| and 2)|A!|s(A)(SQRT(A))|"<<endl;
    cin>>a;
    if (a==1){
        while(true){
            cout<<"Write the example"<<endl;
            scanf("%d %c %d", &a, &operation, &b);
            oper(operation,a,b);
            cout<<"0-exit, 1-continue"<<endl;
            cin>>a;
            if (a == 0){
                break;
            }
        }

    }
    if (a==2){
        while(true){
            cout<<"Write the example"<<endl;
            scanf("%d %c", &a, &operation);
            oper1(operation,a);
            cout<<"0-exit, 1-continue"<<endl;
            cin>>a;
            if (a == 0){
                break;
            }
        }
    }   
}