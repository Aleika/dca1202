#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class serve para realizar operações com pontos do tipo float
 */
class Point
{
private:
    float x;
    float y;

public:

    /**
     * @brief Point é o construtor da classe Point.
     * @details Quando não são informadas as coordenadas do ponto, o construtor cria um ponto com as coordenadas (0,0).
     */
    Point();
    /**
     * @brief Point é a sobrecarga do construtor Point().
     * @details Point recebe como parâmetros as coordenadas x e y, respectivamente.
     * @param _x é a coordenada x do ponto.
     * @param _y é a coordenada y do ponto.
     */
    Point(float _x, float _y);
    /**
     * @brief Método que armazena a coordenada x do ponto.
     * @param _x é a coordenada x do ponto.
     */
    void setX(float _x);
    /**
     * @brief Método que armazena a coordenada y do ponto.
     * @param _y é a coordenada y do ponto.
     */
    void setY(float _y);
    /**
     * @brief Método que armazena as coordenadas x e y do ponto;
     * @param _x é a coordenada x.
     * @param _y é a coordenada y.
     */
    void setXY(float _x, float _y);

    /**
     * @brief Método que recupera a coordenda x do ponto
     * @return retorna a coordenda x do ponto
     */
    float getX(void);
    /**
     * @brief Método que recupera a coordenda y do ponto
     * @return retorna a coordenda y do ponto
     */
    float getY(void);

    /**
     * @brief Método que adiciona as coordenadas de um ponto a outro ponto conhecido.
     * @details Adiciona as coordenadas x e y de um ponto com as coordenadas de um outro ponto
     * x1 e y1 fornecido, armazenando o resultado (x+x1,y+y1) nas coordenadas de um novo ponto.
     * @param p1 é o ponto que será somado.
     * @return retorna o novo ponto resultado da soma entre dois pontos.
     */
    Point add(Point p1);

    /**
    * @brief Método que subtrai as coordenadas de um ponto a outro ponto conhecido.
    * @details Subtrai as coordenadas x e y de um ponto com as coordenadas de um outro ponto
    * x1 e y1 fornecido, armazenando o resultado (x-x1,y-y1) nas coordenadas de um novo ponto.
    * @param p1 é o ponto que será subtraído.
    * @return retorna o novo ponto resultado da subtração entre dois pontos.
    */
    Point sub(Point p1);

    /**
     * @brief Método que calcula a distância de um ponto até a origem do sistema de coordenadas.
     * @return retorna o resultado da norma.
     */
    float norma(void);

    /**
     * @brief Método que translada o ponto em a e b unidades.
     * @param a valor que deve ser transladada a coordenada x do ponto.
     * @param b valor que dedve ser transladada a coordenada y do ponto.
     */
    void translada(float a, float b);

    /**
     * @brief Método que imprime o ponto.
     * @details O ponto é impresso na forma (xy)
     */
    void imprime(void);

};

#endif // POINT_H
