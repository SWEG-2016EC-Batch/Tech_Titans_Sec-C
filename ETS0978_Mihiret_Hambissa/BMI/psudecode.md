# Pseudocode for BMI Calculator Program

1. **Start**

2. **Loop Until User Decides to Exit**:
   - **Repeat** the following steps:

   1. **Input Weight and Height**:  
      - Display: "Enter weight in kilograms:".  
      - Read input and store it in `weight`.  
      - Display: "Enter height in meters:".  
      - Read input and store it in `height`.  

   2. **Validate Input**:  
      - **If** `weight <= 0` or `height <= 0`:  
         - Display: "Invalid input! Weight and height must be positive values."  
         - **Continue** to the next iteration of the loop.  

   3. **Calculate BMI**
