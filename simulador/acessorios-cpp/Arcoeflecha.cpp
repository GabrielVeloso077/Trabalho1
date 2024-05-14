#include "../acessorios-hpp/ArcoeFlecha.hpp"

ArcoeFlecha::ArcoeFlecha(string descricaoArma, int minForca, int maxForca)
    : ArmaAtaque(descricaoArma, minForca, maxForca)
{
}

int ArcoeFlecha::gerarForcaAtaque()
{
    return maxForca;
}

string ArcoeFlecha::gerarRuidoAtaque()
{
    return "Poww";
}
