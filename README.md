# string-analyzer
A C++ program that analyzes strings and checks for palindromes.

---

## 🚀 Features

- Counts:
  - Total characters (including spaces)
  - Letters
  - Vowels
  - Digits
  - Special characters
- Checks whether the input is a **palindrome** (ignores case and non-alphanumeric characters)
- Handles input of full sentences (using `getline`)

---

## 📌 Sample Output

Hi, Please enter a phrase or sentence: A man, a plan, a canal, Panama

Analysis:
Total Characters (including spaces): 34
Letters: 21
Digits: 0
Vowels: 10
Special: 13
Palindrome: Yes

---

📚 Learning Note / Roadmap
At the time this code was written, I had not yet learned about the concepts of passing by reference and passing by value in C++. As a result, this version uses global variables for tracking counts (letters, digits, vowels, symbols).

Now that I understand how to pass arguments by reference, a future version of this program will refactor the check() function to eliminate the use of global variables. This will make the code more modular and maintainable.

This repository is meant to reflect my learning journey, and the improvements over time will show how my understanding of C++ evolves.


