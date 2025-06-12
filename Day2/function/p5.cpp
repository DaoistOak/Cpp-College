
int calculate_lcm(int a, int b){
    int max_num = (a > b) ? a : b;
    int lcm = max_num;

    while(true){
        if(lcm % a == 0 && lcm % b == 0){
            break;
        }
        lcm += max_num;
    }

    return lcm;
}

int main(){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int lcm = calculate_lcm(num1, num2);
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm;

    return 0;
}

