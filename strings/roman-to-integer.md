# 🏛️ Roman to Integer

## 📌 Problem Statement

Roman numerals are represented by seven symbols:

| Symbol | Value |
|--------|------|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

Numbers are usually written from largest to smallest from left to right.

However, in some cases, a smaller number placed before a larger number indicates subtraction.

### Special Cases:
- I before V or X → 4, 9
- X before L or C → 40, 90
- C before D or M → 400, 900

---

## 🎯 Objective

Given a Roman numeral string `s`, convert it to an integer.

---

## 🧠 Approach Used

### 🔑 Core Idea

We traverse the string from left to right and compare each character with the next one.

### Rule:
- If current value < next value → **subtract**
- Otherwise → **add**

---

## ⚙️ Algorithm

1. Create a mapping of Roman symbols to integers
2. Initialize result = 0
3. Traverse the string:
   - If current < next → subtract current
   - Else → add current
4. Return result

---
