#ifndef CRISTIANORONALDO
#define CRISTIANORONALDO

#include "../core-simulador-hpp/Personagem.hpp"

class CristianoRonaldo : public Personagem
{
public:
    CristianoRonaldo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};

#endif
