/*
** EPITECH PROJECT, 2019
** openApp
** File description:
** Main
*/

#include <SDL2/SDL.h>

#include <openApp/Core/Log.hpp>
#include <openApp/Types/Error.hpp>

#include "Audio.hpp"

int main(void)
{
    try {
        SDL_Init(SDL_INIT_TIMER);
        oA::Audio::Initialize();
        auto voice = oA::Audio::OpenVoice();

        voice->play();
        SDL_Delay(3000);
        return 0;
    } catch (const oA::Error &e) {
        oA::cerr << e.what() << oA::endl;
        return 84;
    }
}