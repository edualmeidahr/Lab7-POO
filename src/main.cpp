#include <iostream>
#include "Curso.hpp"

using namespace std;

int main()
{
    Curso curso;
    

    while(true){
    cout<<"\nEscolha uma das opções:\n"<<endl;
    cout<<"0)Encerrar o programa:"<<endl;
    cout<<"1)Cadastrar um Professor"<<endl;
    cout<<"2)Cadastrar um Aluno"<<endl;
    cout<<"3)Cadastrar uma Disciplina"<<endl;
    cout<<"4)Imprimir lista de Professores"<<endl;
    cout<<"5)Imprimir lista de Alunos"<<endl;
    cout<<"6)Imprimir lista de Disciplinas"<<endl;
    
    int op;
    cin>>op;


    switch (op)
    {
    case 1:
        curso.cadastrarProfessor();
        break;

    case 2:
        curso.cadastrarAluno();
        break;

    case 3:
        curso.cadastrarDisciplina();
        break;
    
    case 4:
         curso.imprimirListaDeProfessor();
         break;

    case 5: 
        curso.imprimirListaDeAlunos();
        break;
    
    case 6:
        curso.imprimirListaDeDisciplinas();
        break;
    
    default:
        break;
    }
    }
}