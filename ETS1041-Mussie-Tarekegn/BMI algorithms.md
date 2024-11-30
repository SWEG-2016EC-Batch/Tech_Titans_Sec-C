# Problem Analysis:
- This program is made to calculate the bmi of multiple pepole.
## Input:
- number of people to calculate the bmi for.

- for each person it recive height in meter,weight in kg and gender.
## Process:
1,calculate the bmi by using bmi=weight(kg)/(height*height).


2,catgorize their bmi for male and women 
- Male:
Underweight: BMI < 20.5.
Normal: 20.5 ≤ BMI < 26.
Overweight: 26 ≤ BMI < 30.
Obese: BMI ≥ 30.
- Female:
Underweight: BMI < 18.5.
Normal: 18.5 ≤ BMI < 24.
Overweight: 24 ≤ BMI < 30.
bash Obese: BMI ≥ 30.

3, use 'for loop' for iteration.

## Output:
-print the bmi value and advice them based on their range.
# Pseudocode
### Step 1:
start

### Step 2:
Read number of people

### step 3:
For i=1 to number of people.

### step 4:

Read height, weight, gender  
    - Calculate BMI as weight / (height * height)  
    - If gender is male  
        - If BMI < 20.5, print "Underweight"  
        - Else if BMI < 26, print "Healthy weight"  
        - Else if BMI < 30, print "Overweight"  
        - Else, print "Obese"  
    - Else if gender is female  
        - If BMI < 18.5, print "Underweight"  
        - Else if BMI < 24, print "Healthy weight"  
        - Else if BMI < 30, print "Overweight"  
        - Else, print "Obese"  
    - Else  
        - Print "Invalid gender" 
        
### step 5: 
- i = i+1
- if i<= number of people goto step 4.
- esle goto step 6.
  
### step 6:
End(Terminate).
# Flow Chart 
```mermaid
flowchart TD
    Start([Start]) --> InputNumber[/"Enter the number of people you want to calculate (n):"/]
    InputNumber --> InitLoop["Initialize i = 1"]
    InitLoop --> LoopCondition{"i <= n"}
    
    LoopCondition -->|Yes| InputHeight[/"Enter your height in meters:"/]
    InputHeight --> InputWeight[/"Enter your weight in kg:"/]
    InputWeight --> InputGender[/"Enter your gender (M/F):"/]
    InputGender --> CalculateBMI["Calculate BMI = weight / (height * height)"]

    CalculateBMI --> MaleCheck{"Gender == M or m"}
    MaleCheck -->|Yes| MaleUnderweight{"BMI < 20.5"}
    MaleCheck -->|No| FemaleUnderweight{"BMI < 18.5"}
    MaleUnderweight --> DisplayMaleUnderweight[/"Display: Underweight (Advice)"/]
    FemaleUnderweight --> DisplayFemaleUnderweight[/"Display: Underweight (Advice)"/]

    MaleUnderweight --> MaleHealthy{"20.5 <= BMI < 26"}
    FemaleUnderweight --> FemaleHealthy{"18.5 <= BMI < 24"}
    MaleHealthy --> DisplayMaleHealthy[/"Display: Healthy (Advice)"/]
    FemaleHealthy --> DisplayFemaleHealthy[/"Display: Healthy (Advice)"/]

    MaleHealthy --> MaleOverweight{"26 <= BMI < 30"}
    FemaleHealthy --> FemaleOverweight{"24 <= BMI < 30"}
    MaleOverweight --> DisplayMaleOverweight[/"Display: Overweight (Advice)"/]
    FemaleOverweight --> DisplayFemaleOverweight[/"Display: Overweight (Advice)"/]

    MaleOverweight --> ObesityCheck{"BMI >= 30"}
    FemaleOverweight --> ObesityCheck
    ObesityCheck --> DisplayObesity[/"Display: Obesity (Advice)"/]

    ObesityCheck --> InvalidGender["Invalid Input"]
    InvalidGender --> DisplayInvalid[/"Display: Invalid Gender!"/]

    DisplayMaleUnderweight --> Increment["Increment i = i + 1"]
    DisplayFemaleUnderweight --> Increment
    DisplayMaleHealthy --> Increment
    DisplayFemaleHealthy --> Increment
    DisplayMaleOverweight --> Increment
    DisplayFemaleOverweight --> Increment
    DisplayObesity --> Increment
    DisplayInvalid --> Increment

    Increment --> LoopCondition
    LoopCondition -->|No| End([End])
```

        
