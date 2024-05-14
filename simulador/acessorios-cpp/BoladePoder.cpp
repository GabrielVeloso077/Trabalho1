#include "../acessorios-hpp/BoladePoder.hpp"

BoladePoder::BoladePoder(string descricaoArma, int minForca, int maxForca)
    : ArmaAtaque(descricaoArma, minForca, maxForca)
{
}

int BoladePoder::gerarForcaAtaque()
{
    return maxForca;
}

string BoladePoder::gerarRuidoAtaque()
{
    return "Kamehameha!";
}
