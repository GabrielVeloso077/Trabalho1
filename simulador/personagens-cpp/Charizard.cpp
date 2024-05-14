#include "../personagens-hpp/Charizard.hpp"

Charizard::Charizard(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
    : Personagem(id, nome, vida, armaAtaque, armaDefesa)
{
}

int Charizard::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Charizard::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Charizard::pegarDescricao()
{
    return "Ta pegando fogo bicho";
}
