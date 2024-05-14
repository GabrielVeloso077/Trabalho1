#include "../acessorios-hpp/Pedra.hpp"

Pedra::Pedra(string descricaoArma, int resistencia)
    : ArmaDefesa(descricaoArma, resistencia)
{
}

string Pedra::getDescricaoArma()
{
    return this->descricaoArma;
}

int Pedra::getResistencia()
{
    return this->resistencia;
}
