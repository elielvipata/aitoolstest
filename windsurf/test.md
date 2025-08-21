# Calculator Parser Test Values

## 1. Basic operations
1. `1+2`
2. `3-4`
3. `5*6`
4. `8/2`
5. `7%3`
6. `2^3`

## 2. Parentheses / Braces / Brackets
7. `(1+2)`
8. `{3-4}`
9. `[5*6]`
10. `(1+(2*3))`
11. `{[1+2]*(3+4)}`

## 3. Combined operations
12. `1+2*3`
13. `(4+5)/6`
14. `7*(8-3)%4`
15. `2^3^2`

## 4. With commas, semicolons, colons, dots
16. `max(1,2,3)`
17. `sum{1;2;3}`
18. `ratio:4/5`
19. `3.1415*2`
20. `coords[1.5,2.5]`

## 5. Edge cases
21. `0/1`  <!-- Division with zero numerator -->
22. `5/0`  <!-- Division by zero (error expected) -->
23. `0%5`
24. `5%0`  <!-- Modulo by zero (error expected) -->
25. `(-3)^2` <!-- Negative base -->
26. `2^-3`  <!-- Negative exponent -->

## 6. Stress cases
27. `((((1+2)*3)-4)/5)^6%7`
28. `123456789*987654321`
29. `((((((((((((1))))))))))))))` <!-- Deep nesting -->
30. `1+2-3*4/5%6^7+8`
