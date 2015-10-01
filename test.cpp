#include <iostream>
#include <string>
using namespace std;

const static int SECONDS_PER_HOUR = 3600;
const static int SECONDS_PER_MINUTE = 60;

void convert(int seconds, string &str)
{
    // compute
    int left = 0;
    int hours = seconds/SECONDS_PER_HOUR;
    left = seconds - hours*SECONDS_PER_HOUR;
    int minutes = left/SECONDS_PER_MINUTE;
    left -= minutes*SECONDS_PER_MINUTE;

    string hours_str = to_string(hours);
    if (hours_str.length() == 1) {
        hours_str.insert(0, "0");
    }
    str += hours_str;

    str += ":";

    string minutes_str = to_string(minutes);
    if (minutes_str.length() == 1) {
        minutes_str.insert(0, "0");
    }
    str += minutes_str;

    str += ":";

    string seconds_str = to_string(left);
    if (seconds_str.length() == 1) {
        seconds_str.insert(0, "0");
    }
    str += seconds_str;

}

int main()
{
    string str;
    convert(3600, str);
    cout << str << endl;
    return 0;
}
