#pragma once

class Ponto {
public:
    Ponto(int x, int y) : _x(x), _y(y) {}

    // -------------------
    // Operadores unários
    // -------------------

    // -x
    // +x

    Ponto operator-() const {
        return Ponto(-_x, -_y);
    }

    // ------------------
    // Operadores ++ e --
    // ------------------
    // pré-fixo: ++ponto
    Ponto& operator++() {
        _x++;
        _y++;
        return *this;
    }

    // pós-fixo: ponto++
    Ponto operator++(int) {
        Ponto antigo = *this;
        _x++;
        _y++;
        return antigo;
    }

    // -------------------
    // Operadores binários
    // -------------------
    Ponto operator+(const Ponto &outro) {
        return Ponto(_x + outro._x, _y + outro._y);
    }

    Ponto operator-(const Ponto &outro) {
        return Ponto(_x - outro._x, _y - outro._y);
    }

    // ----------------------
    // Operadores relacionais
    // ----------------------
    bool operator==(const Ponto &outro) {
        return (_x == outro._x) and (_y == outro._y);
    }

    bool operator!=(const Ponto &outro) {
        return !operator==(outro);
    }

    // ------------------------
    // Operadores de atribuição
    // ------------------------
    // x = y = z
    Ponto &operator=(const Ponto &outro) {
        _x = outro._x;
        _y = outro._y;
        return *this;
    }

    void operator+=(const Ponto &outro) {
        _x += outro._x;
        _y += outro._y;
    }

    void operator*=(int escalar) {
        _x *= escalar;
        _y *= escalar;
    }

    // ------------------
    // Operadores () e []
    // ------------------
    // functor = objeto que funciona como função
    void operator()(int a, int b) {
        _x = a;
        _y = b;
    }

    int operator[](int i) {
        if (i == 0) return _x;
        if (i == 1) return _y;
        return -999;
    }

private:
    int _x;
    int _y;
};