# 🤝 Contributing to Car Game

First off, thank you for considering contributing to Car Game! 🎉 It's people like you that make Car Game such a great project.

## 📋 Table of Contents

- [🤝 Contributing to Car Game](#-contributing-to-car-game)
  - [📋 Table of Contents](#-table-of-contents)
  - [🚀 Getting Started](#-getting-started)
  - [🔧 Development Setup](#-development-setup)
  - [📝 How to Contribute](#-how-to-contribute)
    - [🐛 Reporting Bugs](#-reporting-bugs)
    - [💡 Suggesting Features](#-suggesting-features)
    - [🔀 Submitting Pull Requests](#-submitting-pull-requests)
  - [📏 Code Style Guidelines](#-code-style-guidelines)
  - [🧪 Testing Guidelines](#-testing-guidelines)
  - [📚 Documentation Updates](#-documentation-updates)
  - [🏷️ Commit Message Convention](#️-commit-message-convention)
  - [📞 Getting Help](#-getting-help)

## 🚀 Getting Started

1. **Fork the repository** on GitHub
2. **Clone your fork** locally:
   ```bash
   git clone https://github.com/YOUR_USERNAME/Car_Game.git
   cd Car_Game
   ```
3. **Create a new branch** for your feature or bug fix:
   ```bash
   git checkout -b feature/amazing-feature
   # or
   git checkout -b fix/bug-description
   ```

## 🔧 Development Setup

### Prerequisites
- **Windows OS** (required for Windows API functions)
- **C++ Compiler** (Visual Studio, MinGW, or Dev-C++)
- **Git** for version control
- **Text Editor** or IDE of your choice

### Compilation
```bash
# Using g++ (MinGW)
g++ -o car_game project.cpp -std=c++11

# Using Visual Studio
cl project.cpp /Fe:car_game.exe
```

## 📝 How to Contribute

### 🐛 Reporting Bugs

Before submitting a bug report, please:

1. **Check existing issues** to avoid duplicates
2. **Test with the latest version** of the code
3. **Gather relevant information** about your environment

When filing a bug report, please include:

- **Clear title** describing the issue
- **Detailed description** of the problem
- **Steps to reproduce** the bug
- **Expected vs actual behavior**
- **System information** (OS version, compiler, etc.)
- **Screenshots** if applicable
- **Code samples** that demonstrate the issue

**Bug Report Template:**
```markdown
**Bug Description:**
A clear and concise description of the bug.

**To Reproduce:**
1. Compile with '...'
2. Run the game
3. Click on '...'
4. See error

**Expected Behavior:**
What you expected to happen.

**Screenshots:**
If applicable, add screenshots to help explain your problem.

**Environment:**
- OS: [e.g., Windows 10]
- Compiler: [e.g., g++ 9.2.0]
- Version: [e.g., commit hash]
```

### 💡 Suggesting Features

We love feature suggestions! To suggest a new feature:

1. **Check existing issues** and discussions
2. **Open a new issue** with the "feature request" label
3. **Describe the feature** in detail
4. **Explain the use case** and benefits
5. **Consider implementation** challenges

**Feature Request Template:**
```markdown
**Feature Description:**
A clear description of the feature you'd like to see.

**Use Case:**
Explain why this feature would be useful.

**Proposed Implementation:**
How do you think this could be implemented?

**Additional Context:**
Any other context, screenshots, or examples.
```

### 🔀 Submitting Pull Requests

1. **Create a new branch** from `main`:
   ```bash
   git checkout -b feature/your-feature-name
   ```

2. **Make your changes** following our coding standards

3. **Test your changes** thoroughly:
   ```bash
   # Compile and test
   g++ -o car_game project.cpp
   ./car_game
   ```

4. **Commit your changes** with a clear message:
   ```bash
   git add .
   git commit -m "Add: New feature description"
   ```

5. **Push to your fork**:
   ```bash
   git push origin feature/your-feature-name
   ```

6. **Create a Pull Request** on GitHub with:
   - Clear title and description
   - Reference to related issues
   - Screenshots/GIFs if UI changes
   - Testing instructions

## 📏 Code Style Guidelines

### General Guidelines
- **Consistent indentation** using 4 spaces (no tabs)
- **Meaningful variable names** in camelCase
- **Function names** in camelCase
- **Constants** in UPPER_SNAKE_CASE
- **Comments** for complex logic and algorithms

### C++ Specific
```cpp
// Good examples
int playerScore = 0;
const int MAX_ENEMIES = 3;

void updateGameState() {
    // Function implementation
}

// Function comments
/**
 * Checks for collision between player car and enemies
 * @return 1 if collision detected, 0 otherwise
 */
int collision() {
    // Implementation
}
```

### File Organization
- Keep related functions together
- Add header comments explaining file purpose
- Use consistent spacing between functions
- Include necessary headers only

### Error Handling
```cpp
// Check file operations
ofstream outFile("scores.txt", ios::app);
if (!outFile.is_open()) {
    cout << "Error: Unable to open scores file!" << endl;
    return;
}
```

## 🧪 Testing Guidelines

### Manual Testing
1. **Compile successfully** without warnings
2. **Test all menu options** (Start Game, Instructions, Rankings, Quit)
3. **Test game controls** (left/right movement)
4. **Test collision detection** (intentionally crash)
5. **Test score system** (verify score increments and saves)
6. **Test edge cases** (rapid key presses, boundary conditions)

### Testing Checklist
- [ ] Game compiles without errors/warnings
- [ ] All menu options work correctly
- [ ] Car movement is responsive
- [ ] Enemy cars spawn and move properly
- [ ] Collision detection works accurately
- [ ] Score tracking functions correctly
- [ ] Score persistence works (check scores.txt)
- [ ] Game can be restarted multiple times
- [ ] No memory leaks or crashes

## 📚 Documentation Updates

When making changes that affect:
- **User interface** - Update README.md screenshots/descriptions
- **Game controls** - Update instructions in README.md
- **Installation process** - Update setup instructions
- **New features** - Add to Features section and Roadmap
- **API changes** - Update relevant documentation

## 🏷️ Commit Message Convention

Use clear, descriptive commit messages:

```
Type: Brief description

Detailed explanation if needed.

- Add bullet points for multiple changes
- Reference issues with #123
- Include breaking changes information
```

**Types:**
- `Add:` New features or functionality
- `Fix:` Bug fixes
- `Update:` Modifications to existing features
- `Remove:` Deleted features or code
- `Docs:` Documentation changes
- `Style:` Code formatting (no functional changes)
- `Refactor:` Code restructuring
- `Test:` Adding or modifying tests

**Examples:**
```
Add: Collision detection for multiple enemies

- Implement multi-enemy collision checking
- Add boundary checking for car position
- Fixes #15

Fix: Score not saving when game closes unexpectedly

- Add proper file handling in saveScoreToFile()
- Ensure file is closed even on exceptions
- Resolves issue #23
```

## 📞 Getting Help

If you need help with contributing:

1. **Check existing documentation** in this file and README.md
2. **Search closed issues** for similar questions
3. **Open a new issue** with the "question" label
4. **Be specific** about what you're trying to accomplish

### Communication Guidelines
- Be respectful and constructive
- Provide context and details
- Share code snippets when relevant
- Use English for all communications

---

Thank you for contributing to Car Game! 🚗💨 Your efforts help make this project better for everyone.

**Happy Coding!** 🎮✨