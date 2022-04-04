#include <stdio.h>
#include <iostream>
#include <string>

class TextInput{
private:
    std::string value;
public:
    virtual void add(char c){
        value=value+c;
    }
    std::string getValue() {
        return value;
    }
    
};
class NumericInput: public TextInput{
private:
    //std::string value;
public:
    void add(char c){
        if(!isalpha(c)){
            //is numeric
            return TextInput::add(c);
        }
        
    }
};
int main(){
TextInput* input = new NumericInput();
input->add('1');
input->add('a');
input->add('0');
std::cout << input->getValue();
// the output should be 10
}