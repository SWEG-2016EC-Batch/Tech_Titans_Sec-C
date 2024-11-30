# Algorithm for BMI Calculator Program
## Steps
1. **Start** the program.
2. **Loop** until the user decides to exit:
   1. **Input** the weight (in kilograms) and height (in meters) from the user.
   2. **Validate** the input:
      - If weight or height is less than or equal to 0, print an error message ("Invalid input! Weight and height must be positive values.") and **continue** to the next iteration of the loop.
   3. **Calculate** the BMI using the formula:
      \[
      \text{BMI} = \frac{\text{weight}}{\text{height}^2}
      \]
   4. **Determine** the BMI category:
      - If BMI is less than 18.5, categorize as "Underweight".
      - If BMI is between 18.5 and 24.9 (inclusive), categorize as "Normal weight".
      - If BMI is greater than 24.9, categorize as "Overweight".
   5. **Display** the calculated BMI value (with two decimal places) and the corresponding category.
   6. **Ask** the user if they want to calculate the BMI for another person:
      - If the answer is 'y' or 'Y', repeat the loop.
      - If the answer is 'n' or 'N', exit the loop.
3. **Print** a message: "Program terminated. Stay healthy!" and end the program.
























