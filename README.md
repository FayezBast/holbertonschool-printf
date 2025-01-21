# 📚 Project Title

Welcome to the **[Printf]** repository! This project is part of the Holberton Software Engineering curriculum and demonstrates proficiency in C programming through practical application.

---

## 🚀 Overview

This project includes the implementation of C functions designed to:

- Be compiled on Ubuntu 20.04 LTS with `gcc` using flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Adhere to the **Betty coding style**.
- Avoid the use of global variables.
- Limit files to a maximum of 5 functions each.

---

## 🛠️ Requirements

### General
- **Editors**: `vi`, `vim`, `emacs`.
- **File Endings**: All files must end with a new line.
- **Mandatory Files**:
  - A `README.md` file at the root of the project.
  - A header file named `main.h` containing all function prototypes.
- **Include Guards**: All header files must use include guards.
- **Restrictions**:
  - `_putchar` function is not provided.
  - Test files (`main.c`) should not be pushed to the repository.

### Authorized Functions and Macros
- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

---

## 📂 File Structure

```
project-root/
├── README.md          # Project documentation
├── main.h             # Header file with function prototypes
├── [source_files].c   # Source files with project code
├── [header_files].h   # Additional header files (if any)
└── [test_files].c     # Test files (for personal use only, not pushed)
```

---

## 🖥️ Compilation

To compile the project, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
```

Replace `output` with your desired executable name.

---

## ▶️ Usage

Run the compiled executable:

```bash
./output
```

---

## 🎨 Coding Style

This project follows the **Betty coding style**. You can validate your code using:

```bash
betty-style.pl [filename]
betty-doc.pl [filename]
```

---

## 👤 Author

- **[Fayez Bast]**
- 📧 [fayezbast15@gmail.com]


---

## 📜 License

This project is developed under the guidelines of the Holberton School curriculum. Refer to the Holberton Student Handbook for additional details.
