#include<iostream>
using namespace std;

/*   first method   */


int binary_to_decimal(int n){
    int num = n;
    int dec_value = 0;
    int base =1;
    int temp = num;
    while(temp){
        int last_digit = temp%10;
        temp = temp/10;
        dec_value += last_digit*base;
        base = base*2;
    }
    return dec_value;
}
int main(){
    int n = 1000110;
    cout << "Binary to Decimal is : "<<binary_to_decimal(n)<<endl;
    return 0;
}


/*   second method  */

// #include <iostream>
// #include <string>
// using namespace std;


// int binaryToDecimal(string n)
// {
// 	string num = n;
// 	int dec_value = 0;

// 	int base = 1;

// 	int len = num.length();
// 	for (int i = len - 1; i >= 0; i--) {
// 		if (num[i] == '1')
// 			dec_value += base;
// 		base = base * 2;
// 	}

// 	return dec_value;
// }


// int main()
// {
// 	string num = "10101001";
// 	cout << binaryToDecimal(num) << endl;
// }
