#pragma once
#include "Cpf.hpp"
#include <string>


class Pessoa {

private:
	Cpf cpf;
	std::string nome;
	void verificaTamanhoDoNome();

public:
	Pessoa(Cpf cpf, std::string nome);

};