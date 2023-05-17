#include <stdio.h>

int faktorial = 1;
int fibonacci = 0;
int suma = 0;

int fakt(int num){
  int next = num - 1;
  if(num != 1){
    faktorial = num * fakt(next);
  }
  return faktorial;
}

int fibo(int num){
  if(num == 1){
    return 1;
  } else if (num == 0){
    return 0;
  }
  fibonacci = fibo(num-1) + fibo(num-2);
  return fibonacci;
}

int suma(int * num){
  
}

int main(){
  int pole = {1,3,2,7};

  printf("Faktoriál: %d\n", fakt(5));
  printf("Fibonacci: %d\n", fibo(10));
  printf("Suma pole je: %d\n", suma(&pole));
  return 0;
}
