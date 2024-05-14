#ifndef ARCOEFLECHA
#define ARCOEFLECHA

#include "../core-simulador-hpp/ArmaAtaque.hpp"

class ArcoeFlecha : public ArmaAtaque
{
public:
    ArcoeFlecha(string descricaoArma, int minForca, int maxForca);
    int gerarForcaAtaque() override;
    string gerarRuidoAtaque() override;
};

#endif
