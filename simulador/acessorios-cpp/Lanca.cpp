#include "../acessorios-hpp/Lanca.hpp"

Lanca::Lanca(string descricaoArma, int minForca, int maxForca)
    : ArmaAtaque(descricaoArma, minForca, maxForca)
{
}

int Lanca::gerarForcaAtaque()
{
    return maxForca;
}

string Lanca::gerarRuidoAtaque()
{
    return "VAPPPP!";
}
