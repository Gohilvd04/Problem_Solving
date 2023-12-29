#include<stdio.h>
int main(){
    char *str [] = {"AAAAA","BBBBB","CCCCC","DDDDD"};
    char **sptr [] ={str+3,str+2,str+1, str}; 
    char ***pp;
              
    pp=sptr;
    ++pp;
    printf("%s",**++pp+2);
    return 0;
}