//
//  readline.cpp
//  polyndrom
//
//  Created by user on 02.03.17.
//  Copyright © 2017 WOLFTRAX INC. All rights reserved.
//

#include "iostream"
#include "functions.h"

using namespace std;

int readline(char s[])
{
    int j=0;
    char l;
    do {cin.get(l);
        if (l!=' '){
            s[j]=l;
            j++;}} while (l!='\n');
    s[j-1]='\0';
    return 0;
}
