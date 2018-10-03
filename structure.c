#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "structure.h"

int main(){
  struct one test = example();
  show(test);
  modify(&test,23.2,"cake");
  show(test);
  modify(&test,1.23,"potato");
  show(test);
  modify(&test,0.65,"egg");
  show(test);
  modify(&test,100000.02,"bean");
  show(test);
  return 0;
}

struct one example(){
  struct one e;
  srand(time(NULL));
  e.string = "banana";
  e.val = rand()%100;
  return e;
}

void show(struct one x){
  printf("food name: %s\n",x.string);
  printf("food price: $%.2lf\n", x.val);
}

void modify(struct one *  x, double mv, char * ns){
  printf("\nchanging food item...\n\n");
  x->val = mv;
  x->string = ns;
}
