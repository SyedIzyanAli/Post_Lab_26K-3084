#include <stdio.h>
int main(void){
float largest_mids = 0;
float marks[4][2];
float totals[4];

printf("\n");

for(int i = 0; i < 4; i++){
    for(int j= 0; j < 2; j++){

        if(j==0)
        {
        printf("Enter Marks of Student %d for Mids: ",i+1);
        scanf("%f",&marks[i][0]);
        }

        if(j==1)
        {
            printf("Enter Marks of Student %d for Finals: ",i+1);
            scanf("%f",&marks[i][1]);
        }

        totals[i] = marks[i][0] + marks[i][1];
    }
    printf("\n");
}

printf ("\n\nStudents\tMids\tFinals\tTotal\n");

for (int i = 0; i < 4; i++){

    printf("Student %d\t",i+1);

    for(int j = 0; j < 2; j++)
    {
        printf("%.2f\t",marks[i][j]);
    }

    printf("%.2f\t",totals[i]);
    if (i<3)
    printf("\n");
}


for (int i = 0; i < 4; i++){
    if (largest_mids>marks[i][0]){
        largest_mids = largest_mids;
    }
    else{
        largest_mids = marks[i][0];
    }
}
float lowest_mids = marks[0][0];
for (int i = 0; i < 4; i++){
    if (lowest_mids<marks[i][0]){
        lowest_mids = lowest_mids;
    }
    else{
        lowest_mids = marks[i][0];
    }
}
float largest_finals = 0;

for (int i = 0; i < 4; i++){
    if (largest_finals>marks[i][1]){
        largest_finals = largest_finals;
    }
    else{
        largest_finals = marks[i][1];
    }
}
float lowest_finals = marks[0][1];
for (int i = 0; i < 4; i++){
    if (lowest_finals<marks[i][1]){
        lowest_finals = lowest_finals;
    }
    else{
        lowest_finals = marks[i][1];
    }
}
float largest_overall = 0;
for (int i = 0; i < 4; i++){
    if (largest_overall>totals[i]){
        largest_overall = largest_overall;
    }
    else{
        largest_overall = totals[i];
    }
}
float lowest_overall = totals[0];
for (int i = 0; i < 4; i++){
    if (lowest_overall<totals[i]){
        lowest_overall = lowest_overall;
    }
    else{
        lowest_overall = totals[i];
    }
}
float sum_mids = 0;
for(int i = 0; i < 5; i++){
        
        sum_mids += marks[i][0];

}
float average_mids = sum_mids/4;

float sum_finals = 0;
for(int i = 0; i < 5; i++){

        sum_finals += marks[i][1];
}
float average_finals = sum_finals/4;

printf("\n\n");
printf("Highest Marks in Mids: %.2f\n",largest_mids);
printf("Lowest Marks in Mids: %.2f\n",lowest_mids);
printf("Highest Marks in Finals: %.2f\n",largest_finals);
printf("lowest Marks in Finals: %.2f\n",lowest_finals);
printf("Highest Marks Overall: %.2f\n",largest_overall);
printf("lowest Marks Overall: %.2f\n",lowest_overall);
printf("Average Marks Mids: %.2f\n",average_mids);
printf("Average Marks Finals: %.2f\n",average_finals);



return 0;
}