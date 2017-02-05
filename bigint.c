#include "bigint.h"
#include <stdlib.h>
#include <string.h>

/* implement the functions in *.h
 * Given are broken code!!!!!!!
 */


bigint_t*  new_bigint(char* value){

     //Create a new Big integer
     bigint_t  *new;
     new=(bigint_t*)malloc(sizeof(bigint_t));
     int i;
     //Make all indexes to zero to make eacy the calculations
     for(i=0;i<SIZE;i++){
		 new -> value[i]=0;
		 }
	 // Storing the valuse to the array
     for(i=0;i<strlen(value);i++){
		 new -> value[SIZE-i-1]=(int)value[strlen(value)-i-1]-48;
		 }

return new;
}


void show_bigint(bigint_t* val){
	int i,k=-1;
	//Find the first digit of the number [1,9]
	for(i=0;i<SIZE;i++){
	   if (val -> value[i] != 0){
		   k=i;
		   break;
		   }}
	//if the big int is a Zero
	if(k == -1){
		printf("0\n");
	}else{
	//printing the value
	for(i=k;i<SIZE;i++){
		printf("%d",val -> value[i]);
		}
	printf("\n");}
}


void add(bigint_t* sum,bigint_t* a,bigint_t* b){
	int rem=0;
	int i;
	for(i=SIZE-1;i>=0;i--){
		//getting the sum and the remainder part
		sum -> value[i]=(rem+ a->value[i]+b->value[i])%10;
		//carry out to the next digit
		rem= (rem+ a->value[i]+b->value[i])/10;
		}
  }


void free_bigint(bigint_t* val){
	free(val);
	}

