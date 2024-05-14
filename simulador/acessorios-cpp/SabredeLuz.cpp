#include "../acessorios-hpp/SabredeLuz.hpp"

SabredeLuz::SabredeLuz(string descricaoArma, int minForca, int maxForca)
    : ArmaAtaque(descricaoArma, minForca, maxForca)
{
}

int SabredeLuz::gerarForcaAtaque()
{
    return maxForca;
}

string SabredeLuz::gerarRuidoAtaque()
{
    return "Ionnn Ionnn";
}
