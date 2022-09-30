#include <iostream>
#include <locale.h> 
using namespace std;

void Menuprincipal(){
	cout <<		"Menu Principal"						<<endl;
	cout <<"1 - Adicionar Elementos na matriz."			<<endl;
	cout <<"2 - Operações na Matriz"					<<endl;
	cout <<"3 - Exibir todos os elementos da Matriz" 	<<endl;
	cout <<"4 - Sair"									<<endl;
}

void Menusecundario(){
	cout << "Menu Operações" <<endl;
	cout << "1 - Somar todos os valores de uma linha especifica." 		<<endl; //(solicitar a linha que deve ser somada)
	cout << "2 - Media de todos os valores de uma coluna especifica." 	<<endl; //(solicitar a coluna que deve ser calculada)
    cout << "3 - Soma total dos valores." 								<<endl;
    cout << "4 - Voltar para o menu principal" 							<<endl;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	double matriz[2][2],soma[2], media[2],somaC[2];
	int resp,resps,somacoluna,somageral,l,c,somalinha,mediacoluna,answer, answerC;
	do{
		Menuprincipal();
		cin >> resp;
	switch(resp) {
		case 1:
			for( l = 0; l < 2; l ++){
				for(c = 0; c < 2; c ++){
					cout << "Digite o linha "<< l << " e coluna "<< c <<":"<< endl;
					cin >> matriz[l][c];
		}	
	}
			break;
		case 2:
		do{
			Menusecundario();
			cin >> resps;
			switch(resps){
				case 1:
					for( l = 0; l < 2; l ++) {
						somalinha = 0;
						for(c = 0; c < 2; c ++){
							somalinha = somalinha + matriz[l][c];
							soma[l] = somalinha;
						}	
					}
					cout << "Digite qual linha:" << endl;
					cin >> answer;
					for(l = 0; l < 2; l ++){
						if (l == answer){
							cout <<"O valor da soma da linha é: "<<  soma[l] << endl;
						}	
					}
					break;
				case 2: 
				 for(c = 0; c < 2; c ++){
				 	mediacoluna = 0;
				 	somacoluna = 0;
				 	for( l = 0; l < 2; l ++) {
				 		somacoluna = somacoluna + matriz[l][c];
				 		somaC[c] = somacoluna;
				 		mediacoluna = somaC[c] / 2;
					 	media[c] = mediacoluna;
					 	
				 }
			}
					cout << "Digite qual coluna: " << endl;
					cin >> answerC;
					for(c = 0; c < 2; c ++){
						if (c == answerC){
							cout <<"O valor da soma é: "<< somaC[c] << endl;
							cout <<"O valor da media é: "<< media[c] << endl;
						}	
					}
					break;
				case 3:
					somageral = 0;
					for( l = 0; l < 2; l ++) {
						for(c = 0; c < 2; c ++){
							somageral = somageral + matriz[l][c];
						}
					}
					cout <<  "O valor da soma geral é: "<< somageral <<endl;
					break;
				case 4:
					cout << "SAINDO..." << endl;
					break;
				}	
		} while(resps != 4);	
		break;
		case 3:
			for( l = 0; l < 2; l ++){
				for( c = 0; c < 2; c ++){
					cout<<"Tabela["<<l<<"]["<<c<<"]"<<matriz[l][c]<<endl;
		}
	}
		break;
		case 4:
			cout << "SAINDO..." << endl;
			break;
		}
	}while(resp != 4);	
}
