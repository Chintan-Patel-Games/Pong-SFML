# Pong Game

This is a Pong-inspired game built using SFML. The game features classic gameplay mechanics, with a ball bouncing between two paddles controlled by the players. It includes real-time score tracking, sound effects for ball bounces, and background music, providing a simple yet engaging experience for two players.

## Features

- Classic Pong gameplay
- Real-time score tracking
- Sound effects for ball bounces
- Background music

## Requirements

- SFML (Simple and Fast Multimedia Library) version 2.x
- Visual Studio (any recent version)
- C++ compiler (MSVC)

## Installation (Visual Studio)

1. Clone the repository:
   ```bash
   git clone https://github.com/Chintan-Patel-Games/Pong-SFML.git
   ```
   
2. Open the project folder in Visual Studio:
   - Launch Visual Studio.
   - Open the project folder you just cloned.
   - Set up SFML in Visual Studio:

3. Download and extract SFML from the official website.
   - In Visual Studio, go to Project > Properties.
   - Under VC++ Directories, add the path to the SFML include folder in Include Directories and the lib folder in Library Directories.
   - Under Linker > Input, add sfml-graphics-d.lib, sfml-window-d.lib, and sfml-system-d.lib to Additional Dependencies (use the -d versions for debug mode).
   - Make sure to copy the necessary SFML DLL files (located in the bin folder of SFML) into your project's output directory.
  
4. Build the project:
   - Select Build > Build Solution from the top menu.

5. Run the game:
   - Press Ctrl+F5 to run the game.

## Controls

- [ ] Player 1 (Left Paddle): W (Up), S (Down)
- [ ] Player 2 (Right Paddle): Up Arrow (Up), Down Arrow (Down)
