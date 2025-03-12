#include<stdio.h>
#include<conio.h>

int main()
{
  char nombre[100];
  int edad, dias;
  
  printf("\nIntroduce tu nombre y pulsa INTRO: ");
  scanf("%s", nombre);

  printf("\nIntroduce tu edad y pulsa INTRO: ");
  scanf("%d", &edad);
  
  dias = edad * 365;  
  
  printf("\n\n%s, has vivido %d días", nombre, dias);
  printf("\n\nPulsa cualquier tecla para salir.");
  getch();

  return 0;
}