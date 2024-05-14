#include "../acessorios-hpp/Balao.hpp"

Balao::Balao(string descricaoArma, int resistencia)
    : ArmaDefesa(descricaoArma, resistencia)
{
}

string Balao::getDescricaoArma()
{
    return this->descricaoArma;
}

int Balao::getResistencia()
{
    return this->resistencia;
}
