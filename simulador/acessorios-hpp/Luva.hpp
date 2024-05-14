#ifndef LUVA
#define LUVA

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class Luva : public ArmaDefesa
{
public:
    Luva(string descricaoArma, int resistencia);
    string getDescricaoArma() override;
    int getResistencia() override;
};

#endif
