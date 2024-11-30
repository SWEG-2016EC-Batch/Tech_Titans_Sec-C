# Problem Analysis
This program calculates how far an automobile can travel without refueling based on its fuel tank capacity and fuel efficiency (miles per gallon).
## Input:
- Fuel Tank Capacity (in gallons): The maximum amount of fuel the tank can hold.
- Miles Per Gallon (MPG): The fuel efficiency of the automobile in miles per gallon.
## Process:
- Calculate the total miles the automobile can travel without refueling using the formula:
- Total Miles = Fuel Tank Capacity × Miles Per Gallon (MPG)
## Output:
- Print the total distance the automobile can travel without refueling, expressed in miles.
# Pseudocode
### Step 1: 
- Start

### Step 2: 
- Declare total_miles
- Read fuel tank capacity in gallons (capacity_fuel_tank)
- Read miles per gallon (mile_per_gallon)

### Step 3: 

- Calculate total miles the automobile can travel:

-   total_miles = capacity_fuel_tank × mile_per_gallon

### Step 4: 
- Print "The number of miles the automobile can drive without refueling is: total_miles miles"

### Step 5: 
Stop
# Flow Chart
```mermaid
flowchart TD
    Start([Start]) 
    --> InputTank[/"Enter the tank capacity (gallons):"/]
    InputTank 
    --> InputMilePerGallon[/"Enter the miles per gallon the automobile can drive:"/]
    InputMilePerGallon 
    --> ReadInput["Read the capacity of the tank and miles per gallon"]
    ReadInput 
    --> CalculateTotalMiles["Calculate total miles = tank capacity * miles per gallon"]
    CalculateTotalMiles 
    --> DisplayResult[/"Display: 'The number of miles the automobile can drive without refueling is: total miles'"/]
    DisplayResult 
    --> End([End])

