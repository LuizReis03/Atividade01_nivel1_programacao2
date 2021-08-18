#include <iostream>
using namespace std;

int main(){
	int num1 = 0;
	int num2 = 0;
	int soma = 0;
	
	cout << "Entre com o primeiro numero: ";
	cin >> num1;
	
	cout << "Entre com o segundo numero: ";
	cin >> num2;
	
	soma = num1 + num2;
	
	if(soma > 20){
		cout << soma;
	}
	
	return 0;
}
