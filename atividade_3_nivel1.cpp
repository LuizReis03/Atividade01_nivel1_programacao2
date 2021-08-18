#include <iostream>
using namespace std;

int main(){
	int num = 0;
	int resultado = 0;
	
	cout << "Entre com um numero: ";
	cin >> num;
	
	resultado = num % 2;
	
	if (resultado == 0){
		cout <<"\nO numero "<< num << " e par";
	}
	
	else{
		cout <<"\nO numero "<< num << " e impar";
	}
}
