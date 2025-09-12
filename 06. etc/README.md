# SecuVaultix 🔐

SecuVaultix is my personal project idea for building an advanced password manager written in pure C.

The goal is to build a secure tool for storing and managing passwords while exploring how password management systems actually work under the hood.  

This project combines **databases, data structures, and custom cryptographic techniques** with a focus on learning, experimenting, and applying cybersecurity concepts in practice.  

---

## 🚀 Key Features

- **Custom Hashing Algorithm**  
  A self-designed hashing system that applies shifting, XOR operations, randomized values, and iterative salt generation.  
  The purpose is to learn how hashing functions behave, compare them with standard algorithms like SHA or MD5, and experiment with security trade-offs.

- **SQLite Integration**  
  Uses SQLite for storing account credentials and metadata. A simple, file-based database that makes the project lightweight but structured.

- **Security Layers**  
  Mechanisms like integrity checks, event logging, and lockouts are planned to defend against brute-force or unauthorized access.

- **Data Structures in Action**  
  Core C structures (arrays, queues, stacks, hash maps) are applied to handle data flow efficiently inside the password manager.

---

## 🧩 Hashing Concept (Overview)

1. Generate random numbers:  
   - `n` between 1   `–to–`   9  
   - `a` between 1   `–to–`   strlen * n  
   - `b` between (strlen * n)   `–to–`   ((a * n)+(strlen * n))

2. Process password characters in groups of three:  
   - 1st → shifted by `a`  
   - 2nd → shifted by `b`  
   - 3rd → XOR’ed with `a*b` (restricted to printable ASCII 34–126)  

3. After every 3 characters, insert a **salt** built from `(strlen + n + a + b)` down to `0`, mapped into ASCII (printable range).  

4. Repeat with fresh randoms for the next group of three.  

The final stored value = **hash + encoded random values**, combined in a way that allows verification but resists direct reversal.

---

## 📂 Project Structure

- `documents/` → Screenshots, videos, design notes, texts.  
- `source/` → Main C source files implementing functions.  
- `include/` → Header files for declarations.  
- `database/` → C files for SQLite database handling.  
- `tests/` → Test programs for verifying functionality.  

---

## 🎯 Goals

- Develop a fully functional password manager in C.  
- Gain practical experience with **SQLite**, custom hashing, and secure data storage.  
- Show how **data structures** directly support cybersecurity solutions.  
- Create a unique approach instead of reusing existing libraries only.  

---

## ⚡ Status

Active development. First step: database integration + custom hashing implementation.