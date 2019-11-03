#include <stdio.h>
#include <math.h>

int add_together(int x, int y){
  int result = x + y;
  return result;
}

typedef struct {
float x;
float y;
} point;

int main(int argc, char** argv) {
  puts("Hi, World!");

  int added = add_together(10, 18);
  printf("%d\n" , added);

  point p;
  p.x = 0.1;
  p.y = 10.0;
  float length = sqrt(p.x * p.x + p.y * p.y);
  printf("%f\n", length);

  if(length > 10) {
    puts("Length is greater than 10");
  } else {
    puts("Length is less than 10");
  }

  int i = 10;
  while(i > 0){
    puts("Loop Iteration");
    i = i - 1;
  }

  for(int i = 0; i < 10; i++) {
    if(i == 5) {
      continue;
    } else if(i == 6) {
      break;
    }
    puts("For loop iteration");
  }
 
  i = 0;
  do {
    puts("This will atleast print once"); 
  } while(i < 0);

  int expression = 110;

  switch(expression) {
    case 0:
      puts("A");
    case 1:
      puts("B");
    default:
      puts("C");


  }

  return 0;
}
