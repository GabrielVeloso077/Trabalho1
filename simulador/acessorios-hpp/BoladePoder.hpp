#ifndef BOLADEPODER
#define BOLADEPODER

#include "../core-simulador-hpp/ArmaAtaque.hpp"

class BoladePoder : public ArmaAtaque
{
public:
    BoladePoder(string descricaoArma, int minForca, int maxForca);
    int gerarForcaAtaque() override;
    string gerarRuidoAtaque() override;
};

#endif
