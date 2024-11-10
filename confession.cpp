#include <iostream>
#include <vector>
using namespace std;

// Function to calculate total time spent in a day
int calculateTotalTime(int reading, int writing) {
    return reading + writing;
}

// Function to provide roast feedback based on total time spent
void roastFeedback(int totalTime) {
    if (totalTime > 120) {
        cout << "Oh bhai, 2 ghante confessions mein laga diye?! Kya NASA mein "
             << "job lagne wali hai is se? Acha hota yehi time kisi kaam ki cheez "
             << "pe lagate. Zindagi mein kuch bara karna hai ya bas yahan hi phasna "
             << "hai?\n";
    } else if (totalTime >= 60 && totalTime <= 120) {
        cout << "Vah, lagta hai aj sirf confession scroll karne ka irada tha. 1 se 2 "
             << "ghante waste karke samajhte ho tumhari life set ho jayegi? Thora "
             << "focus apne real goals pe bhi rakho, shayad kuch ban jao.\n";
    } else {
        cout << "Chalo, kam az kam tumne apni zindagi ke 1 ghante se kam hi "
             << "barbaad kiye. Isi tarah control mein raho aur asli zindagi mein bhi "
             << "kuch kar dikhane ka irada rakho!\n";
    }
}

// Main function
int main() {
    vector<int> readingTime(7);
    vector<int> writingTime(7);
    int weeklyTotalTime = 0;

    // Step 1: Input daily times
    for (int day = 0; day < 7; ++day) {
        cout << "Enter time spent reading confessions for day " << day + 1 << " (in minutes): ";
        cin >> readingTime[day];
        cout << "Enter time spent writing confessions for day " << day + 1 << " (in minutes): ";
        cin >> writingTime[day];
    }

    // Step 2: Calculate daily totals, roast feedback, and accumulate weekly total
    for (int day = 0; day < 7; ++day) {
        int dailyTotal = calculateTotalTime(readingTime[day], writingTime[day]);
        cout << "Day " << day + 1 << " total time: " << dailyTotal << " minutes\n";
        roastFeedback(dailyTotal);
        weeklyTotalTime += dailyTotal;
    }

    // Step 3: Weekly summary roast
    cout << "\nWeekly Summary:\n";
    if (weeklyTotalTime > 600) {
        cout << "Kya baat hai, 10 ghante se zyada confessions mein ghusa hua hai? Jawan admi ho ya "
             << "waqt barbaad karne ki machine? Kuch productive cheez socho, warna ye confessions "
             << "tumhari CV mein nahi likhe jayenge!\n";
    } else {
        cout << "Wah bhai, lagta hai thoda waqt manage karna seekh rahe ho! Isi tarah apne goals "
             << "par focus karo, warna ye confession wali duniya tumhe kabhi aagay nahi le jaayegi. "
             << "Shabash, sahi raho!\n";
    }

    return 0;
}
