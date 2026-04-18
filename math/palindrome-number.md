# 🔢 Palindrome Number

## 🔹 Problem Statement

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

---

## 🔹 Example

**Input:**

```
x = 121
```

**Output:**

```
true
```

---

## 🔹 Approach

### 🧠 Idea

Instead of reversing the entire number (which can cause overflow), we reverse **only half of the number** and compare it with the remaining half.

---

## 🔍 Steps

1. If number is negative → return false
2. If number ends with 0 (except 0) → return false
3. Reverse half of the number using loop
4. Stop when reversed >= remaining number
5. Compare:

   * `x == reversed` (even digits)
   * `x == reversed / 10` (odd digits)


---

## 🔹 Complexity

* **Time Complexity:** O(log n)
* **Space Complexity:** O(1)

---

## 🔹 Learnings

* Avoid integer overflow
* Reverse only half of number
* Handle edge cases carefully

---

## 🔹 Pattern

**Math + Number Manipulation**
