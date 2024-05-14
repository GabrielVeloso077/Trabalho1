#ifndef CHARIZARD
#define CHARIZARD

#include "../core-simulador-hpp/Personagem.hpp"

class Charizard : public Personagem
{
public:
    Charizard(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};

#endif
