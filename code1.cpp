#include <iostream>
#include <map>
using namespace std;

int main() {

// Morse Code Dictionary
map<char, string> morseCode = {
{'A', ".-"},
{'B', "-..."},
{'C', "-.-."},
{'D', "-.."},
{'E', "."},
{'F', "..-."},
{'G', "--."},
{'H', "...."},
{'I', ".."},
{'J', ".---"},

{'K', "-.-"},
{'L', ".-.."},
{'M', "--"},
{'N', "-."},
{'O', "---"},
{'P', ".--."},
{'Q', "--.-"},
{'R', ".-."},
{'S', "..."},
{'T', "-"},
{'U', "..-"},
{'V', "...-"},
{'W', ".--"},
{'X', "-..-"},
{'Y', "-.--"},
{'Z', "--.."}
};

string message;

cout << "Enter a message: ";
getline(cin, message);

cout << "\nMorse Code Translation:\n";

// Convert each character
for (char ch : message) {

// Convert lowercase to uppercase
ch = toupper(ch);

// Check for spaces
if (ch == ' ') {
cout << " / ";
}
else {
cout << morseCode[ch] << " ";
}
}

cout << endl;

return 0;
}