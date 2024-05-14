#ifndef CASCO
#define CASCO

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class Casco : public ArmaDefesa
{
public:
    Casco(string descricaoArma, int resistencia);
    string getDescricaoArma() override;
    int getResistencia() override;
};

#endif
