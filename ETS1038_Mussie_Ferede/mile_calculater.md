Problem Analysis

Input:

•	Capacity of the fuel tank (in gallons)

•	Miles per gallon (MPG) the automobile can be driven

Process: Calculate the total number of miles the automobile can be driven without refueling using the formula:

Total Miles = Capacity * MPG

Output:

•	Total number of miles the automobile can be driven without refueling

Algorithm:

Step 1: Start

Step 2: Ask the user to enter the capacity of the fuel tank in gallons

Step 3: Read capacity

Step 4: Ask the user to enter the miles per gallon (MPG) the automobile can be driven

Step 5: Read mpg

Step 6: Calculate total_miles using the formula: total_miles = capacity * mpg

Step 7: Display total_miles

Step 8: End

# Flowchart

``` mermaid
flowchart 
    id1([Start])-->id2[/input: capacity/]
    id2-->id3[/input: mpg/]
    id3-->id4[total_miles = capacity * mpg]
    id4-->id5[/print: total_miles/]
    id5-->id6([End])
