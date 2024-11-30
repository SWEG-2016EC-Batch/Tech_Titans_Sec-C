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
