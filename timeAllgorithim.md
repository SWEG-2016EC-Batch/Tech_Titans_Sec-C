# Algorithm for File Transmission Time Calculation
## Steps
1. **Start** the program.
2. **Initialize** the file size in bytes (`fileSizeBytes`) to 419430400 bytes.
3. **Initialize** the transmission rate in bytes per second (`transmissionRate`) to 960 bytes per second.
4. **Calculate** the time to send the file in seconds:
   \[
   \text{timeInSeconds} = \frac{\text{fileSizeBytes}}{\text{transmissionRate}}
   \]
5. **Calculate** the number of hours:
   \[
   \text{hours} = \frac{\text{timeInSeconds}}{3600}
   \]
6. **Update** the remaining time in seconds after calculating hours:
   \[
   \text{timeInSeconds} = \text{timeInSeconds} \% 3600
   \]
7. **Calculate** the number of minutes:
   \[
   \text{minutes} = \frac{\text{timeInSeconds}}{60}
   \]
8. **Calculate** the remaining seconds:
   \[
   \text{seconds} = \text{timeInSeconds} \% 60
   \]
9. **Display** the time to send the file in hours, minutes, and seconds.
10. **End** the program.
