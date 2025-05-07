#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    string input;

    cout << "🤖 Welcome to City Hospital Assistant!" << endl;
    cout << "How can I help you today?" << endl;
    cout << "Type 'exit' to end the chat.\n" << endl;

    while (true) {
        cout << "You: ";
        getline(cin, input);
        string lowerInput = toLower(input);

        if (lowerInput.find("appointment") != string::npos || lowerInput.find("book") != string::npos) {
            cout << "Bot: You can book an appointment by calling 123-456-7890 or visiting our website at www.cityhospital.com." << endl;
        } else if (lowerInput.find("time") != string::npos || lowerInput.find("open") != string::npos || lowerInput.find("close") != string::npos) {
            cout << "Bot: We are open from 8 AM to 8 PM, Monday to Saturday." << endl;
        } else if (lowerInput.find("doctor") != string::npos || lowerInput.find("available") != string::npos) {
            cout << "Bot: Our general physicians are available all day. Specialists are available by appointment." << endl;
        } else if (lowerInput.find("emergency") != string::npos || lowerInput.find("ambulance") != string::npos) {
            cout << "Bot: For emergencies, please dial our 24/7 helpline at 999 or visit the ER directly." << endl;
        } else if (lowerInput == "exit" || lowerInput == "bye") {
            cout << "Bot: Thank you for using City Hospital Assistant. Stay healthy!" << endl;
            break;
        } else {
            cout << "Bot: Sorry, I didn't understand that. You can ask about appointments, timings, or emergency services." << endl;
        }
    }

    return 0;
}