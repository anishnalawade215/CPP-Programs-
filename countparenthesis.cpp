//Simple count parenthesis program 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); 
    //cin >> input reads input until it encounters a whitespace (space, tab, newline), which means it cannot read multi-word strings properly.
    //getline(cin, input) reads the entire line, including spaces, until the newline character is encountered.
    
    int openCount = 0;
    int closeCount = 0;

    // Loop through each character in the string
    for (char c : input) {
        if (c == '(') {
            openCount++;
        } else if (c == ')') {
            closeCount++;
        }
    }

    cout << "Number of opening parentheses: " << openCount << endl;
    cout << "Number of closing parentheses: " << closeCount << endl;

    return 0;
}


//Difficult program

// #include<iostream>
// #include<stack>

// int countCompleteParenthesis(const std::string& s)
// {
//     std::stack<char> parenStack;
//     int count = 0;

//         for( char c :s)
//         {
//             if( c=='{' || c=='[' || c=='(') 
//             {   
//                 parenStack.push(c);
            
//             }else if(!parenStack.empty() && (c=='}' || c==']' || c==')'))
//             {
//                 parenStack.pop();
//                 count++;
//             }
//         }

//         return count;
// }

// int main()
// {
//     std::string inputString = "}{}{{}}{}{";
//     int result = countCompleteParenthesis(inputString);
//     std::cout << "count of complete Parentheses:" << result << std::endl;

//     return 0;
// }