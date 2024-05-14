#include "../personagens-hpp/Goku.hpp"

Goku::Goku(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
    : Personagem(id, nome, vida, armaAtaque, armaDefesa)
{
}

int Goku::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Goku::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Goku::pegarDescricao()
{
    return "Seu QI é mais de 8000";
}
