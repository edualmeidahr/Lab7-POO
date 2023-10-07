#ifndef _CURSO_HPP
#define _CURSO_HPP
#include <string>
#include <list>
#include "Pessoa.hpp"
#include "Disciplina.hpp"



using namespace std;

class Curso{

private:
    string nome;
    list <Disciplina> disciplinas ;
    list <Professor> professores;
    list <Aluno> alunos;
    


public:
    void cadastrarProfessor();
    void cadastrarAluno();
    void cadastrarDisciplina();
    void imprimirListaDeProfessor();
    void imprimirListaDeAlunos();
    void imprimirListaDeDisciplinas();








};
#endif