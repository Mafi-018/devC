#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,faltas,media;
	
	cout << "IMFORME SUAS FALTAS ";
	cin >> faltas;
	
	cout << " IMFORME SUA PRIMEIRA NOTA ";
	cin >> n1;
	
	cout << " IMFORME SUA SEGUNDA NOTA ";
	cin >> n2;
	
	media = (n1+n2) /2;
	
	if (media >= 6){
		
		cout << " VOCE PASSOU " << media << " PARABENS ";
	}else {
		cout << " REPROVADO ";
	
	}
	
	faltas=( faltas <=25 );
	
	if(faltas <=25 ){
	
	}else {
		cout << " reprovado por faltas: ";
	} 
}
