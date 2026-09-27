# Foodpanda Food Order Calculator
## Quantity & Subtotal Calculation Module

This module is the **Quantity & Subtotal Calculation** component of the Foodpanda Food Order & Delivery Calculator.

### Responsibilities
- Accept food price
- Accept order quantity
- Validate quantity input
- Reject zero, negative, and non-numeric quantities
- Calculate subtotal
- Display the calculated subtotal

### Formula
**Subtotal = Food Price × Quantity**

### Files
- `main.cpp` - standalone demo/test program
- `quantity.h` - function declarations
- `quantity.cpp` - quantity validation and subtotal implementation

### Compile
```bash
g++ -std=c++17 main.cpp quantity.cpp -o foodpanda
```

### Run
Windows:
```bash
foodpanda.exe
```

Linux/macOS:
```bash
./foodpanda
```

### Example
```text
Food: Chicken Burger
Price: RM 15.00
Quantity: 2
Subtotal: RM 30.00
```

### Suggested Git commits
```text
Add quantity calculation module
Implement subtotal calculation
Add quantity validation and display
```
