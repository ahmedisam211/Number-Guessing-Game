# 🎯 Number Guessing Game (C++ CLI)

Welcome to the Number Guessing Game! This is a simple command-line based game written in C++ where the computer randomly selects a number between 1 and 100, and the user has to guess it within a limited number of attempts based on the selected difficulty level.

🔗 **Project URL:** [https://roadmap.sh/projects/number-guessing-game](https://roadmap.sh/projects/number-guessing-game)

---
## 📄 License

This project is licensed under the [MIT License](LICENSE). Feel free to use, modify, and distribute it.

## 📋 Game Features

- ✅ CLI-based interactive game
- 🎚 Three difficulty levels: Easy (10), Medium (5), Hard (3)
- 🔢 Random number generation between 1 and 100
- 💡 Hints (even/odd) when you're down to the last attempt
- ⏱ Timer to track how long you take to guess
- 🏆 High score tracking based on fewest attempts
- 🔁 Option to replay the game after each round

---

## 🚀 How to Run

### 🛠 Prerequisites

Make sure you have a C++ compiler installed. Examples:
- GCC / G++ (Linux, macOS, Windows via MinGW)
- MSVC (Microsoft Visual C++ compiler)

### 💻 Compile and Run

#### On Linux / macOS

```bash
g++ -o guessing_game main.cpp
./guessing_game
```

#### On Windows (with g++)

```bash
g++ -o guessing_game.exe main.cpp
guessing_game.exe
```

> Replace `main.cpp` with your actual source file name if different.

---

## 🎮 Sample Gameplay

```plaintext
🎮 Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100.
Try to guess it in as few attempts as possible.

Please select the difficulty level:
1. Easy (10 chances)
2. Medium (5 chances)
3. Hard (3 chances)
Enter your choice: 2

Great! You have selected Medium difficulty.
Let's start the game!

Enter your guess: 50
Incorrect! The number is less than 50. You have 4 chances left.

Enter your guess: 25
Incorrect! The number is greater than 25. You have 3 chances left.

Enter your guess: 30
🎉 Congratulations! You guessed the correct number in 3 attempts.
⏱️ Time taken: 12 seconds.
🏆 New High Score!
```

---

## 🙌 Contributing

If you'd like to suggest improvements, report bugs, or contribute code:
- Fork the repository
- Create a feature branch
- Open a Pull Request

---

## 📄 License

This project is licensed under the [MIT License](LICENSE). Feel free to use, modify, and distribute it.

---

## ✨ Acknowledgments

This project idea is part of [roadmap.sh's project collection](https://roadmap.sh/projects/number-guessing-game).
