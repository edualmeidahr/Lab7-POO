#include <iostream>
#include <string>
#include "Curso.hpp"
using namespace std;

void Curso::cadastrarProfessor(){
    cout<<"Nome do professor:\n";
    string nome;
    cin>>nome;
    cout<<"Endereco do professo:\n";
    string endereco;
    cin>>endereco;
    cout<<"Titualação: \n";
    string titulacao;
    cin>>titulacao;
    cout<<"Curso que o professor da aula: \n";
    string curso;
    cin>>curso;

    Professor professor (nome, endereco, titulacao, curso);
    professores.push_back(professor);
    cout<<"Professor cadastrado com sucesso!";
}

void Curso::cadastrarAluno(){
    cout<<"Nome do aluno\n";
    string nome;
    cin>>nome;
    cout<<"Endereco do aluno:\n";
    string endereco;
    cin>>endereco;
    cout<<"Numero da matricula do aluno:\n";
    int matricula;
    cin>>matricula;

    Aluno aluno(nome, endereco, matricula);
    alunos.push_back(aluno);
}

void Curso::cadastrarDisciplina(){
    cout<<"Nome da disciplina: \n";
    string nome;
    cin>>nome;
    cout<<"CH da disciplina: \n";
    int CH;
    cin>>CH;
    cout<<"Nome do professor: \n";
    string nomeProfessor;
    cin>>nomeProfessor;
    
    for(Professor professor : professores){
        if(professor.getNome().compare(nomeProfessor)==0){
            Disciplina disciplina(nome, CH, professor);
            disciplinas.push_back(disciplina); 
        }    
    }
        cout<<"\nProfessor não cadastrado"<<endl;
    }



void Curso::imprimirListaDeProfessor(){
    if (professores.empty()){
        cout<<"A lista está vazia"<<endl;
    }else{
    for(Professor professor : professores){
        cout<<"Nome:" + professor.getNome() << endl;
        cout<<"Endereço:" + professor.getEndereco() << endl;
        cout<<"Titulação: "+ professor.getTitulacao()<< endl;
        cout<<"Curso: "+ professor.getCurso()<< endl;
        cout<<"---------------------------------------------"<<endl;
    }
    }
}

void Curso::imprimirListaDeAlunos(){
    if (alunos.empty()){
        cout<<"A lista está vazia"<<endl;
    }else{
    for(Aluno aluno : alunos){
        cout<<"Nome:" + aluno.getNome() << endl;
        cout<<"Endereço:" + aluno.getEndereco() << endl;
        cout<<"Matricula:" + aluno.getMatricula()<<endl;
        cout<<"---------------------------------------------";
    }
    }
}

void Curso::imprimirListaDeDisciplinas(){
    if (disciplinas.empty()){
        cout<<"A lista está vazia"<<endl;
    }else{
    for(Disciplina disciplina : disciplinas){
        cout<<"Nome da disciplina:" + disciplina.getNome()<<endl;
        cout<<"CH da disciplina:"+ disciplina.getCH()<<endl;
        cout<<"Professor da disciplina: "+ disciplina.getProfessor().getNome() <<endl;
    }
    }
}