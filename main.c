#include <stdio.h>
#include <stdlib.h>


void verify (int a, int b, int c);


int main(void) {
  
  int a, b, c;
  int x, y, z;


  printf("\nInsira um valor para o lado A: ");
  scanf("%d", &a);
  printf("Insira um valor para o lado B: ");
  scanf("%d", &b);
  printf("Insira um valor para o lado C: ");
  scanf("%d", &c);

  x = abs(b-c);
  y = abs(a-c);
  z = abs(a-b);

  printf("\n1o caso: %d < %d < %d", x, a, b+c);
  printf("\n2o caso: %d < %d < %d", y, b, a+c);
  printf("\n3o caso: %d < %d < %d\n", z, c, a+b);

  if( (x<a && a<(b+c)) && (y<b && b<(a+c)) && (z<c && c<(a+b)) ){
    printf("\nValores inseridos compoem um triangulo!");
    printf("\nValores dos lados: A = %d | B = %d | C = %d ", a , b , c);
    printf("\nVerificando tipo...\n");
    verify(a, b, c);
  }
  else{printf("\nOs valores inseridos nao compoem um triangulo!");}

}


void verify (int a, int b, int c){

  if( a!=b && a!=c && b!=c ){
    printf("\nTriangulo Escaleno");   // Triangulo Escaleno - Lados e ângulos são diferentes
  }
  
  else if( (a==b && a!=c) || (b==c && b!=a) || (a==c && b!=a) ){
    printf("\nTriangulo Isosceles");    // Triangulo Isosceles - Dois lados iguais e ângulos opostos a esses lados iguais
  }
  
  else if( a==b && a==c && b==c ){
    printf("\nTriangulo Equilatero");   // Triangulo Equilatero - Lados e ângulos iguais
  }
  
  
}
