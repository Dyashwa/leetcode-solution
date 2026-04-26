# 🔤 Longest Common Prefix

## 📌 Problem Statement

Given an array of strings `strs`, find the longest common prefix among them.

If there is no common prefix, return an empty string `""`.

---

---

## 🎯 Objective

Find the longest prefix shared by all strings in the array.

---

## 🧠 Approach Used (Vertical Scanning)

We compare characters **column by column** across all strings.

### 🔑 Key Idea:
- Take the first string as reference
- Compare each character with the same position in other strings
- Stop when:
  - Characters don’t match
  - Any string ends

---

## ⚙️ Algorithm

1. If array is empty → return ""
2. Take first string as reference
3. Loop through each character index `i`
4. For each string:
   - If character at index `i` is different OR string ends → stop
5. Return substring from `0` to `i`

---

## 💻 Code (C)

```c
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] == '\0' || strs[j][i] != current) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}


## 🔍 Example Walkthrough

**Input:** `["flower","flow","flight"]`

**Steps:**
- i = 0 → 'f' → all match  
- i = 1 → 'l' → all match  
- i = 2 → 'o' vs 'i' → mismatch  

**Output:** `"fl"`

---

## ⏱️ Complexity Analysis

- **Time Complexity:** O(n × m)  
- **Space Complexity:** O(1)

---

## 🧩 Pattern

- String Traversal  
- Character Comparison  

---

## 📚 Learnings

- Compared multiple strings character-by-character  
- Understood vertical scanning technique  
- Handled edge cases like empty strings  
- Learned early stopping for efficiency  
- Improved nested loop logic  

---

## 🚀 Key Takeaway

> Compare characters column-wise and stop at the first mismatch.

---