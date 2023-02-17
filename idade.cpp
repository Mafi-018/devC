#include <iostream>

using namespace std;

main(){
	
	  setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,idade;
	
	cout << "Informe o ano em que voce nasceu: ";
    cin >> n1;

    cout << "Informe o ano atual: ";
    cin >> n2;

    idade = (n2-n1);

     if (idade >= 16){
        cout << "Voce ja pode votar: " << idade << "parabéns";
    }else {
        cout <<"Voce não pode votar";
    }
}


}
