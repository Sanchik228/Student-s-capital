# Student’s capital

Description:
This console program helps a student maximize their capital over the summer by buying, repairing, and selling laptops. The goal is to choose no more than N laptops to buy, based on an initial capital of C, in order to maximize the final capital after the sale.
The program accepts information about laptops (their price and expected profit), sorts them by profit/price ratio, and selects the most profitable options that can be afforded to buy.

How to run:
1. Compile the program 
2. Run the program:
3. Enter sequentially:
    - Maximum number of laptops to purchase (N)
    - Initial capital (C)
    - Total number of laptops available (K)
4. For each laptop, enter:
    - The price of the laptop
    - Profit from its sale

Laptop input format:
For each laptop, enter two numbers separated by a space in a line:
price gain

Example:
Enter the max laptops to buy: 2
Enter the initial capital: 1000
Enter the total available laptops: 4
Laptop 1 100 1000
Laptop 2 300 800
Laptop 3 400 500
Laptop 4 200 700
Capital after summer: 2400
Laptops bought: Laptop 1 Laptop 4

How it works:
- A list of laptops with the specified parameters is created.
- It is sorted by profit/price in descending order.
- Laptops with the maximum profit are bought one by one until N laptops are bought or the capital is exhausted.
- Prints the final capital and the list of purchased laptops.

Limitations and remarks:
- The program uses a greedy algorithm that does not guarantee a globally optimal choice, but it is fast and gives a good approximate result.
- The input data must be correct - the price and profit must be positive numbers.
- If the initial capital is insufficient to buy any laptop, the program will report that no laptops have been purchased.