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

Step 2: Set run time.

Step 3: Do While answer is not '0'.

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
# Flowchart

``` mermaid
flowchart 
    id1([Start])-->id2[Set run time]
    id2-->id3{Do While answer is not '0'}
    id3-->id4[/input: choice/]         
    id4-->id5[/input: size/]
    id5-->id6[Convert size to bytes]
    id6-->id7[run time = file size / 960]
    id7-->id8[Convert run time to days, hours, minutes, and seconds]
    id8-->id9[/output: run time/]
    id9-->id10[/"Would you like to continue"/]
    id10-->id11[/input: answer/]
    id11-->id12{If answer is not = 0}
    id12--True-->id3
    id12--False-->id13([End])
