## Problem Analysis

## Input:

•	Choice of file size unit (Byte, Kilobyte, Megabyte, Gigabyte, Terabyte, Other)

•	Size of the file in the chosen unit

## Process:

1.	Convert the file size to bytes based on the chosen unit.
   
3.	Calculate the transfer time in seconds using the formula: run_time = file size / 960.
   
4.	Convert the transfer time from seconds to days, hours, minutes, and seconds.
   
## Output:

•	Transfer time in days, hours, minutes, and seconds

## Algorithm:

Step 1: Start

Step 2: Set flag to 0.

Step 3: Do While answer is not '0' or flag is 1.

Step 3.1: Display the file size unit options and prompt the user to choose one.

Step 3.2: Read choice.

Step 3.3: Ask the user to enter the size in the chosen unit.

Step 3.4: Read size.

Step 3.5: Convert size to bytes based on choice.

Step 3.6: Calculate run time using the formula: run time = file size / 960.

Step 3.7: Convert run time to days, hours, minutes, and seconds.

step 3.8: Display the transfer time in days, hours, minutes, and seconds

Step 3.9: Ask the user: "Would you like to use the program again? No=0, otherwise press another key to continue"

step 3.10: Read answer

Step 3.10.1: If answer is not = 0 go to step 3.

Step 4: End

