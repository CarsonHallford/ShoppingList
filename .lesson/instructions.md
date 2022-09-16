# Instructions  

The purpose of this project is to let you practice using `std::list<T>`

Modify `main.cpp` to implement a Shopping List program. This program will accept many groceries from the user. The groceries will have both a name and an isle number. Your job is to create a `std::list<T>` of all the groceries, such that they are placed in the order of increasing isle numbers.

After the user inputs all the groceries they need, they will input any groceries they find in their kitchen. If a grocery is found in their kitchen, then it should be removed from the list.

## Input

The input will start with an integer (N) indicating the number of groceries needed. Following this will be N pairs of isle numbers and grocery names. No two groceries will ever have the same isle number.

The input will then have an integer (M) indicating the number of groceries in the kitchen. Following this will be M grocery names.

## Output

Your program must output the final list of groceries in the order of increasing isle numbers.

## Example 1

Input
```
3
1 apples
2 pears
3 oranges
1
pears
```

Output
```
apples
oranges
```

## Example 2

Input
```
5
1 apples
6 pears
2 oranges
4 olives
8 butter
2
apples
olives
```

Output
```
oranges
pears
butter
```

## Running

Click the `Run` button at the top of repl.it.

## Testing

Click the checkmark in the left sidebar, then click `Run tests`.

## Style

Make sure your code conforms to the style guide by running:
```
bash scripts/style.sh
```

If you need to fix your style, run:
```
bash scripts/style.sh fix
```