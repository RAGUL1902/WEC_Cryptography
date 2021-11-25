#include<bits/stdc++.h>

using namespace std;

const string menu = "Enter 1 to rotate every character in the string\nEnter 2 to encode it to base64\nEnter 3 to decode it from base64\nEnter 4 to end program\n-->";
const string charSet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

void rotateCharacters(string s, int val){
    
    val %= 26;
    for(auto &i : s){
        if(i >= 'A' and i <= 'Z')
        i =  (i - 'A' + val)%26 + 'A';
    }
    cout<<s<<endl;
    return;
}

void encodeToBase64(string str){
    string result = "";
    int i;
    int j;
    int temp;
    int index;
    int len = str.length();
    int numberOfBits = 0;
    int padding = 0;
    int value = 0;
    int count = 0;

    for(i = 0; i < len; i += 3){
        value = 0;
        count = 0;
        numberOfBits = 0;
        
        for(j = i; j < len && j <= i+2; j++){
            value = value << 8;
            value = value | str[j];
            count += 1;
    
        }

        numberOfBits = 8 * count;
        padding = numberOfBits%3;

        while(numberOfBits != 0){

            if(numberOfBits >= 6){

                temp = numberOfBits - 6;
                index = (value >> temp)  & 63;
                numberOfBits -= 6;
            }
            else {
                temp = 6 - numberOfBits;
                index = (value << temp) & 63;
                numberOfBits = 0;
            }

            result.push_back(charSet[index]);
        }
    }

    for(i = 1; i <= padding; i++){
        result.push_back('=');
    }

    cout<<result<<endl;
    return;
}

int findIndexInCharSet(char c){
    for(int i = 0; i < 64; i++){
        if(c == charSet[i]){
            return i;
        }
    }
    return -1;
} 

void decodeFromBase64(string str){
    string result = "";
    int i;
    int j;
    int value = 0;
    int numberOfBits = 0;
    int len = str.length();
    for(i = 0; i < len; i += 4 ){
        value = 0;
        numberOfBits = 0;
        for(j = i; j < len && j <= i+3 ;j++){
            if(str[j] != '='){
                value = value << 6;
                numberOfBits += 6;
            }

            int idx = findIndexInCharSet(str[j]);
            if(idx != -1){
                value = value | idx;
            }
            else{
                value = value >> 2;
                numberOfBits -= 2;
            }
        }
        while(numberOfBits != 0){
            numberOfBits -= 8;
            result.push_back((value >> numberOfBits) & 255);
        }
    }

    cout<<result<<endl;
    return;
}





int main(){
    while(1){
        string s;
        int val;
        cout<<menu;
        int option;
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"Enter the input string: ";
            cin>>s;
            cout<<"Enter the number of character places to rotate:";
            cin>>val;
            cout<<"\nOutput string: "<<endl;
            rotateCharacters(s,val);
            cout<<endl;            
            break;
        
        case 2:
            cout<<"Enter the input string: ";
            cin>>s;
            cout<<"\nOutput string: "<<endl;
            encodeToBase64(s);
            cout<<endl;
            break;

        case 3:
            cout<<"Enter the input string: ";
            cin>>s;
            cout<<"\nOutput string: "<<endl;
            decodeFromBase64(s);
            cout<<endl;
            break;
        
        case 4:
            return 0;

        default:
            cout<<"Enter a valid option"<<endl;
            break;
        }
    }
    return 0;
}
