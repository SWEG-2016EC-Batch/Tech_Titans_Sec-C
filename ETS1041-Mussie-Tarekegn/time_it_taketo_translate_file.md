# Problem Analysis
- This program calculates the time required to transmit a file over a serial transmission line that transmits 960 characters per second. The program converts the total transmission time (in seconds) into days, hours, minutes, and seconds for a clearer representation.
## Input:
- File Size (in bytes): The size of the file to be transmitted.
## Process:
- Calculate Total Transmission Time (in seconds):
- Total Time (seconds)= File Size (bytes)/Transmission Rate (960 characters/sec)
- Convert total seconds into days, hours, minutes, and seconds:
 - Days:Days = Total Seconds/(24×3600)
 - Remaining Seconds after days:Total Seconds= Total Seconds % (24×3600)
 - Hours:Hours = Total Seconds/3600
 - Remaining Seconds after hours:Total Seconds = Total Seconds % 3600
 - Minutes: Minutes = Total Seconds/60
 - Seconds:Seconds = Total Seconds % 60
## Output:
- Display the total transmission time in the format:
   -It will take Days:Hours:Minutes:Seconds to transmit the file.
# Pseudocode
### Step 1: 

Start

### Step 2: 


- Define transmission rate per second =960.
  
### Step 3:

- Read file size in bytes (file_size)

### Step 4:


- Calculate total_seconds = file_size / transmission_per_sec

### Step 5:

- Convert total_seconds into:
  - Days: day = total_seconds / (24 × 3600)
  - Update total_seconds: total_seconds = total_seconds % (24 × 3600)
  - Hours: hour = total_seconds / 3600
  - Update total_seconds: total_seconds = total_seconds % 3600
  - Minutes: minute = total_seconds / 60
  - Seconds: second = total_seconds % 60

### Step 6:

- Print "It will take Days:Hours:Minutes:Seconds to transmit the file"

### Step 7:
Stop.
# Flow Chart
```mermaid
flowchart TD
    Start([Start]) --> InitializeTransmission["Initialize transmission_per_sec = 960"]
    InitializeTransmission --> InputFileSize[/"Enter the file size in bytes:"/]
    InputFileSize --> CalculateTotalSeconds["Calculate total seconds = file_size / transmission_per_sec"]
    CalculateTotalSeconds --> CalculateDays["Calculate days = total_seconds / (24 * 3600)"]
    CalculateDays --> UpdateTotalSeconds["Update total_seconds = total_seconds % (24 * 3600)"]
    UpdateTotalSeconds --> CalculateHours["Calculate hours = total_seconds / 3600"]
    CalculateHours --> UpdateTotalSeconds2["Update total_seconds = total_seconds % 3600"]
    UpdateTotalSeconds2 --> CalculateMinutes["Calculate minutes = total_seconds / 60"]
    CalculateMinutes --> CalculateSeconds["Calculate seconds = total_seconds % 60"]
    
    CalculateSeconds --> DisplayResult[/"Display the result in days, hours, minutes, and seconds"/]
    DisplayResult --> End([End])
