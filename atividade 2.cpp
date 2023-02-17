#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n1,n2;
	
	cout << "digite um numero: ";
	cin >> n1;
	
	cout << "digite outro numero: ";
	cin >> n2;
	
	(n1>n2);
	
	if (n1> n2){
		
		cout << "foi um numero mENOr" << n2 << " acertou";
	}else {
		cout << "FOI UM NUMERO MAIOR";
	}	

