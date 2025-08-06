# Master Header File for C Programs

This `master.h` file consolidates the most frequently used C standard and platform-specific headers. It is designed for rapid prototyping and general-purpose C development across Linux, macOS, and Windows systems.

## 📄 Overview
The `master.h` file includes headers for:

- Standard I/O and memory management
- String and character manipulation
- Mathematical operations
- Time and date handling
- File and directory management
- Process and thread control
- Networking (POSIX and Windows)
- System-level utilities

> **Note:** Including too many headers may slow down compilation. For production, it's best to include only the necessary headers.

## 📚 Header File Content
```c
#ifndef MASTER_H
#define MASTER_H

// Standard I/O and Memory Management
#include <stdio.h>    // printf, scanf, etc.
#include <stdlib.h>   // malloc, free, exit, etc.
#include <stddef.h>   // size_t, NULL, etc.

// Character and String Manipulation
#include <ctype.h>    // isalpha, isdigit, etc.
#include <string.h>   // strcpy, strlen, etc.
#include <wchar.h>    // Wide character support
#include <wctype.h>   // Wide character classification

// Math and Numbers
#include <math.h>     // sqrt, pow, etc.
#include <complex.h>  // Complex number arithmetic

// Time and Date
#include <time.h>     // time, localtime, etc.

// File and Directory Handling
#include <fcntl.h>    // File control options
#include <unistd.h>   // POSIX API for I/O
#include <dirent.h>   // Directory operations
#include <sys/stat.h> // File status information
#include <sys/types.h>// System-level data types

// Process Management
#include <signal.h>   // Signal handling
#include <setjmp.h>   // Non-local jumps
#include <errno.h>    // Error codes
#include <sys/wait.h> // Process control

// Networking (POSIX and Windows)
#include <sys/socket.h>   // Sockets (POSIX)
#include <arpa/inet.h>    // Internet operations
#include <netinet/in.h>   // Internet address family
#include <netdb.h>        // Network database

#ifdef _WIN32
    #include <winsock2.h> // Windows socket interface
    #include <windows.h>  // Windows API
    #include <io.h>       // Low-level I/O (Windows)
#endif

// Threading (POSIX)
#include <pthread.h>  // POSIX threads

// Data Types and Utilities
#include <stdbool.h>   // Boolean type
#include <stdint.h>    // Fixed-width integer types
#include <inttypes.h>  // Integer printing macros
#include <assert.h>    // Assertions

// Cryptography (Linux)
#ifdef __linux__
    #include <openssl/md5.h> // OpenSSL for MD5 hashing
#endif

// Localization and Environment
#include <locale.h>   // Locale settings

#endif // MASTER_H
```

## 📌 Usage Instructions

### 1. Include the Master Header

```c
#include "master.h"
```

### 2. Compile Your Program

For **Linux/macOS**:
```bash
gcc your_program.c -o your_program -lpthread
```

For **Windows**:
```bash
gcc your_program.c -o your_program -lws2_32
```

### 3. Example Program

```c
#include "master.h"

int main() {
    printf("Master header works!\n");
    return 0;
}
```

## 📖 Supported Platforms
- ✅ Linux (Ubuntu, Fedora, etc.)
- ✅ macOS
- ✅ Windows (via MinGW or MSVC)

## 📌 Notes

- The header auto-detects the operating system and includes platform-specific headers.
- For **threading**, ensure to link with `-lpthread` (POSIX) or `-lws2_32` (Windows).

## 🛠️ Customization

Feel free to extend the `master.h` file by adding more headers relevant to your project. If you want a leaner header, remove unused sections to optimize compilation time.

---

**Happy Coding! 🚀**

