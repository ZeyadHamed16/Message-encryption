# Message Protector

## Overview
This is a simple C++ program that demonstrates message encryption and decryption using a basic shift cipher technique. It’s a great beginner project to learn about string manipulation, ASCII conversions, and basic algorithms in C++.

---
---

## Features
1- Message Protection
Converts a plain text message into an encoded message by shifting each character by 3 positions in the ASCII table.

2- Message Recovery
Decodes the protected message by reversing the shift to reveal the original text.

3- Reusable Functions
protectMessage: Encrypts a given message.
solveProtectMessage: Decrypts a protected message.

4- Interactive Console Application
Guides the user to protect and recover messages through a user-friendly console interface.

---
---

## Usage
1. Protect a Message
- Input: A plain text message.
- Output: A protected message with characters shifted by 3 positions.

3. Recover a Protected Message
- Input: An encoded message.
- Output: The original plain text message.

---
---

## How to Run
- Clone the repository: git clone https://github.com/your-username/message-protector.git
- Navigate to the project folder: cd message-protector
- Compile the code using a C++ compiler: g++ -o message_protector main.cpp
- Run the program: ./message_protector

---
---

Code Snippets
- Protect a Message:
``` C++
void protectMessage(string w)
{
    int wordLength = w.length();
    for (int i = 0; i < wordLength; i++)
    {
        int wordNum = (int)w[i];
        wordNum += 3;
        cout << (char)wordNum;
    }
}
```
- Solve a Protected Message:
``` C++
void solveProtectMessage(string pw)
{
    int wordLength = pw.length();
    for (int i = 0; i < wordLength; i++)
    {
        int wordNum = (int)pw[i];
        wordNum -= 3;
        cout << (char)wordNum;
    }
}
```
---
---

## Learning Objectives
- String handling in C++.
- ASCII table manipulations.
- Implementing reusable functions.
- Basic input/output with cin and getline.

---
---

## Contributing
1. Fork the repository.
2. Create a branch (git checkout -b feature-name).
3. Commit your changes (git commit -m "Add feature").
4. Push the branch (git push origin feature-name).
5. Submit a pull request.
