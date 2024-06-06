#pragma once
#include "Cpf.hpp"
#include <string>


class Pessoa {
// this property insures that the member will not
// be changed, but it can be read by the heirs
protected:
	Cpf cpf;
	std::string nome;

public:
	Pessoa(Cpf cpf, std::string nome);

private:
	void verificaTamanhoDoNome();

};