Salary Calculation

# Problem Analysis

Inputs:
- Base salary
- Weekly working hours
- Over-time bonus rate (if applicable)

Outputs:
- Bonus payment
- Pension deducted
- Tax deducted
- Gross salary
- Net salary

Process:
1. Collect input for base salary and weekly working hours.
2. If working hours exceed 40, collect input for over-time bonus rate and calculate extra working hours.
3. Calculate pension as 7% of the base salary.
4. Calculate bonus based on extra working hours and bonus rate.
5. Calculate gross salary as the sum of base salary and bonus.
6. Determine tax based on base salary using predefined tax brackets.
7. Calculate net salary by subtracting pension and tax from gross salary.
8. Output bonus payment, pension deducted, tax deducted, gross salary, and net salary.
# pseudocode
Step 1: Start

Step 2: Initialize variables: working_hour, bonus_rate, base_salary, net_salary, pension, tax, extra_working_hour, bonus, gross_salary

Step 3: Input base salary

Step 4: Input weekly working hour

Step 5: If working hours > 40, then:
   - Input over-time bonus rate per hour
   - Calculate extra working hours as working_hour - 40

Step 6: Calculate pension as base_salary * 0.07

Step 7: Calculate bonus as extra_working_hour * bonus_rate * 4

Step 8: Calculate gross salary as base_salary + bonus

Step 9 Determine tax based on base_salary:
   - If base_salary > 200 and base_salary < 600, tax = gross_salary * 0.10
   - If base_salary > 600 and base_salary < 1200, tax = gross_salary * 0.15
   - If base_salary > 1200 and base_salary < 2000, tax = gross_salary * 0.20
   - If base_salary > 2000 and base_salary < 3500, tax = gross_salary * 0.25
   - If base_salary > 3500, tax = gross_salary * 0.30

Step 10 Calculate net salary as gross_salary - pension - tax

Step11: Output bonus payment, pension deducted, tax deducted, gross salary, and net salary

Step 12: End