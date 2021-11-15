//URI online judge 1013 solution in C

//This solution is made by Mehedi Hasan Kajol


#include <stdio.h>
int main() {
    int i, greatest=0;
    int numbers[3];
    for( i=0 ; i<3  ;i++){
        scanf(" %d ", &numbers[i]);
        if( numbers[i] > greatest)
             greatest = numbers[i];
    }
    printf("%d eh o maior\n", greatest);
    return 0;
}
