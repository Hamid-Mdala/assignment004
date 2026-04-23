# Assignment 004

## Overview
This repository contains solutions to Assignment 004, which consists of three C++ programming problems. Each problem is implemented in a separate file and can be compiled and run independently. The assignment focuses on dynamic memory management, array manipulation, and class operations in C++.

## Assignment Questions (Summary)

**Note:** The following summaries are based on the assignment's mock questions PDF.

### Problem 1: Student Information Swap (problem1.cpp)
- Implement a `Person` class with member variables for name, student ID, and age.
- Provide methods to initialize, print, and access these variables.
- Write a function to swap all information between two `Person` objects.
- Demonstrate the swap by initializing two students, printing their info before and after the swap.

### Problem 2: Seat Map Backup and Analysis (problem2.cpp)
- Dynamically allocate a 10x10 integer array to represent a seat map.
- Assign values to specific seats and print the map.
- Create a backup of the seat map using dynamic allocation and memory copy.
- Clear a specific row in the original map and show that the backup remains unchanged.
- Find and print the row in the backup with the most assigned seats.
- Release all dynamically allocated memory.

### Problem 3: Dynamic Dictionary Operations (problem3.cpp)
- Dynamically create a list to store up to 5 words.
- Store a set of words, print the list, and search for a specific word.
- Update a word at a given index and print the updated list.
- Delete a word by value, shift the remaining words, and print the final list.
- Release all dynamically allocated memory.

## How to Compile and Run Each Problem

Each problem is implemented as a standalone C++ file. You can compile and run them separately using `g++` or any C++ compiler.

### Example Commands (Linux/Mac)

#### Problem 1
```bash
g++ -o problem1 problem1.cpp
./problem1
```

#### Problem 2
```bash
g++ -o problem2 problem2.cpp
./problem2
```

#### Problem 3
```bash
g++ -o problem3 problem3.cpp
./problem3
```

## Notes
- Each program manages its own memory and does not depend on the others.
- No external libraries are required beyond the C++ standard library.
- The assignment demonstrates safe dynamic memory usage and basic data structure manipulation in C++.

---
For more details, refer to the comments in each source file and the assignment PDF.
