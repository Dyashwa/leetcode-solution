# 🔗 Add Two Numbers

## 🔹 Problem Statement

You are given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order, and each node contains a single digit.

Add the two numbers and return the sum as a linked list.

* No leading zeros except number 0

---

## 🔹 Example

**Input:**

```
l1 = [2,4,3]
l2 = [5,6,4]
```

**Output:**

```
[7,0,8]
```

**Explanation:**

```
342 + 465 = 807
```

---

## 🔹 Approach

### 🧠 Idea

Simulate addition like we do manually, digit by digit, while keeping track of carry.

---

### 🔍 Steps

1. Create a dummy node for result list
2. Initialize `carry = 0`
3. Traverse both lists together
4. For each node:

   * Add values + carry
   * Store `(sum % 10)` as digit
   * Update carry `(sum / 10)`
5. Create new node for each digit
6. Continue until both lists and carry are processed
7. Return `dummy->next`

---

## 🔹 Code (C)

```c
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* current = dummy;
    dummy->next = NULL;

    int carry = 0;

    while(l1 != NULL || l2 != NULL || carry != 0) {

        int val1 = (l1 != NULL) ? l1->val : 0;
        int val2 = (l2 != NULL) ? l2->val : 0;

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        int digit = sum % 10;

        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = digit;
        newNode->next = NULL;

        current->next = newNode;
        current = current->next;

        if(l1 != NULL) l1 = l1->next;
        if(l2 != NULL) l2 = l2->next;
    }

    return dummy->next;
}
```

---

## 🔹 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 🔹 Learnings

* Linked list traversal
* Handling carry in addition
* Dummy node technique ⭐
* Handling unequal list lengths

---

## 🔹 Key Insight

Carry must be included in loop condition to handle cases like:

```
[9] + [1] → [0,1]
```

---

## 🔹 Pattern

**Linked List + Simulation**
