class Solution {
public:
    int findMinFibonacciNumbers(int k){
        vector<int>fibs; // creating fibanocci numbers 
        int a = 1, b = 1;
        fibs.push_back(a);
        while(b <= k){
            fibs.push_back(b);
            int temp = b;
            b = a + b;
            a = temp;
        }
           
        int count = 0;
        int i = fibs.size() - 1; // Start from the largest Fibonacci number
        while(i >= 0 && k > 0){
            if(fibs[i] <= k){
                k -= fibs[i];
                count++;
            }else{
                i--; // Move to the next smaller Fibonacci number
            }
        }
        return count;
    }
};
