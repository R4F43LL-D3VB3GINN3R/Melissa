#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	
	// 1.leitura de vetor de inteiros
	// 2.leitura de vetor de caracteres
	// 3.leitura de vetor de strings
	// 4.inserindo valores em um vetor
	// 5.verificacao de um índice do vetor
	// 6.funcoes da biblioteca array
	
	//criacao do contador
	int contador;
	contador = 0;
	
	//-------------------------------------------------
	//-------------------------------------------------
	//-------------------------------------------------
	
	//1.
	
	//declarando vetor de inteiros
	int int_array[] = {1, 2, 3, 4, 5};
	
	//leitura dos valores usando loop for
	for (contador = 0; contador < 5 ; contador++) {
		
		cout << int_array[contador] << endl;
		
	}
	
	contador = 0;
	
	//-------------------------------------------------
	//-------------------------------------------------
	//-------------------------------------------------
	
	//2.
	
	//declarando vetor de caracteres
	char char_array[] = {'A', 'B', 'C', 'D', 'E'};
	
	//leitura dos valores usando loop while
	while (contador < 5) {
		
		cout << char_array[contador] << endl;
		contador++;
		
	}
	
	contador = 0;
	
	//-------------------------------------------------
	//-------------------------------------------------
	//-------------------------------------------------
	
	//3.
	
	//declarando vetor de string
	string string_array[] = {"nome1", "nome2", "nome3", "nome4", "nome5"};
	
	//leitura dos valores usando do-while
	do {
		
		cout << string_array[contador] << endl;
		contador++;
		
	} while (contador < 5);
	
	contador = 0;
	
	//-------------------------------------------------
	//-------------------------------------------------
	//-------------------------------------------------
	
	//4.
	
	//declarando vetor de float
	float float_array[4];
	
	//insere valor no vetor
	float_array[0] = 1.1;
	float_array[1] = 2.2;
	float_array[2] = 3.3;
	float_array[3] = 4.4;
	float_array[4] = 5.5;	
	
	//imprimindo valores 
	cout << float_array[0] << endl;
	cout << float_array[1] << endl;
	cout << float_array[2] << endl;
	cout << float_array[3] << endl;
	cout << float_array[4] << endl;
	
	//-------------------------------------------------
	//-------------------------------------------------
	//-------------------------------------------------
	
	//5.
	
	//verifica um valor dentro do vetor
	for (contador = 0; contador < 5; contador++ ) {
		
		int_array[contador];
		
		if (int_array[contador] == 3) {
			
			cout << "Achei o numero 3" << endl;
			
		}
		
	}
	
	//-------------------------------------------------
	//-------------------------------------------------
	//-------------------------------------------------
	
	//6.
	
	//criacao do array da biblioteca inicia vazio
	vector<int> array_int2;   
	
	//insere valores ao fim do array
	array_int2.push_back(1);
	array_int2.push_back(2);
	array_int2.push_back(3);
	array_int2.push_back(4);
	array_int2.push_back(5);
	
	//leitura do array
	for (int i = 0; i < 5; i++) { 
        cout << array_int2[i] << endl;
    }
	
	//insere valores no inicio do array
	array_int2.insert(array_int2.begin(), 6);
	
	//leitura do array
	for (int i = 0; i < 5; i++) { 
        cout << array_int2[i] << endl;
    }
	
	return 0;
}
