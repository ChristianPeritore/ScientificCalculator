<<<<<<< HEAD
# ScientificCalculator
This software simulates a scentific calculator on a website with all useful function for both everyday life and complex mathematical tasks.
=======
# 🚀 User Guide: Scientific Calculator (C++ Edition)

This guide will walk you through setting up and running the **Scientific Calculator** directly from your Command Prompt (CMD).

---

## 🛠️ Phase 1: Setting up the Compiler

Since C++ is a compiled language, your computer needs a "translator" (compiler) to turn the code into an application.

* **Download the Toolchain** — Go to [MSYS2.org](https://www.msys2.org/) and download the installer.
* **Installation** — Run the setup. When the terminal pops up, type the following command:
    ```bash
    pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
    ```
* **Environment Variables** — Search for "Edit the system environment variables" in Windows. 
    * Click **Environment Variables** > Select **Path** > **Edit** > **New**.
    * Paste: `C:\msys64\ucrt64\bin`
    * Restart your CMD.

---

## 📦 Phase 2: Compiling the Program

Once the compiler is ready, follow these steps to build your app:

1.  **Place the File** — Save your code as `main.cpp` in a folder (e.g., `Desktop\CalcProject`).
2.  **Open CMD** — Press `Win + R`, type `cmd`, and hit Enter.
3.  **Navigate** — Enter your project folder:
    ```cmd
    cd Desktop\CalcProject
    ```
4.  **Build the App** — Run this command:
    ```cmd
    g++ main.cpp -o ScientificCalc
    ```

---

## ⌨️ Interaction Guide

The calculator uses a **Command-First** logic. Type the command, hit Enter, then provide the numbers.

| Command | Action | Example |
| :--- | :--- | :--- |
| **Numbers** | Directly type a number | `10` → Sets result to 10 |
| **Operators** | `+`, `-`, `*`, `/` | `+` [Enter] `5` → Adds 5 |
| **Trig** | `sin`, `cos`, `tan` | `sin` [Enter] `90` |
| **Advanced** | `root` (n-th root) | `root` [Enter] `8` [Enter] `3` |
| **Bases** | `base` | `base` [Enter] `10` (Hex/Bin) |
| **Settings** | `mode` | Switch DEGREE / RADIAN |
| **Control** | `menu` or `clear` | Show help or Reset |

---

## ⚠️ Pro Tips

* **Case Sensitivity** — You can type `SIN`, `sin`, or `Sin` and it will work perfectly.
* **Precision** — Results are shown with **6 decimal places** for scientific accuracy.
* **Safety** — Built-in "Division by Zero" protection to prevent system crashes.
>>>>>>> 3e9c611bbbb08aea70eb1a16b2834f63606fa6ae
