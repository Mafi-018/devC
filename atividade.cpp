#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");

int num;
printf("digite um numero inteiro: ");
scanf("%d",&num);
if(num%2==0)//operador %
{
printf("Par");
}
else
printf("Ímpar");
}
