int calculate_hcf(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    int hcf = calculate_hcf(num1, num2);
    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcf;
    
    return 0;
}
