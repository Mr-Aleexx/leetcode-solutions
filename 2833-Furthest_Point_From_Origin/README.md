# 2833. Furthest Point From Origin

## Problem

```
You are given a string moves of length n consisting only of characters 'L', 'R', and '_'. The string represents your movement on a number line starting from the origin 0.

In the ith move, you can choose one of the following directions:

move to the left if moves[i] = 'L' or moves[i] = '_'
move to the right if moves[i] = 'R' or moves[i] = '_'

Return the distance from the origin of the furthest point you can get to after n moves.
```

## Approach

This approach is fairly simple

- Compute the amount of left (L) and right (R) directions (one loop)
- Since the '_' must be the same for an optimal solution. We'll compute them instead of checking if it's equal and using a variable
- Return this formula : ```return r >= l ? n - 2*l : n - 2*r;```

## Computing the formula 

If there's more right (R) we want :
- All the rights (R)
- Plus the difference of the length and all the directions (R,L)
- Substracting lefts (L) because we computed the maximum length we can reach in one direction so far. Without considering the opposite ones.

Details of the formula : 

```
for r : r + (n - (l + r)) - l
<=>     r + n - l + r - l
<=>     n - 2l
```
