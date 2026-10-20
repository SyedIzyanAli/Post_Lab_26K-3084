#include <stdio.h>
#include <string.h>

int main(void){

int matrix1[3][3];
int matrix2[3][3];
int result[3][3];


for(int i = 0; i<3;i++){
    for(int j=0; j<3; j++){
        printf("Enter Element: ");
        scanf("%d",&matrix1[i][j]);
    }
}

for(int i = 0; i<3;i++){
    for(int j=0; j<3; j++){
        printf("Enter Element: ");
        scanf("%d",&matrix2[i][j]);
    }
}
    printf("\n*********************************************\n");
    printf("Result:\n");

    printf("*********************************************\n");

    printf("Input Matrix1: \n");
    for(int i = 0; i<3; i++){
        printf("{");
        for(int j = 0; j<3; j++){

            printf("%d",matrix1[i][j]);
            if(j!=2)
            printf("\t");
        }
        printf("}");
        printf("\n");
    }

    printf("Input Matrix2: \n");
    for(int i = 0; i<3; i++){
                printf("{");

        for(int j = 0; j<3; j++){

            printf("%d",matrix2[i][j]);
            if(j!=2)
            printf("\t");
        }
                printf("}");

        printf("\n");
    }
printf("Result Matrix:\n");
for(int i = 0; i<3;i++){
            printf("{");

    for(int j=0; j<3; j++){
        
        result[i][j] = matrix1[i][j] + matrix2[i][j];
        printf("%d",result[i][j]);
        if(j!=2)
            printf("\t");

    }
            printf("}");

    printf("\n");
}
    return 0;
}