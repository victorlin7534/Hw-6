#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "structure.h"

int main(){
  struct one test = example();
  show(test);
  struct one * temp = &test;
  modify(temp,23.2,"cake");
  show(test);
  return 0;
}

struct one example(){
  struct one e;
  srand(time(NULL));
  e.string = "banana";
  e.val = rand();
  return e;
}

void show(struct one x){
  printf("struct val: %lf\n", x.val);
  printf("struct string: %s\n",x.string);
}

void modify(struct one *  x, double mv, char * ns){
  x->val = mv;
  x->string = ns;
}
