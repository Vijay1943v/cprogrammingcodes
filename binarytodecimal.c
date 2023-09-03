#include <stdio.h>

int main()
{
public:
    int convertToDecimal(int binary) {
        int decimal = 0;
        int base = 1;
        
        while (binary > 0) {
            int lastDigit = binary % 10;
            binary = binary / 10;
            
            decimal += lastDigit * base;
            base *= 2;
        }
        
        return decimal;
    }
};

int main() {
    BinaryToDecimalConverter converter;
    int binaryNumber = 101010;
    int decimalNumber = converter.convertToDecimal(binaryNumber);
    
    printf("Binary: %d\n", binaryNumber);
    printf("Decimal: %d\n", decimalNumber);
    
    return 0;
}
