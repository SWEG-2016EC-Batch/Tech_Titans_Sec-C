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
