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

## 💻 Code (C)

```c
int romanToInt(char *s) {
    int map[256] = {0};

    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;

    int result = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (map[s[i]] < map[s[i + 1]]) {
            result -= map[s[i]];
        } else {
            result += map[s[i]];
        }
    }

    return result;
}