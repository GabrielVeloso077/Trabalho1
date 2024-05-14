#ifndef ZEDAMANGA
#define ZEDAMANGA

#include "../core-simulador-hpp/Personagem.hpp"

class ZedaManga : public Personagem
{
public:
    ZedaManga(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};

#endif
