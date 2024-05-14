#ifndef BALAO
#define BALAO

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class Balao : public ArmaDefesa
{
public:
    Balao(string descricaoArma, int resistencia);
    string getDescricaoArma() override;
    int getResistencia() override;
};

#endif
