# Problem Analysis
- This program calculates the net salary,gross salary,bonus payment of an employee after accounting for bonus payments, pension deductions, and tax deductions.
## Input:
- Working hours per week: Total hours worked by the employee in a week.
- Bonus rate per hour: Bonus amount earned per working hour.
- Base salary: Fixed salary of the employee.
## Process:
- Calculate Bonus Payment: Bonus Payment = Working Hours ×Bonus Rate
- Bonus Payment=Working Hours×Bonus Rate
- Calculate Gross Salary: Gross Salary = Base Salary + Bonus Payment
- Calculate Pension Deduction: Pension Deduction = Gross Salary × 0.05
- Calculate Tax Deduction: Tax Deduction = Gross Salary × 0.15
- Calculate Net Salary: Net Salary = Gross Salary − Pension Deduction − Tax Deduction
## Output:
- Display the following:Bonus payment,Gross salary,Pension deduction,Tax deduction,Net salary.
# Pseudocode
Step 1: 
-
Start

Step 2:
- 
- Initialize pension rate=0.05.
- Initialize tax rate=0.15.
- Read working hours per week (working_hr)
- Read bonus rate per hour (bonus_rate)
- Read base salary (base_salary)

Step 3: 
-

- Calculate bonus_payment = working_hr × bonus_rate
- Calculate gross_salary = base_salary + bonus_payment
- Calculate pension_deduction = gross_salary × 0.05
- Calculate tax_deduction = gross_salary × 0.15
- Calculate net_salary = gross_salary - pension_deduction - tax_deduction

Step 4: 
-

- Print "Bonus Payment: bonus_payment"
- Print "Gross Salary: gross_salary"
- Print "Pension Deduction: pension_deduction"
- Print "Tax Deduction: tax_deduction"
- Print "Net Salary: net_salary"

Step 5: 
-
Stop.
