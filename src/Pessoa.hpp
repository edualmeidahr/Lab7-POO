#ifndef _PESSOA_HPP
#define _PESSOA_HPP

#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
    string endereco;

public:
    Pessoa();
    Pessoa(string nome, string endereco);
    string getNome();
    string getEndereco();

    // Adicione getters e setters conforme necessário
};

class Professor : public Pessoa {
private:
    string titulacao;
    string curso;

public:
    Professor();
    Professor(string nome, string endereco, string titulacao, string curso);
    string getTitulacao();
    string getCurso();

};

class Aluno : public Pessoa {
private:
    int matricula;

public:
    Aluno();
    Aluno(string nome, string endereco, int matricula);
    int getMatricula();
};

#endif
