#include <iostream>
using namespace std;

int main() {
    
    long long fileSizeBytes = 419430400;
    
    int transmissionRate = 960; 

    
    long long timeInSeconds = fileSizeBytes / transmissionRate;

  
    int hours = timeInSeconds / 3600;
    timeInSeconds %= 3600;  
    int minutes = timeInSeconds / 60;
    int seconds = timeInSeconds % 60;


    cout << "Time to send the file:" << endl;
    cout << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;

    return 0;
}
