### Boilerplate Code

```
#include <iostream>
using namespace std;

int main(){
    cout << "Apna College";
    return 0;
}
```

- **iostream**
  - It is part of the C++ Standard Library. It provides functionality for input and output operations, such as:
  - std::cin for reading input.
  - std::cout for writing output.
  - std::cerr for error messages.
- **namespace std**

  - It avoids the need to explicitly qualify standard library objects like std::cout and std::cin.
  - Without it, you'd need to use the std:: prefix every time you reference an item from the std namespace.

- cout is like print/console
- cpp case sensitive
- **';'** means ending like JS

```
g++ file-name.cpp
<!-- It will create a executable file, ex: a.exe -->
<!-- Run that executable file for output -->
./a.exe
<!-- both at the same time -->
g++ file-name.cpp && ./a.exe
```

- ""endl"" or **\n**
  - << endl; or << \n; used for ending line,
  ```
  cout << "Apna College" << '\n';
  <!-- or -->
  cout << "Apna College\n";
  ```
  - **cin** to take value from user
  - cin >> variableName (store value to the variable)

### Data Types

- int
- char
- float
- bool
- double

- **int**
  - 4 Bytes
  - 8 Bit = 1 Byte
  - numbers without decimal
- **char**
  - 1 Bytes
  - Character convert into ASCII value before run.
- **float**
  - floating value
  - 4 bytes
- **bool**
  - boolean
  - 1 Bit
- **double**
  - double or float numbers

### Type Casting

- ex: (type)value

### Operators

- Arithmetic ("+", "-", "\*"(Asterisk), "/", "%"(Modulo))
- Relational (<, <=, >, >=, == , !=)
- Logical (OR ||, AND &&, NOT !)

### Unary Operator

- 1
- Increment ++
- Decrement --

### Binary Operator

- 2

---

- variables name should be in Camelcase

### Function

```
<!-- definition -->
returnType functionName(){
  <!-- codes -->
}
returnType functionName(type argumentName, type argumentName){
  <!-- codes -->
}
```

- If function does not return anything then the type will be **void**
