#ifndef _DISCIPLINA_HPP
#define _DISCIPLINA_HPP
#include <string>
#include "Pessoa.hpp"
using namespace std;

class Disciplina{

private:
string nome;
int CH;
Professor professor;

public:
Disciplina();
Disciplina(string nome, int CH, Professor professor);

string getNome();
int getCH();
Professor getProfessor();

};
#endif