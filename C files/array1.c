#include <stdio.h>

int main(){

    int prices[10];
    int n =10;
    int i;
        //reads the array and mangayog input
        for(i = 0; i < n; i++)
        {
            printf("element - %d : ",i);
            scanf("%d", &prices[i]);
        }   
                        //ibutang ang input
                        for(i = 0; i < n; i++){
                    printf("\nElements in array are: ");
                    printf("%d", prices[i]);
                }

        for(int j = 0; n >= j; n--){
            printf("\nElements in array in reverse are: ");
                    printf("%d", prices[n]);
        }


    return 0;
}