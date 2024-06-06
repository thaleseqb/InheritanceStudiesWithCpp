#include "Funcionario.hpp"
#include "Pessoa.hpp"

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario):Pessoa(cpf, nome), salario(salario) {}


std::string Funcionario::recuperaNome() {
	return nome;
}