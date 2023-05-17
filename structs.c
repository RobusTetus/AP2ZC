#include <stdio.h>
#include <stdlib.h>

int match = 0;

typedef struct {
  char name[10];
  int birthYear;
}Student;

Student * filterOlder(Student * from_arr, size_t size, int age);

int main(){
  Student s[3] = {{"Robin", 2002}, {"Petr", 1998}, {"Lenka", 1999}};
  Student * r = filterOlder(s, 3, 18);
  for(int i = 0; i < match; i++){
    printf("%s\n", (r+i*sizeof(Student)) -> name;
  }
  return 0;
}

Student * filterOlder(Student * from_arr, size_t size, int age){
  Student * result = malloc(sizeof(Student));
  match = 0;
  
  for(int i = 0; i < size; i++){
    int offset = i*8;
    if ((from_arr+offset)->birthYear < (2023-age)){
      match++;
      realloc(result, match*sizeof(Student));
      result[match-1] = from_arr[i];
    }
  }

  return result;
}
