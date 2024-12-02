# Problem Analysis

## Input:

•	Employee name

•	Base salary

•	Weekly working hours

•	Bonus rate per hour

## Process:

Calculate the monthly bonus payment: bonus payment = working hour * bonus rate * 4.

Calculate the pension deduction: pension = (base salary + bonus payment) * 0.05.

Calculate the tax deduction: tax = (base salary − pension) * 0.15.

 Calculate the net salary: net salary = base salary − pension − tax + bonus payment.
 
## Output:

•	Employee name

•	Bonus payment

•	Pension deducted

•	Tax deducted

•	Gross salary

•	Net salary

# Algorithm:

Step 1: Start

Step 2: Ask the user to enter their name

Step 3: Read name

Step 4: Ask the user to enter their base salary

Step 5: Read base salary

Step 6: Ask the user to enter their weekly working hours

Step 7: Read working hour

Step 8: Ask the user to enter their bonus rate per hour

Step 9: Read bonus rate

Step 10: Calculate bonus payment using the formula: bonus payment = working hour * bonus rate * 4

Step 11: Calculate pension using the formula: pension = (base salary + bonus payment) * 0.05

Step 12: Calculate tax using the formula: tax = (base salary - pension) * 0.15

Step 13: Calculate net salary using the formula: net salary = base salary - pension - tax + bonus payment

Step 14: Display the employee's name, bonus payment, pension deducted, tax deducted, gross salary, and net salary

Step 15:  End

# Flowchart

``` mermaid
flowchart 
    id1([Start])-->id2[/input: name/]
    id2-->id3[/input: base salary/]
    id3-->id4[/input: working hour/]
    id4-->id5[/input: bonus rate/]
    id5-->id6[bonus payment = working hour * bonus rate * 4]
    id6-->id7[pension = base salary + bonus payment * 0.05]
    id7-->id8[tax = base salary - pension * 0.15]
    id8-->id9[net salary = base salary - pension - tax + bonus payment]
    id9-->id10[/print: employee's name, bonus payment, pension deducted, tax deducted, gross salary, and net salary/]
    id10-->id11([End])
