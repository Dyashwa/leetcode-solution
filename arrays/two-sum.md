# 🧩 Two Sum

## 🔹 Problem Statement

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to the target.

* Each input has exactly one solution
* You may not use the same element twice
* You can return the answer in any order

---

## 🔹 Example

**Input:**

```
nums = [2,7,11,15], target = 9
```

**Output:**

```
[0,1]
```

---

## 🔹 Approach

### 🧠 Idea

Check every possible pair of elements and see if their sum equals the target.

---

### 🔍 Steps

1. Loop through array with index `i`
2. For each `i`, loop through remaining elements with index `j`
3. If:

   ```
   nums[i] + nums[j] == target
   ```

   return indices `[i, j]`

---

## 🔹 Code (C)

```c
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    
    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    
    return NULL;
}
```

---

## 🔹 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(1)

---

## 🔹 Learnings

* Brute force approach for pair problems
* Importance of time complexity
* Memory allocation using `malloc`
* Returning arrays in C

---

