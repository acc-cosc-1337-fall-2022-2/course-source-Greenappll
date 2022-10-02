//add include statements

//add function(s) code here
int factorial(int num){
    int sum;
    while (num > 0)
      sum = num * num;
      num = num - 1;
    return sum;

}

int gcd(int num1, int num2){
    int storage;
    while (!num1 == num2){
        if (num1 < num2){
            storage = num1;
            num1 = num2;
            num2 = storage;
            }
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
    }
return num1;
    
}

