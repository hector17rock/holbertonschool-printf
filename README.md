# G_printf - A Custom printf Implementation in C

![Skull Error Demo](https://img.shields.io/badge/Error_Handling-☠_Skull_Errors-red) 
![Specifiers](https://img.shields.io/badge/Specifiers-11%2B_Implemented-green)

A modular, well-structured reimplementation of `printf` with:
- Standard specifiers (`%c`, `%s`, `%d`, `%i`, `%%`).  
- Bonus features (`%b`, `%u`, `%o`, `%x`, `%X`, `%p`, `%S`).  
- **Skull ☠ error handling** for invalid specifiers.  

---

## 📂 Project Structure
```bash
G_printf/
├── main.h # Main header
├── G_printf.c # Core logic
├── specifiers/ # All format handlers
│ ├── G_char.c # %c
│ ├── G_string.c # %s
│ └── ... # (Other specifiers)
├── utils/ # Helpers
│ ├── G_putchar.c # Custom putchar
│ └── G_errors.c # ☠ Error handler
├── test.c # Test cases
├── Makefile # Optional (for easy builds)
└── G_printf.1 # Manual page (docs)
