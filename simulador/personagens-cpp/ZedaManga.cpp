#include "../personagens-hpp/ZedaManga.hpp"

ZedaManga::ZedaManga(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
    : Personagem(id, nome, vida, armaAtaque, armaDefesa)
{
}

int ZedaManga::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int ZedaManga::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string ZedaManga::pegarDescricao()
{
    return "AI ZE DA MANGA";
}
