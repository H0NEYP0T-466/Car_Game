# 🚗 Car Game

![GitHub License](https://img.shields.io/github/license/H0NEYP0T-466/Car_Game?style=for-the-badge&color=brightgreen)
![GitHub Stars](https://img.shields.io/github/stars/H0NEYP0T-466/Car_Game?style=for-the-badge&color=yellow)
![GitHub Forks](https://img.shields.io/github/forks/H0NEYP0T-466/Car_Game?style=for-the-badge&color=blue)
![Contributions Welcome](https://img.shields.io/badge/Contributions-Welcome-brightgreen?style=for-the-badge)
![GitHub Issues](https://img.shields.io/github/issues/H0NEYP0T-466/Car_Game?style=for-the-badge&color=red)

> A classic console-based car racing game built in C++ where you dodge enemy cars and try to achieve the highest score possible!

## 🔗 Quick Links

- [🎮 Play Demo](#-how-to-play)
- [📖 Documentation](#-installation)
- [🐛 Issues](https://github.com/H0NEYP0T-466/Car_Game/issues)
- [🤝 Contributing](./CONTRIBUTING.md)

## 📋 Table of Contents

- [🚗 Car Game](#-car-game)
  - [🔗 Quick Links](#-quick-links)
  - [📋 Table of Contents](#-table-of-contents)
  - [📖 About](#-about)
  - [✨ Features](#-features)
  - [🛠️ Built With](#️-built-with)
  - [📦 Installation](#-installation)
    - [Prerequisites](#prerequisites)
    - [Setup Steps](#setup-steps)
  - [🎮 How to Play](#-how-to-play)
  - [📁 Project Structure](#-project-structure)
  - [🤝 Contributing](#-contributing)
  - [📄 License](#-license)
  - [🗺️ Roadmap](#️-roadmap)
  - [🙏 Acknowledgments](#-acknowledgments)

## 📖 About

Car Game is an exciting console-based racing game that challenges players to navigate through traffic while avoiding collisions with enemy vehicles. Built entirely in C++, this game demonstrates classic game development concepts including:

- Real-time console graphics manipulation
- Collision detection algorithms
- Score tracking and persistence
- Simple AI for enemy vehicle movement
- Interactive menu system

The game features ASCII art graphics, smooth gameplay mechanics, and a ranking system to track high scores across gaming sessions.

## ✨ Features

- 🎯 **Real-time Gameplay** - Smooth car movement and enemy AI
- 🏆 **Score System** - Track your high scores with persistent storage
- 🎨 **ASCII Graphics** - Retro-style console-based visuals
- 🎮 **Simple Controls** - Easy-to-learn keyboard controls ('a' for left, 'd' for right)
- 📊 **Rankings** - View your best scores and compete with yourself
- 🔄 **Infinite Gameplay** - Continuous enemy spawning for endless fun
- 💾 **Score Persistence** - Scores are saved to file for future sessions
- 🎵 **Menu System** - User-friendly interface with multiple options

## 🛠️ Built With

### Languages
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)

### Libraries & APIs
![Windows API](https://img.shields.io/badge/Windows%20API-0078D4?style=for-the-badge&logo=windows&logoColor=white)

### Tools
![Visual Studio](https://img.shields.io/badge/Visual%20Studio-5C2D91?style=for-the-badge&logo=visualstudio&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)

### Platform
![Windows](https://img.shields.io/badge/Windows-0078D4?style=for-the-badge&logo=windows&logoColor=white)

## 📦 Installation

### Prerequisites

Before running the Car Game, ensure you have:

- **Windows Operating System** (Required for Windows API functions)
- **C++ Compiler** supporting C++11 or later
  - Microsoft Visual Studio (Recommended)
  - MinGW-w64
  - Dev-C++
- **Git** for cloning the repository

### Setup Steps

1. **Clone the repository**
   ```bash
   git clone https://github.com/H0NEYP0T-466/Car_Game.git
   cd Car_Game
   ```

2. **Compile the game**
   ```bash
   # Using g++ (MinGW)
   g++ -o car_game project.cpp
   
   # Using Visual Studio Developer Command Prompt
   cl project.cpp /Fe:car_game.exe
   ```

3. **Run the game**
   ```bash
   # Windows
   ./car_game.exe
   # or simply
   car_game
   ```

## 🎮 How to Play

1. **Launch the game** by running the compiled executable
2. **Choose from the main menu:**
   - `1` - Start Game
   - `2` - Instructions
   - `3` - Rankings
   - `4` - Quit

3. **Game Controls:**
   - `A` or `a` - Move car left
   - `D` or `d` - Move car right
   - Avoid enemy cars falling from above!

4. **Scoring:**
   - Earn points for each enemy car you successfully avoid
   - Try to beat your high score!
   - Scores are automatically saved to `scores.txt`

5. **Game Over:**
   - Game ends when your car collides with an enemy
   - Your final score will be displayed
   - Option to play again or return to main menu

## 📁 Project Structure

```
Car_Game/
├── 📄 project.cpp              # Main game source code
├── 📄 README.md               # Project documentation
├── 📄 LICENSE                 # MIT License
├── 📄 CONTRIBUTING.md         # Contribution guidelines
├── 📄 Car-Game-Code.pptx      # Additional documentation
├── 📄 Documentation.pdf       # Project documentation
└── 📄 scores.txt              # High scores file (generated)
```

### Key Components in `project.cpp`:

- **Game Engine Functions:**
  - `main()` - Entry point and menu system
  - `play()` - Main game loop
  - `collision()` - Collision detection logic

- **Graphics Functions:**
  - `drawCar()` - Renders player car
  - `drawEnemy()` - Renders enemy vehicles
  - `drawBorder()` - Game area boundaries
  - `gotoxy()` - Console cursor positioning

- **Game Logic:**
  - `genEnemy()` - Enemy spawning system
  - `updateScore()` - Score management
  - `saveScoreToFile()` - Score persistence

## 🤝 Contributing

We welcome contributions from the community! Please read our [Contributing Guidelines](./CONTRIBUTING.md) for details on:

- How to submit bug reports
- How to suggest new features
- Code style and standards
- Pull request process

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.

## 🗺️ Roadmap

### ✅ Current Features
- [x] Basic car movement and controls
- [x] Enemy car spawning and movement
- [x] Collision detection
- [x] Score tracking and persistence
- [x] Menu system with instructions and rankings

### 🚀 Planned Features
- [ ] **Enhanced Graphics** - Improved ASCII art and animations
- [ ] **Power-ups** - Speed boost, invincibility, extra lives
- [ ] **Multiple Difficulty Levels** - Easy, Medium, Hard modes
- [ ] **Sound Effects** - Basic console beeps for actions
- [ ] **Multiplayer Support** - Local two-player mode
- [ ] **Statistics** - Detailed game statistics and analytics

### 🔮 Future Vision
- [ ] **Cross-platform Support** - Linux and macOS compatibility
- [ ] **GUI Version** - Modern graphics using SDL or SFML
- [ ] **Online Leaderboards** - Global high score competition
- [ ] **Theme System** - Different visual themes and car designs
- [ ] **Mobile Port** - Android/iOS version

## 🙏 Acknowledgments

- **Game Design Inspiration** - Classic arcade racing games
- **ASCII Art** - Retro gaming community
- **Windows Console API** - Microsoft documentation and examples
- **C++ Community** - For excellent resources and tutorials
- **Open Source Contributors** - Everyone who helps improve this project

### 🛠️ Tech Stack Details

This project leverages several key technologies:

- **C++ Standard Library** - Core functionality and data structures
- **Windows Console API** - For graphics rendering and input handling
- **File I/O Operations** - Score persistence and data management
- **Memory Management** - Efficient resource utilization
- **Object-Oriented Design** - Clean, maintainable code structure

---

<div align="center">

**Made with ❤️ by [H0NEYP0T-466](https://github.com/H0NEYP0T-466)**

⭐ Star this repo if you enjoyed the game! ⭐

</div>