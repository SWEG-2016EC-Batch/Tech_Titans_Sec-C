# Algorithm for Employee Salary Calculation

## Steps

1. **Start** the program.
2. **Input** the employee's name (`employeeName`).
3. **Input** the number of weekly working hours (`weeklyHours`).
4. **Input** the bonus rate per hour (`bonusRate`).
5. **Input** the base salary (`baseSalary`).
6. **Calculate** the bonus payment:
   \[
   \text{bonusPayment} = \text{weeklyHours} \times \text{bonusRate}
   \]
7. **Calculate** the gross salary:
   \[
   \text{grossSalary} = \text{baseSalary} + \text{bonusPayment}
   \]
8. **Calculate** the pension deduction (5% of gross salary):
   \[
   \text{pension} = 0.05 \times \text{grossSalary}
   \]
9. **Calculate** the tax deduction (15% of gross salary):
   \[
   \text{tax} = 0.15 \times \text{grossSalary}
   \]
10. **Calculate** the net salary:
    \[
    \text{netSalary} = \text{grossSalary} - (\text{pension} + \text{tax})
    \]
11. **Display** the following information:
    - Employee Name
    - Bonus Payment
    - Gross Salary
    - Pension Deduction
    - Tax Deduction
    - Net Salary
12. **End** the program.
