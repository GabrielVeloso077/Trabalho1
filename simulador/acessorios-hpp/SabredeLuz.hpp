#ifndef SABREDELUZ
#define SABREDELUZ

#include "../core-simulador-hpp/ArmaAtaque.hpp"

class SabredeLuz : public ArmaAtaque
{
public:
    SabredeLuz(string descricaoArma, int minForca, int maxForca);
    int gerarForcaAtaque() override;
    string gerarRuidoAtaque() override;
};

#endif
