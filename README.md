# 🧠 LeetCode Solutions

This repository contains my daily LeetCode practice focused on building strong problem-solving skills and mastering patterns for coding interviews.

---

## 📅 Day 1: Two Sum

### 🔹 Problem Statement

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to target.

* Each input has exactly one solution
* You may not use the same element twice
* Return the answer in any order

---

### 🔹 Example

**Input:**

```
nums = [2,7,11,15], target = 9
```

**Output:**

```
[0,1]
```

---

### 🔹 Approach

#### 🧩 Brute Force Approach

* Iterate through each element using a loop
* For every element, check all remaining elements
* If the sum equals the target, return their indices

#### 💡 Key Idea:

Check all possible pairs `(i, j)` such that:

```
nums[i] + nums[j] == target
```

---

### 🔹 Algorithm

1. Loop through array with index `i`
2. For each `i`, loop through remaining elements with index `j`
3. If:

   ```
   nums[i] + nums[j] == target
   ```

   return `[i, j]`

---

### 🔹 Complexity Analysis

* **Time Complexity:** `O(n²)`
* **Space Complexity:** `O(1)`

---

### 🔹 Learnings

* Importance of checking all pairs in brute force
* Understanding time complexity trade-offs
* Memory allocation using `malloc` in C
* Why returning local arrays is unsafe

---

