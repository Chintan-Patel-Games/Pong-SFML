#pragma once
#include <SFML/Audio.hpp>
#include <string>

namespace Sound
{
    enum class SoundType
    {
        BALL_BOUNCE,
        PONG_BGM
    };

    class SoundManager
    {
    private:
        static sf::Music backgroundMusic;
        static sf::Sound soundEffect;
        static sf::SoundBuffer ballBounce;

        static float backgroundMusicVolume;
        static const std::string bgmPath;
        static const std::string ballBouncePath;

        void Initialize();
        static void LoadSoundFromFile();

    public:
        SoundManager();

        static void PlaySoundEffect(SoundType soundType);
        static void PlayBackgroundMusic();
    };
}