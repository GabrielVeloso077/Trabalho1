#include "../acessorios-hpp/Luva.hpp"

Luva::Luva(string descricaoArma, int resistencia)
    : ArmaDefesa(descricaoArma, resistencia)
{
}

string Luva::getDescricaoArma()
{
    return this->descricaoArma;
}

int Luva::getResistencia()
{
    return this->resistencia;
}
