# Problem Analysis
This program calculates the result of raising a base number to a given power using the mathematical formula:
- Result = Base^Power(x^y)
## Input:
- Base(x): The number that will be raised to the power.
- Power (y): The exponent to which the base is raised.
## Process:
- Compute the result using the formula:
Result=pow(Base, Power)
where the pow function from the <cmath> library performs the calculation.
## Output:
- Display the result of raising the base to the given power in the format:
Base power of Power = Result
# Pseudocode
### Step 1:

Start

### Step 2: 

- Read the base number (x)
- Read the power (y)

### Step 3: 

- Calculate the result using the formula:
  result = pow(x, y)

### Step 4: 


- Print "Base power of Power = Result"

### Step 5:
Stop.
# Flow Chart
```mermaid

flowchart TD
    Start([Start]) --> InputBase[/"Enter the base number (x):"/]
    InputBase --> InputPower[/"Enter the power (y):"/]
    InputPower --> CalculatePower["Calculate result = pow(x, y)"]
    CalculatePower --> DisplayResult[/"Display: 'x power of y = result'"/]
    DisplayResult --> End([End])


     

