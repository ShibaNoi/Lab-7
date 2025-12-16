//ไม่ต้องเติม function main()
#include <iostream>
using namespace std;

char before(char x){
    if (x == 'A'){
        x='Z';
        return x;
    }
    else{
        if(x>='B' && x<='Z'){
            x=x-1;
            return x;
        }
        else{
            x='0';
            return x;
        }
    }

}
