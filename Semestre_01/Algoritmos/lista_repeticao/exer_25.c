#include<stdlib.h>
#include<stdio.h>

main() {

    for (int i = 0; i <= 10; i++){
        printf("Tabuada de %d \n", i);

        for (int y = 0; y <= 10; y++){
            printf("%d * %d = %d \n", i, y, y * i);

        } 
    }

    system("pause");
}