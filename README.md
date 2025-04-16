# Binary Search Tree - Morse Code Translator

## Overview

This repository demonstrates the implementation of a **Binary Search Tree (BST)** in **C++** for the purpose of translating text into **Morse Code**. The program reads text from a file, processes it using a **Binary Search Tree** to store the cipher, and then converts the content into **Morse Code**. It showcases the use of **file handling** and **parsing** techniques in C++.

## Features

- **Binary Search Tree**: A basic implementation of a binary search tree to store and search for cipher data.
- **File Handling**: The program reads and writes data from files to handle input and output.
- **Morse Code Conversion**: The program reads a text file, converts the content into Morse Code, and prints the result.

## How It Works

1. The program **reads** a **cipher** from a file.
2. It **prints** the original text.
3. The program then **reads** another file containing text.
4. It **converts the text** to Morse Code using the stored cipher in the binary search tree.
5. The program **prints** the Morse Code translation to the console.

## File Structure

- `main.cpp`: The main file containing the program logic, including file handling, cipher reading, and Morse code conversion.
- `BSTClass.cpp`: Contains the implementation of the Binary Search Tree.
- `BSTNode.cpp` : Contains the implementation of the nodes used for the BST
- `morseCodeAlpha.txt`: Input file containing text that will be converted into Morse Code.
- `Convert.txt`: File containing the cipher used for Morse code translation.

## Requirements

- C++11 or later
- A C++ compiler (e.g., **g++**)

## Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/bst-morse-code.git
   cd bst-morse-code
