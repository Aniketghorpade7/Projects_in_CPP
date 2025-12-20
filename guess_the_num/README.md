# 🎯 Number Guessing Game (C++)

This is a simple command-line number guessing game written in **C++**.  
It demonstrates standard input/output handling and, most importantly, the **modern and correct way to generate random numbers** using the C++11 `<random>` library.

---

## ⚙️ How It Works

- The program generates a **secret number** between `0` and `100`
- The user repeatedly guesses the number
- The program responds with:
  - `"Too high"`
  - `"Too low"`
- The game continues until the correct number is guessed

This keeps the logic simple while still showcasing real-world programming practices.

---

## 🎲 Random Number Generation Explained

This project intentionally avoids the legacy `rand()` function (which has known quality and predictability issues) and instead uses the **modern C++ `<random>` library**.

Below is the `rando()` function used in the program:

```cpp
int rando(){
    static mt19937 generator(random_device{}());
    uniform_int_distribution<int> distri(MINI, MAX);
    return distri(generator);
}
```

### 1️⃣ The Seed (std::random_device)

```cpp
random_device{}()
```

***Purpose:***
std::random_device is a non-deterministic random number generator. It requests randomness from the operating system, often sourced from hardware noise.

***Why we use it:***
It is used only once to seed the random engine. Without proper seeding, the program would generate the exact same sequence of numbers every time it runs, which defeats the purpose of randomness.

### 2️⃣ The Engine (std::mt19937)

```cpp
static mt19937 generator(...)
```


***Purpose:***
mt19937 is the Mersenne Twister 19937 algorithm — a high-quality and fast pseudo-random number generator widely used in games, simulations, and scientific applications.

Why static?
Declaring the generator as static ensures:

It is initialized only once

The random sequence continues properly across function calls

Better performance and improved randomness

Re-initializing the engine on every call would reduce randomness quality and waste resources.

### 3️⃣ The Distribution (std::uniform_int_distribution)

```cpp
uniform_int_distribution<int> distri(MINI, MAX)
```

***Purpose:***
Random engines generate large raw numbers. A distribution maps those numbers into a specific range, in this case 0 to 100.

Why “uniform”?
Uniform distribution ensures:

Every number has equal probability

No bias toward smaller or larger numbers

Fair gameplay

This prevents cases where some numbers appear more often than others.

## 🛠️ How to Compile and Run

### 1️⃣ Save the Code
Save the source file as:

```text
main.cpp
```

### 2️⃣ Compile the Program
Using g++:

```bash
g++ main.cpp -o guess_game
```

#### 3️⃣ Run the Program

```bash
#Windows
guess_game.exe
```

```bash
#Linux / macOS
./guess_game
```

# 🧠 Key Takeaway
Modern C++ treats randomness as a system, not a single function:

random_device provides entropy

mt19937 generates high-quality randomness

uniform_int_distribution ensures fairness

This project follows best practices and is suitable as a foundation for real applications and games.