# Student Grading System — C++

## Overview

This repository contains a **Student Grading System** implemented in **C++**, developed as a learning project by an undergraduate student to practice and apply fundamental C++ programming concepts.

The project demonstrates **two different implementations of the same problem statement**, highlighting the progression from a **procedural programming approach** to a **structured object-oriented design**.

---

## Problem Statement

Create a program that:
- Accepts student marks as input
- Calculates grades based on predefined criteria
- Displays results in a clear and structured format

### Grading Criteria
| Average Marks | Grade |
|--------------|-------|
| > 90 | A |
| > 80 | B |
| > 70 | C |
| > 60 | D |
| ≤ 60 | F |

---

## Repository Structure

```bash
.
├── v1.0.cpp   # Procedural implementation
├── v2.0.cpp   # Object-Oriented implementation
└── README.md
```

---

## Version 1.0 — Procedural Implementation

### Description

The first version implements the grading system using a **procedural programming approach**.
It focuses on handling user input, applying conditional logic, and storing results using STL containers.

### Features

* Accepts marks for multiple subjects
* Assigns grades based on individual subject marks
* Stores grades in a vector
* Handles invalid input using `cin` validation

### Concepts Demonstrated

* Conditional statements (`if-else`)
* Loops (`while`)
* Standard Template Library (`vector`)
* Basic input validation

### Limitations

* Subject indexing logic contains a minor flaw
* No abstraction or data encapsulation
* Grades are calculated per subject, not averaged

---

## Version 2.0 — Object-Oriented Implementation

### Description

The second version improves the design by using **object-oriented programming principles**.
A `Student` class is introduced to model real-world entities and responsibilities more accurately.

### Key Features

* Encapsulation of student data (name, ID, marks)
* Use of constructors (default and parameterized)
* Average mark calculation
* Final grade assignment based on average
* Structured and formatted output

### Concepts Demonstrated

* Classes and objects
* Encapsulation via getters and setters
* Use of `vector<pair<string, int>>`
* Modular and reusable code design

### Test Scenarios Included

* Default student initialization
* Student with valid marks
* Boundary grading case
* Low-score (fail) case
* Empty marks edge case

### Known Edge Case

If the marks vector is empty, calculating the average results in a division-by-zero error.
This scenario highlights the importance of defensive programming and proper edge case handling.

---

## Learning Outcomes

Through this project, the following skills were developed:

* Practical application of C++ fundamentals
* Improved understanding of STL containers
* Transition from procedural to object-oriented design
* Exposure to real-world edge cases and runtime errors
* Writing cleaner and more maintainable code

---

## Build and Run Instructions

Compile and execute the programs using a standard C++ compiler:

### Version 1.0

```bash
g++ v1.0.cpp -o v1
./v1
```

### Version 2.0

```bash
g++ v2.0.cpp -o v2
./v2
```

---