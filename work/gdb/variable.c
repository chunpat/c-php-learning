#include <stdio.h>
int global=0;

int area(int a, int b){
    int count; //局部
    count++;
    global = 2; //全局
    int s = a * b;
    return s;
}

int quadrate(int a){
    int count;
    count++;
    global = 4;
    int s = area(a,a);
    return s;
}

int main() {
    int a = 3;
    int b =4;
    int *pa = &a;
    int *pb = &b;
    int *pglobal = &global;
    int (*pquadrate)(int a) = &quadrate;
    int s = quadrate(a);
    printf("%d\n",s);
    return 0;
}
