#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

/**
 * @brief A classe Poligono é utilizada para armazenar e fazer operações com um vetor de pontos Point,
 * esse vetor irá representar um polígono e seus pontos serão inicializados em sentido anti-horario.
 */
class Poligono
{
    /**
     * @brief npontos é a quantidade de pontos que formam o poligono.
     */
    int npontos;
    /**
     * @brief poligono é o vetor que irá guardar os pontos, o poligono terá um máximo de 100 pontos.
     */
    Point poligono[100];

public:
    /**
     * @brief Poligono Nesse construtor, a variável npontos é inicializada com 0, indicando a criação de um poligono vazio.
     */
    Poligono();
    /**
     * @brief addponto Método que adiciona um ponto ao poligono na posição npontos.
     * @param _x Valor que corresponde a coordenada X do ponto que está sendo adicionado.
     * @param _y Valor que corresponde a coordenada Y do ponto que está sendo adicionado.
     */
    void addponto(float _x, float _y);
    /**
     * @brief getNumPontos Método que retorna o número de pontos que o poligono possui.
     * @return Será retornado um número inteiro.
     */
    int getNumPontos(void);
    /**
     * @brief imprime Método que mostra o poligono para o usuário no formato (x1,y1) -> (x2,y2) -> ... -> (xn,yn).
     */
    void imprime(void);
    /**
     * @brief area Método que calcula a área delimitada pelas arestas do polígono.
     * @return Será retornado um número float.
     */
    float area(void);
    /**
     * @brief translada Método que translada todos os pontos do polígono em X e Y de acordo com os parâmetros fornecidos.
     * @param a Valor do deslocamento no eixo X.
     * @param b Valor do deslocamento no eixo Y.
     */
    void translada(float a, float b);
    /**
     * @brief rotaciona Método que rotaciona todo o polígono em torno de um ponto fornecido em teta graus também fornescido.
     * @param p1 Ponto que será o eixo da rotação.
     * @param ang Ângulo da rotação.
     */
    void rotaciona(Point p1, float ang);
};

#endif // POLIGONO_H
