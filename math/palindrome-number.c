bool isPalindrome(int x) {
    int reverse=0;
    int num;
    int rem;
    num=x;
    if(num<0) 
    return false;
        while(num!=0){
            rem=num%10;
            reverse=reverse*10+rem;
            num=num/10;
        }
        if(reverse==x){
            return true;
        }
        else
            return false;
    
    
}

//the above code is not optimal 
// we can optimize it by only reversing half of the number 

bool isPalindrome(int x) {
    if(x < 0 || (x % 10 == 0 && x != 0)) return false;

    int reversed = 0;

    while(x > reversed) {
        int rem = x % 10;
        reversed = reversed * 10 + rem;
        x = x / 10;
    }

    return (x == reversed) || (x == reversed / 10);
} 

