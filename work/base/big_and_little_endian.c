#include<stdio.h>
void func1(){
    int i = 0x12345678;
    if(*((char*)&i) == 0x12){
        printf("func1 says Big endian!\n");
    }else{
        printf("func1 says Little endian!\n");
    }
    return ;
}

void func2(){
    union _u
    {
        /* data */
        int i;
        char c;
    } u;
    u.i = 1;
    if(u.c == 1){
        printf("func1 says Little endian!\n");
    }else{
        printf("func1 says Big endian!\n");
    }
    return ;
    
}

int main() {
    func1();
    func2();
    return 0;
}