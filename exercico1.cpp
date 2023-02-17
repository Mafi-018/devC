#include<iostream>

using namespace std;

main(){
	setlocale(LC_ALL," Portuguese");
	cout<<"Olá, Mundo";
	
	float p1,p2,result;
	
	cout<<"informe a priprimeira nota:";
	cin>>p1;
	
	cout<<"imforme a segunda nota";
	cin>>p2;
	
	result=(p1+p2) /2;
	
	if(result>=7){
			cout << "passou com a nota" << result << "parabens";
	} else {
		cout<< "não foi dessa vez";
	}



	
}	

