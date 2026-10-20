#include <stdio.h>
int main(void){

    for(int i = 0; i < 9; i++){
        for(int j = 1; j<9; j++)
        {

            if(j>i) break;

            if(j!=4 && j!=8)
            {
            printf("%d\t",1);
            }
            else
            {
            printf("%d\t",0);
            }
        }

        printf("\n");
    }

    return 0;
}