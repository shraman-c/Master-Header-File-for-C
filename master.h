#ifndef MASTER_H
#define MASTER_H

// Standard Input/Output
#include <stdio.h>
#include <stdlib.h>

// Character and String Handling
#include <ctype.h>
#include <string.h>

// Memory Management
#include <malloc.h>  
#include <stddef.h>

// Mathematical Operations
#include <math.h>
#include <complex.h>  

// File Handling and Input/Output
#include <fcntl.h>
#include <unistd.h>

// Time and Date
#include <time.h>

// Process Control
#include <signal.h>
#include <errno.h>
#include <setjmp.h>
#include <stdarg.h>
#include <limits.h>

// Networking and Sockets (for Linux/Unix-based systems)
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <netdb.h>

// Threads and Synchronization
#include <pthread.h>

// Data Structures and Algorithms
#include <stdbool.h>  // Boolean type (true/false)
#include <assert.h>   // Assertions
#include <stdint.h>   // Fixed-width integer types (int32_t, etc.)
#include <inttypes.h> // printf macros for fixed-width types

// Random Numbers
#include <stdlib.h>
#include <time.h>

// File Control
#include <dirent.h> // Directory handling (POSIX)
#include <sys/wait.h> // Process handling

// Cryptography and Hashing (if available)
#ifdef __linux__
    #include <openssl/md5.h>
#endif

// Windows-Specific (Guarded by _WIN32 Macro)
#ifdef _WIN32
    #include <windows.h>
    #include <winsock2.h>
    #include <io.h>
#endif

// Other Useful Utilities
#include <locale.h>
#include <wchar.h>  // Wide character handling
#include <wctype.h> // Wide character classification

#endif // MASTER_H
