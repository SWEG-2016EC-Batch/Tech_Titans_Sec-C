Problem Analysis
Input:- Weight (in kilograms)
- Height (in meters)
Process: Calculate BMI using the formula: BMI=w/h*h.
Determine the weight category based on BMI:
Underweight: BMI < 18.5
Normal weight: 18.5 ≤ BMI <= 24.5
Overweight: BMI > 24
Output: Weight category (underweight, normal weight, overweight)
Algorithm:
Step 1: Start
Step 2: Set flag to true
Step 3:  While flag is true:
Step 3.1: Ask the user to enter weight in kilograms
Step 3.2: Read weight
Step 3.3: Ask the user to enter height in meters
Step 3.4: Read height
Step 3.5: Calculate BMI using the formula: BMI = weight / (height * height)
Step 3.6: Determine the weight category:
o	If BMI < 18.5:
	Print "You are underweight"
o	Else If BMI >= 18.5 and BMI <= 24.5:
	Print "You are normal weight"
o	Else:
	Print "You are overweight"
Step 3.7: Prompt the user: "If you don't want to continue press 0 otherwise press any key to continue."
Step 3.8: Read num
Step 3.9: If num is '0':
o	Set flag to false
Step 4: End

