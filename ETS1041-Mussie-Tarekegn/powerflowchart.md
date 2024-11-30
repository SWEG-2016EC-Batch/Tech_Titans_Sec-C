```mermaid

flowchart TD
    Start([Start]) --> InputBase[/"Enter the base number (x):"/]
    InputBase --> InputPower[/"Enter the power (y):"/]
    InputPower --> CalculatePower["Calculate result = pow(x, y)"]
    CalculatePower --> DisplayResult[/"Display: 'x power of y = result'"/]
    DisplayResult --> End([End])


     
