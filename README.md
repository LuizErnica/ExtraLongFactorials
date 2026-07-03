# Extra Long Factorials

A C# solution for the **Extra Long Factorials** algorithmic challenge, implemented with a focus on clean code, readability, and efficient handling of very large integer calculations using .NET's `BigInteger`.

---

## 📌 Overview

Standard integer data types are unable to represent extremely large factorial values. This project demonstrates how to compute factorials of large numbers efficiently by leveraging the `BigInteger` type available in .NET.

The implementation is simple, efficient, and designed as an educational example for developers preparing for coding interviews or practicing algorithmic problem solving.

---

## ✨ Features

* Calculates factorials for very large numbers
* Uses .NET `BigInteger` for arbitrary-precision arithmetic
* Clean and easy-to-understand implementation
* Well-structured project organization
* Suitable for coding interview preparation

---

## 🛠️ Technologies

* C#
* .NET
* System.Numerics.BigInteger

---

## 📂 Project Structure

```text
ExtraLongFactorials/
│
├── Program.cs          # Application entry point
├── Solution.cs         # Factorial implementation
└── README.md
```

---

## 🚀 Getting Started

### Prerequisites

* .NET SDK 8.0 or later

### Clone the repository

```bash
git clone https://github.com/LuizErnica/ExtraLongFactorials.git
```

### Navigate to the project

```bash
cd ExtraLongFactorials
```

### Build

```bash
dotnet build
```

### Run

```bash
dotnet run
```

---

## 💻 Example

### Input

```text
25
```

### Output

```text
15511210043330985984000000
```

---

## 🧠 Algorithm

The solution iteratively multiplies all integers from **1** to **n**, storing the intermediate result in a `BigInteger`.

### Complexity

| Operation | Complexity                                                         |
| --------- | ------------------------------------------------------------------ |
| Time      | O(n)                                                               |
| Space     | O(1) (excluding the memory required to store the resulting number) |

---

## 🎯 Learning Objectives

This project demonstrates:

* Arbitrary-precision arithmetic
* Efficient iterative algorithms
* Mathematical computations
* Clean C# coding practices
* Problem-solving techniques commonly used in coding interviews

---

## 📖 Related Concepts

* Factorial
* BigInteger
* Arbitrary-Precision Arithmetic
* Time Complexity
* Iterative Algorithms

---

## 🤝 Contributing

Contributions, suggestions, and improvements are welcome.

Feel free to fork this repository, submit pull requests, or open issues for discussions and enhancements.

---

## 📄 License

This project is licensed under the MIT License.

---

## 👨‍💻 Author

**Luiz Henrique Érnica**

Software Engineer passionate about .NET, Software Architecture, Distributed Systems, Cloud Computing, and Mainframe technologies.

