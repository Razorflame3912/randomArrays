#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int arr[10];
int arr2[10];
int main(){
  //Seeds RNG
  srand( time(NULL));
  int i = 0;
  printf("The original array:\n");
  //Adds random ints and the 0
  for(i;i<9;i++){
    arr[i] = rand();
  }
  arr[9] = 0;

  //Prints first array
  i = 0;
  for(i;i<10;i++){
    printf("arr[%d]: %d\n",i,arr[i]);
  }

  int *p = &arr[9];
  i = 0;
  for(i;i<10;i++){
    arr2[i] = *p;
    p--;
  }
  
  printf("\nThe second array:\n");
  //Prints second array
  i = 0;
  for(i;i<10;i++){
    printf("arr2[%d]: %d\n",i,arr2[i]);
  }
 

  

  
  return 0;
}
