# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project

A C++20 training project implementing an interactive leap year checker. Single-file, no external dependencies.

## Build

Build using VSCode tasks (Ctrl+Shift+B) or directly from the terminal:

```bash
# GCC (primary)
g++ -g -std=c++20 *.cpp -o rooster.exe

# Clang
clang++.exe -g -std=c++20 *.cpp -o rooster.exe

# MSVC
cl.exe /Zi /std:c++latest /EHsc /Fe:rooster.exe *.cpp
```

Compilers available: `C:\MinGW64\bin\g++.exe`, `C:\mingw64\bin\clang++.exe`, `cl.exe`

## Run

```bash
./rooster.exe
```

Prompts for a year via stdin and prints whether it is a leap year.

## Architecture

- `main.cpp` — entire program; contains `isLeapYear(int) -> bool` and `main()`
- No test framework; no external libraries; C++20 standard
