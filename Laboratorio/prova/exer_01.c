#include<stdio.h>

struct z{
	int a;
    int b;
}

main(){
    struct z x, y;
    x.a = 10;
    x.b = 20;
    y = x;
    printf("%d e %d\n", y.a, y.b);
}