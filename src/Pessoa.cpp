#include <iostream>
#include "Pessoa.hpp"

using namespace std;

//Pessoa construtores
Pessoa::Pessoa() {
    this->nome = "";
    this->endereco = "";
}
Pessoa::Pessoa(string nome, string endereco) {
    this->nome = nome;
    this->endereco = endereco;
}

//Gets
string Pessoa::getNome(){
    return this->nome;
}
string Pessoa::getEndereco(){
    return this->endereco;
}


//Professor construtores
Professor::Professor() : Pessoa() {
    this->titulacao = "";
    this->curso = "";
}
Professor::Professor(string nome, string endereco, string titulacao, string curso) : Pessoa(nome, endereco) {
    this->titulacao = titulacao;
    this->curso = curso;
}

//gets
string Professor::getTitulacao(){
    return this->titulacao;
}
string Professor::getCurso(){
    return this->curso;
}

//Aluno construtores
Aluno::Aluno(string nome, string endereco ,int matricula) : Pessoa(nome, endereco){
    this->matricula = matricula;
}

//gets

int Aluno::getMatricula(){
    return this->matricula;
}
