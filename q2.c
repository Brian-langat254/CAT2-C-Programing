//Array is a data structure that allow you to store a fixed size sequential collection of an element of the same data type. 


      //  Row 1:65,84

       // Row 2:8,9



#include <stdio.h>

int main(){

int scores[2][2] = {

{65,   84} /*first row*/

{8,    9} /*second row*/

};

/*print elements using for loop*/

printf("Score Arrays:\n");

for(int i=0; i<2; i++){

for (j=0; j<2; j++){

printf("%d", scores[i][j]); /*print element each*/

}

printf("\n"); /*print new line after each row*/

}

return 0;

}

