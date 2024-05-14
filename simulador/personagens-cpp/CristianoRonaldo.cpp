#include "../personagens-hpp/CristianoRonaldo.hpp"

CristianoRonaldo::CristianoRonaldo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
    : Personagem(id, nome, vida, armaAtaque, armaDefesa)
{
}

int CristianoRonaldo::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int CristianoRonaldo::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string CristianoRonaldo::pegarDescricao()
{
    return "SIUUUUUUUU";
}
