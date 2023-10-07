#include <iostream>
#include "Disciplina.hpp"

Disciplina::Disciplina(){
    this->nome = "";
    this->CH = 0;
    this->professor = Professor();
}

Disciplina::Disciplina(string nome, int CH, Professor professor){
    this->nome = nome;
    this->CH = CH;
    this->professor = professor;
}

//gets

string Disciplina::getNome(){
    return this->nome;
}

int Disciplina::getCH(){
    return this->CH;
}

Professor Disciplina::getProfessor(){
    return this->professor;
}