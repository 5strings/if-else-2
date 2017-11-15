//
//  main.c
//  Alter if else statement
//
//  Created by Eun Jae Lee on 15/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a,b,c;
    printf("Enter two numbers:\n");
    scanf("%d%d" ,&a,&b);
    
    /*
    if(a>b)
        c = a;
    else
        c = b;
     */
    
    c = (a>b)?a:b;
    printf("%d is greater value\n",c);
    
    getchar();
    
    
    //return 0;
}
