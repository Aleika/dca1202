#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/**
 * @brief A classe Retangulo irá manusear um tipo específico de polígono, o retângulo.
 */
class Retangulo : public Poligono{

public:
    /**
     * @brief Retangulo Construtor padrão para uma chamada sem parâmetros que cria um retângulo sem nenhum ponto.
     */
    Retangulo();
    /**
     * @brief Retangulo Construtor no qual o retângulo será totalmente inicializado de acordo com os parâmetros fornecidos,
     * lembrando que por ser um polígono, ele será formado 4 pontos iniciados em sentido anti-horário.
     * @param x Posicão X do primeiro ponto do retângulo (superior esquerdo) que será o referêncial para os pontos seguintes.
     * @param y Posição Y do primeiro ponto do retângulo (superior esquerdo) que será o referêncial para os pontos seguintes.
     * @param largura Largura do retângulo (Variação no eixo X).
     * @param altura Altura do retângulo (variação no eixo Y).
     */
    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
