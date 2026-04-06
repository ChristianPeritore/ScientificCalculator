# 🚀 Scientific Calculator: Dual-Language Edition

This repository features a professional-grade **Scientific Calculator** developed for terminal use. It is available in two versions: a high-performance **C++ implementation** and a versatile **Python script**.

---

# 🛠️ Setup & Requirements

### For C++ (Compiled Version)
Since C++ is a compiled language, you need a "translator" (compiler) to turn the code into an application.

* **Download the Toolchain** — Go to [MSYS2.org](https://www.msys2.org/) and download the installer.
* **Installation** — Run the setup and type:
    ```bash
    pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
    ```
* **Environment Variables** — Add `C:\msys64\ucrt64\bin` to your System **Path**.

### For Python (Scripted Version)
Python is an interpreted language, so you only need the Python runtime.

* **Download** — Get the latest version from [Python.org](https://www.python.org/).
* **Verification** — Open CMD and type `python --version` to ensure it's installed.

---

# 📦 How to Run

## Option A: C++ (Command Prompt)
1. **Navigate** to your project folder:
    ```cmd
    cd Desktop\CalcProject
    ```
2. **Build the App**:
    ```cmd
    g++ main.cpp -o ScientificCalc
    ```
3. **Run**:
    ```cmd
    ScientificCalc
    ```

## Option B: Python (Command Prompt)
1. **Navigate** to your project folder:
    ```cmd
    cd Desktop\CalcProject
    ```
2. **Run Directly**:
    ```cmd
    python calculator.py
    ```

---

# ⌨️ Interaction Guide

Both versions use a **Command-First** logic. Type the command, hit Enter, then provide the numbers when prompted.

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

# ⚠️ Pro Tips

* **Case Sensitivity** — Both versions are user-friendly; `SIN`, `sin`, or `Sin` will all work.
* **Precision** — Results are calculated with high precision and displayed with **6 decimal places**.
* **Language Choice** — Use the **C++ version** for maximum execution speed or the **Python version** for easier code readability and cross-platform portability.
* **Safety** — Includes built-in protection against "Division by Zero" and invalid mathematical inputs.
Example
<img width="1037" height="598" alt="image" src="https://github.com/user-attachments/assets/a28ff615-3c7a-4ecc-9d9c-8d07589276b6" />
