#include "bigint.c"
#include <stdio.h>
#include <stdlib.h>

int main()
{
//Assign intial values for a,b,fib as characters.	
char* val1="0";
char* val2="1";
char* val3="0";
char* val4="0";

//Set initial conditions
bigint_t* first=new_bigint(val1);
bigint_t* second=new_bigint(val2);
bigint_t* next=new_bigint(val3);
bigint_t* zero=new_bigint(val4);

//Printing Fibonasi Seris
puts("----FIBONACCI SERIES----");
//Print the initial terms
printf("Fibonacci number(000): 0\n");
printf("Fibonacci number(001): 1\n");

//Starting to print the seris

int i;
for(i=0;i<99;i++){

add(next,first,second);
printf("Fibonacci number(%03d): ",i+2);show_bigint(next);
//Add a zero as the equal operation(1 = 2)
add(first,zero,second);
add(second,next,zero);

}

//Free the memory
free(first);
free(second);
free(next);
free(zero);



  return 0; 
}
  
  
