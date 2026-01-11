#include <stdio.h>

int num = 10;

void func1() {
    // 局部变量 - 隐藏了全局变量 num
    int num = 20;
    printf("num = %d\n", num);
}

void func2() {
    //使用全局变量
    extern int num;
    num = 20;
}



int main() {
    func1();
    printf("num = %d\n", num);

    func2();
    printf("num = %d\n", num);

    return 0;
}
