#include <stdio.h>
int main (){
  int a = 8;
  int b = 3;
  int c = 10;
  printf("%d",(a * b + (c - b) / (a-c)+ (c/b) - b));
}