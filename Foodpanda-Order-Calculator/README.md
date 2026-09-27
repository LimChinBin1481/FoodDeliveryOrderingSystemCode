# Foodpanda-inspired Food Order & Delivery Calculator

LDCW6123 group project — educational C++17 console application inspired by online food delivery. **Not affiliated with foodpanda.** All restaurants, prices and delivery rates are fictional demonstration data. No real orders or payments occur.

## Features
- Restaurant selection and menu browsing
- Multiple food items, quantity and subtotal calculation
- Delivery distance and tiered delivery fees
- Simulated payment selection and itemized order summary
- Input validation, confirmation and repeat orders
- Automated unit tests and GitHub Actions build

## Build and run
Requires CMake 3.12+ and a C++17 compiler (g++, clang++, or MSVC).

```bash
cmake -S . -B build
cmake --build build
./build/foodpanda
```

On Windows with Visual Studio CMake, the executable may be `build/Debug/foodpanda.exe`. With MinGW, use `build/foodpanda.exe`.

## Tests
```bash
ctest --test-dir build --output-on-failure
```

## Example
Select Panda Burger -> Chicken Burger -> quantity 2 -> 8 km -> Cash on Delivery. Subtotal RM30, delivery RM5, total RM35.

## Suggested team responsibilities
| Member | Module | File |
|---|---|---|
| Siva | Main menu and restaurant selection | `src/main.cpp`, `src/restaurant.cpp` |
| Member 2 | Food menu and pricing | `src/menu.cpp` |
| Member 3 | Quantity and subtotal calculation | `src/quantity.cpp` |
| Member 4 | Distance and delivery fee | `src/delivery.cpp` |
| Member 5 | Payment method and order summary | `src/payment.cpp` |
| Member 6 | Input validation, repeat-order review and testing | `src/validation.cpp`, `tests/test_calculations.cpp` |

All members should test their own modules. Integration work in `main.cpp` should be shared and credited honestly.

## Git collaboration
1. Create one GitHub repository and add all members as collaborators.
2. Each member creates a feature branch, makes meaningful commits for **work they actually do**, and opens a pull request.
3. Review and merge the six branches. Do not fabricate historical commits or assign authorship to someone who did not write the code.
4. For the report, capture `git log --oneline --graph --all` and screenshots of code and running output.

## Notes
- Delivery: 0–5 km RM3; over 5–10 km RM5; over 10–100 km RM8.
- Prices and delivery tiers are classroom examples, not actual foodpanda prices.
- The terminal interface is text-based; it does not require graphics libraries.
