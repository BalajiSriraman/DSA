
// TODO: Recursive approach

// class Solution {
// public:
//     int fib(int n) {


//         unordered_map<int, int> memo;
        
//         if(n==0){
//             return 0;
//         }


//         if(n==1){
//             return 1;
//         }

//         if(memo.count(n)){
//             return memo[n];
//         }


//      int fibo = fib(n-1) + fib(n-2);

//       memo[n] = fibo;

//       return fibo;

//     }
// };

// TODO: Iterative way

class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }

        int prev1 = 0, prev2 = 1;
        int curr;

        for (int i = 2; i <= n; i++) {
            curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }

        return prev2;
    }
};