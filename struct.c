#include <stdio.h>
#include <stdlib.h>

struct foodprice {
  char *food;
  int price;
};
struct foodprice generate(){
  int prices[] = {1,2,3,4,5,6};
  char* foods[] = {"pizza","bagel","spaghetti","lasagna","ramen","salad"};
  struct foodprice f;
  int n1 = rand();
  int n2 = rand();
  f.price = prices[n1 % 6];
  f.food = foods[n2 % 6];
  return f;
}
int print_struct(struct foodprice s){
  printf("food: %s\t$%d\n", s.food, s.price);
  return 0;
}
struct foodprice set_struct(struct foodprice s, char *f, int p){
  s.food = f;
  s.price = p;
  return s;
}
int main(){
  printf("Testing generate and print_struct:\n");
  printf("Expectation: food: [food item]  $[price]\n");
  srand(time(NULL));
  struct foodprice f1 = generate();
  print_struct(f1);
  struct foodprice f2 = generate();
  print_struct(f2);
  struct foodprice f3 = generate();
  print_struct(f3);
  printf("Testing set_struct:\n");
  struct foodprice f4;
  f4.food = "apple";
  f4.price = 8;
  print_struct(f4);
  printf("Setting struct to (orange, 9)\n");
  f4 = set_struct(f4, "orange", 9);
  print_struct(f4);

  return 0;
}
