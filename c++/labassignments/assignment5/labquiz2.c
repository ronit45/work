#include <stdio.h>

int main() {
  int marks[3];
  float percentage;

  printf("Enter the marks for 3 subjects: ");
  scanf("%d%d%d", &marks[0], &marks[1], &marks[2]);

  int total = 0;
  for (int i = 0; i < 3; i++) {
    total += marks[i];
  }

  percentage = (float)(total /300) * 100;

  printf("The percentage is: %.2f\n", percentage);
  if(percentage>80){
        printf("Excellent");
    }
    else if(40<=percentage<=80){
        printf("average");
    }
    else{
        printf("fail");
    }

  return 0;
}