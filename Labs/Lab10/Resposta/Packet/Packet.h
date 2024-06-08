#include <iostream>
using namespace std;

union Data
{
    struct
    {
        short x;                    // 16 bits
        short y;                    // 16 bits
        short z;                    // 16 bits
        short w;                    // 16 bits
    }
    part;

    long long all;                  // 64 bits
};

class Packet
{
private:
    Data data;
    int index;

public:
    Packet();                       // construtor

    void begin();                   // inicia empacotamento
    void end();                     // finaliza empacotamento
    void send();                    // envia (exibe) pacote
    short& operator[](int index);

    friend istream& operator>>(istream& is, Packet& p);
    friend ostream& operator<<(ostream& os, const Packet& p);
};