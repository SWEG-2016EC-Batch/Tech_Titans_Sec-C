```mermaid
flowchart TD
    Start([Start]) --> InputWorkingHr[/"Enter your working hours per week:"/]
    InputWorkingHr --> InputBonusRate[/"Enter your bonus rate per hour:"/]
    InputBonusRate --> InputBaseSalary[/"Enter your base salary:"/]
    InputBaseSalary --> CalculateBonus["Calculate bonus payment = working_hr * bonus_rate"]
    CalculateBonus --> CalculateGrossSalary["Calculate gross salary = bonus_payment + base_salary"]
    CalculateGrossSalary --> CalculatePension["Calculate pension deduction = gross_salary * pensions"]
    CalculatePension --> CalculateTax["Calculate tax deduction = gross_salary * tax"]
    CalculateTax --> CalculateNetSalary["Calculate net salary = gross_salary - pension_deduction - tax_deduction"]
    
    CalculateNetSalary --> DisplayBonus[/"Display Bonus payment"/]
    DisplayBonus --> DisplayGrossSalary[/"Display Gross salary"/]
    DisplayGrossSalary --> DisplayPension[/"Display Pension deduction"/]
    DisplayPension --> DisplayTax[/"Display Tax deduction"/]
    DisplayTax --> DisplayNetSalary[/"Display Net salary"/]
    
    DisplayNetSalary --> End([End])
