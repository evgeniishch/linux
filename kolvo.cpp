//
//  kolvo.cpp
//  polyndrom
//
//  Created by user on 02.03.17.
//  Copyright © 2017 WOLFTRAX INC. All rights reserved.
//
#include "functions.h"

int kolvo (char s[])
{
    int kol=0;
    int i=0;
    while(s[i]!='\0'){kol++; i++;}
    
    return kol;
    
}
