int reverse(int n){
    int rev=0;
    while(n!=0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}

bool is_palindrome(int num){
    int reversed_num = reverse(num);
    return num == reversed_num;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(is_palindrome(num)){
        cout << num << " is a palindrome.";
    }else{
        cout << num << " is not a palindrome.";
    }
}
