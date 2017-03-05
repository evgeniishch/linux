//
//  main.cpp
//  polyndrom
//
//  Created by user on 04.10.15.
//  Проверка строки на полиндромность
//

#include <iostream>
#include <fstream>
#include "functions.h"


using namespace std;

int main()
{
    ofstream fout("output.txt");
    
    //io<<"Check with: a roza upala na lapu azora"<<endl;
    char s[100];
    bool flag = 1;
    readline(s);
    //cout<<kolvo(s)<<" symbols"<<endl;
    
    if((kolvo(s))%2==0){
        int nach=0;
        int konec=kolvo(s)-1;
        while (nach!=kolvo(s)/2){
            if(s[nach]==s[konec]){
                nach++;
                konec--;
        } else {
            flag=0;
            break;
        };
      }
    } else {
        int nach=0;
        int konec=kolvo(s)-1;
        while (nach!=(kolvo(s)-1)/2){
            if(s[nach]==s[konec]){
                nach++;
                konec--;
            } else {
                flag=0;break;
            };
        }
    };
    
    if (flag==1){
        cout<<"y"<<endl;
    } else {
        cout<<"n"<<endl;
    };

    return 0;
}
