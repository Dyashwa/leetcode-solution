# 🔐 Valid Parentheses

## 🔹 Problem Statement

Given a string `s` containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

A string is valid if:
- Open brackets are closed by the same type  
- Open brackets are closed in the correct order  
- Every closing bracket has a corresponding opening bracket  

---

## 🔹 Example

Input:
s = "([])"

Output:
true

---

## 🔹 Approach

### 🧠 Idea

Use a stack to keep track of opening brackets.

---

### 🔍 Steps

1. Initialize an empty stack  
2. Traverse the string  
3. If opening bracket → push into stack  
4. If closing bracket:
   - If stack is empty → return false  
   - Pop top element  
   - Check if it matches  
5. After traversal:
   - If stack is empty → valid  
   - Else → invalid  

---

## 🔹 Complexity

Time Complexity: O(n)  
Space Complexity: O(n)

---

## 🔹 Learnings

- Stack implementation using arrays in C  
- LIFO (Last In First Out) concept  
- Matching pairs using stack  
- Early exit on mismatch  
- Handling edge cases like empty stack  

---

## 🔹 Key Insight

A closing bracket must always match the most recent opening bracket.

---