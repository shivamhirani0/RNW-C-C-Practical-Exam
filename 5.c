#include <stdio.h>

int main() {
  
    float m1, m2, m3;
  
    printf("Enter marks of three subjects: ");
  
    scanf("%f%f%f", &m1, &m2, &m3);
  
    printf("Average: %.2f\n", (m1 + m2 + m3) / 3);
  
    return 0;
}
