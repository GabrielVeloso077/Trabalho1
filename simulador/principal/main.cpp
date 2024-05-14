#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/SabredeLuz.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/BoladePoder.hpp"
#include "../acessorios-hpp/Lanca.hpp"
#include "../acessorios-hpp/ArcoeFlecha.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Balao.hpp"
#include "../acessorios-hpp/Luva.hpp"
#include "../acessorios-hpp/Casco.hpp"
#include "../acessorios-hpp/Pedra.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Naruto.hpp"
#include "../personagens-hpp/Goku.hpp"
#include "../personagens-hpp/Charizard.hpp"
#include "../personagens-hpp/CristianoRonaldo.hpp"
#include "../personagens-hpp/ZedaManga.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* rosa  = new Rosa("Super Rosa Amarela", 0, 10);
    ArmaAtaque* colher = new Colher("Colher de Pata", 0, 50);
    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaAtaque* sabre = new SabredeLuz("Sabre de Luz", 0, 20);
    ArmaAtaque* espada = new Espada("Espada de Aço", 0, 30);
    ArmaAtaque* bola = new BoladePoder("Bola de Poder", 0, 40);
    ArmaAtaque* lanca = new Lanca("Lança de Fogo", 0, 25);
    ArmaAtaque* arco = new ArcoeFlecha("Arco e Flecha", 0, 35);
    ArmaDefesa* armadura = new Armadura("Aço", 2);
    ArmaDefesa* balao = new Balao("Plástico", 3);
    ArmaDefesa* luva = new Luva("Couro", 4);
    ArmaDefesa* casco = new Casco("Metal", 5);
    ArmaDefesa* pedra = new Pedra("Rocha", 6);
    
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 100, rosa, escudo);
    Personagem* p2 = new Chaves(2, "Chaves Eq2", 40, colher, escudo);
    Personagem* p3 = new Naruto(3, "Naruto", 90, sabre, armadura);
    Personagem* p4 = new Goku(4, "Goku", 120, espada, balao);
    Personagem* p5 = new Charizard(5, "Charizard", 80, bola, luva);
    Personagem* p6 = new CristianoRonaldo(6, "Cristiano Ronaldo", 110, lanca, casco);
    Personagem* p7 = new ZedaManga(7, "ZedaManga", 95, arco, pedra);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);
    simulador->adicionarPersonagem(p7, 1);
    
    simulador->iniciarSimulacao();

    return 0;
}
