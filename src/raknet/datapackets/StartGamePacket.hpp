#ifndef startgamepk
#define startgamepk
#include <iostream>
#include "../protocol/Packet.hpp"
#include "../../../include/ExtraFuncs.h"
class StartGamePacket : public Packet
{
public:
    const static int ID=0x95;
    int seed;
    unsigned char dimension;
    int generator;
    int gamemode;
    int64_t eid;
    int spawnX;
    int spawnY;
    int spawnZ;
    float x;
    float y;
    float z;

    StartGamePacket() {};
    void encode()
    {
        Packet::encode();
        buffer+=ID;
        putInt(seed);
        putByte(dimension);
        putInt(generator);
        putInt(gamemode);
        putLong(eid);
        putInt(spawnX);
        putInt(spawnY);
        putInt(spawnZ);
        putFloat(x);
        putFloat(y);
        putFloat(z);
        putByte('\0');


    }
    void decode()
    {
        Packet::decode();

    }

protected:

private:
};
#endif
