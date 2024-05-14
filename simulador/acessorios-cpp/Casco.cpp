#include "../acessorios-hpp/Casco.hpp"

Casco::Casco(string descricaoArma, int resistencia)
    : ArmaDefesa(descricaoArma, resistencia)
{
}

string Casco::getDescricaoArma()
{
    return this->descricaoArma;
}

int Casco::getResistencia()
{
    return this->resistencia;
}
