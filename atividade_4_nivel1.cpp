#include <iostream>
using namespace std;

int main(){
	int num = 0;
	
	cout << "Entre com um numero: ";
	cin >> num;
	
	if (num == 0){
		cout << "\n" << num << " e nulo";
	}
	
	else if(num > 0){
		cout << "\n" << num << " e positivo";
	}
	
	else if(num < 0){
		cout << "\n" << num << " e negativo";
	}
	
	return 0;
}
