#ifndef PEDRA
#define PEDRA

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class Pedra : public ArmaDefesa
{
public:
    Pedra(string descricaoArma, int resistencia);
    string getDescricaoArma() override;
    int getResistencia() override;
};

#endif
