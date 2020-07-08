/***************************************

EECS2031 – Lab 6

Filename:	lab6b.c

Author: Chiming Chen

Email: alex.chen0724@gmail.com

EECS login ID: alex0724

****************************************/

#include<stdio.h>
#define MAXLINE 1000
int main(void)
    {
        int i , space;
        char str[MAXLINE];
        while ( space != EOF ){
            printf("Enter a line of characters>");
            fgets(str, MAXLINE, stdin);
            for(i=0;str[i];i++)
                if((str[i] == ' ') || ( str[i] == '\t'))
                    space++;
            printf("%d\n", space);
            space=0;
        }
    }
