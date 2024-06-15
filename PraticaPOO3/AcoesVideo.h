#ifndef ACOESVIDEO_H_INCLUDED
#define ACOESVIDEO_H_INCLUDED
#include <iostream>

using namespace std;

class AcoesVideo {
    public:
        virtual void play() = 0;
        virtual void pause() = 0;
        virtual void like() = 0;
        virtual ~AcoesVideo() = 0;
};

#endif // ACOESVIDEO_H_INCLUDED
